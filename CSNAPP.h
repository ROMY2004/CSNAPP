#pragma once
#include <string>
#include <vector>
#include <unordered_map>
#include <msclr/marshal_cppstd.h>
#include <fstream>
#include <sstream>
#include <set>
#include <list>
#include "User.h"
#include "NewsApp.h"
#include "Visitor.h"
#include "Admin.h"
#include <queue>
using namespace System;
using namespace msclr::interop;
std::string toStandardString(String^ string)
{
    return marshal_as<std::string>(string);
}
String^ toSystemString(std::string str)
{
    return marshal_as<String^>(str);
}
int activeUser;
int idOfusersapp=1;
public class CSNAPP {
   
public:
    static std::queue <NewsApp>  LatestNews;
    static std::vector <NewsApp>  News;
    static std::unordered_map < Datetime, std::list<NewsApp>> DateAndNews;
    static std::unordered_map < std::string , std::set <NewsApp>> categoryNews;
    static std::vector<User*> Users;
    static bool logIn(const std::string& username, const std::string& password) {
        for (int i = 0; i < Users.size(); i++) {
            if ((Users[i]->getUsername() == username || Users[i]->getEmail() == username) && Users[i]->getPassword() == password) {
                return true; // login successful
                activeUser = i;
            }
        }
        return false; // login failed
    }
    static int signUp(std::string username, std::string password, int age, std::string email, std::string phone) {
        int i = 0;
        for (; i < Users.size(); i++) {
            if (Users[i]->getUsername() == username || Users[i]->getPhone() == phone || Users[i]->getEmail() == email) {
                return 0; // signUp failed
            }
        }
        // signUp successful
        return 1;
    }
    static bool isPasswordStrong(const std::string& password) {
        const int minLength = 6;
        bool hasUpperCase = false;
        bool hasLowerCase = false;
        bool hasDigit = false;

        for (char ch : password) {
            if (isupper(ch)) {
                hasUpperCase = true;
            }
            else if (islower(ch)) {
                hasLowerCase = true;
            }
            else if (isdigit(ch)) {
                hasDigit = true;
            }
        }
        return password.length() <= minLength && hasUpperCase && hasLowerCase && hasDigit;
    }
    static void ReadingFiles()
    {
        std::ifstream infile1, infile2;
        infile1.open("D:\\CSN\\CSN\\Users.txt");
        infile2.open("D:\\CSN\\CSN\\News.txt");
        int id = 0, year = 0, month = 0, day = 0, age = 0, numofNews = 0;
        double rate;
        std::string title, des, category, name, email, password, phone, role, pic;

        short j = 0;
        size_t pos = 0;

        std::string line1;
        std::getline(infile1, line1);

        pos = line1.find("-");
        idOfusersapp = stoi(line1.substr(0, pos));
        line1.erase(0, pos + 1);
        while (j < idOfusersapp-1 )
        {
            pos = line1.find("-");
            id = stoi(line1.substr(0, pos));
            line1.erase(0, pos + 1);

            pos = line1.find("-");
            name = line1.substr(0, pos);
            line1.erase(0, pos + 1);

            pos = line1.find("-");
            email = line1.substr(0, pos);
            line1.erase(0, pos + 1);

            pos = line1.find("-");
            password = line1.substr(0, pos);
            line1.erase(0, pos + 1);

            pos = line1.find("-");
            phone = line1.substr(0, pos);
            line1.erase(0, pos + 1);

            pos = line1.find("-");
            role = line1.substr(0, pos);
            line1.erase(0, pos + 1);

            pos = line1.find("-");
            age = stoi(line1.substr(0, pos));
            line1.erase(0, pos + 1);

            pos = line1.find("-");
            pic = (line1.substr(0, pos));
            line1.erase(0, pos + 1);
            if (role == "Admin") {
                CSNAPP::Users.push_back(new Admin(1, "hema", "ibrahimromia101@gmail.com", "hema123", "01012934876", "Admin", "C:\\Users\\ibrah\\Desktop\\pic.jpg", 21));
            }
            else {
                CSNAPP::Users.push_back(new Visitor(1, "hema", "ibrahimromia101@gmail.com", "hema123", "01012934876", "Visitor", "C:\\Users\\ibrah\\Desktop\\pic.jpg", 21));
            }
            j++;
        }

        std::string line2;
        std::getline(infile2, line2);

        pos = line2.find("-");
        numofNews = stoi(line2.substr(0, pos));
        line2.erase(0, pos + 1);
        while (j <= numofNews)
        {
            pos = line2.find("-");
            id = stoi(line2.substr(0, pos));
            line2.erase(0, pos + 1);
            pos = line2.find("-");
            title = (line2.substr(0, pos));
            line2.erase(0, pos + 1);
            pos = line2.find("-");
            category = line2.substr(0, pos);
            line2.erase(0, pos + 1);
            pos = line2.find("-");
            des = line2.substr(0, pos);
            line2.erase(0, pos + 1);
            pos = line2.find("-");
            rate = stod(line2.substr(0, pos));
            line2.erase(0, pos + 1);
            pos = line2.find("-");
            year = stoi(line2.substr(0, pos));
            line2.erase(0, pos + 1);
            pos = line2.find("-");
            month = stoi(line2.substr(0, pos));
            line2.erase(0, pos + 1);
            pos = line2.find("-");
            day = stoi(line2.substr(0, pos));
            line2.erase(0, pos + 1);
            NewsApp Newsdata(title, des, Datetime(year, month, day), category);
            News.push_back(Newsdata);
            CSNAPP::DateAndNews[Datetime(std::stoi(Newsdata.getDateyear()), std::stoi(Newsdata.getDatemonth()), std::stoi(Newsdata.getDateday()))].push_back(Newsdata);
            CSNAPP::LatestNews.push(Newsdata);
            CSNAPP::categoryNews[Newsdata.getcategory()].insert(Newsdata);
            j++;
        }
    }
    static void WritingFiles()
    {
        std::ofstream outfile1, outfile2;
        outfile1.open("Users.txt");
        outfile2.open("News.txt");
        outfile1 << idOfusersapp << '-';
        for (int i = 0; i < CSNAPP::Users.size(); i++)
        {
            outfile1 << CSNAPP::Users[i]->getId()
                << '-' << CSNAPP::Users[i]->getUsername()
                << '-' << CSNAPP::Users[i]->getEmail()
                << '-' << CSNAPP::Users[i]->getPassword()
                << '-' << CSNAPP::Users[i]->getPhone()
                << '-' << CSNAPP::Users[i]->getRole()
                << '-' << CSNAPP::Users[i]->getAge()
                << '-' << CSNAPP::Users[i]->getPic() << '-';
        }
        outfile2 << CSNAPP::News.capacity()+1<<'-';
        for (int i = 0; i < CSNAPP::News.size(); i++)
        {
            outfile2 << CSNAPP::News[i].getId() << '-'
                << CSNAPP::News[i].getTitle()
                << '-' << CSNAPP::News[i].getcategory()
                << '-' << CSNAPP::News[i].getdescripiton()
                << '-' << CSNAPP::News[i].getRate()
                << '-' << CSNAPP::News[i].getDateyear() 
                << '-' << CSNAPP::News[i].getDatemonth()
                << '-' << CSNAPP::News[i].getDateday() << '-';
        }
    }
};
std::vector <User*> CSNAPP::Users;
std::vector <NewsApp>  CSNAPP::News;
std::unordered_map < Datetime, std::list<NewsApp>>  CSNAPP::DateAndNews;
std::queue <NewsApp>  CSNAPP::LatestNews;
std::unordered_map < std::string, std::set <NewsApp>> CSNAPP::categoryNews;