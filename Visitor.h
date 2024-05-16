#pragma once
#include "User.h"
#include <list>
#include <algorithm>
#include <map>
#include <stack>

bool compareByRate(const NewsApp& news1, const NewsApp& news2) {
    return news1.getRate() < news2.getRate();
}

class Visitor : public User
{
    std::list <NewsApp> BookMarkedNews;
    std::list <std::string> favCategory;
    double Rateuser;
public:
    //static std::stack <NewsApp> Trends;
    Visitor(const std::string& username, const std::string& email, const std::string& password, const std::string& phone, const std::string& role, const std::string& pi, int age)
        :User(username, email, password, phone,role,pi, age) {}

    Visitor(const int id,  const std::string& username, const std::string& email, const std::string& password, const std::string& phone, const std::string& role, const std::string& pi, int age)
        :User(username, email, password, phone, role, pi, age) {}

    std::string getRole() override { return "Visitor"; }


    const std::list<NewsApp>& getBookMarkedNews() const {
        return BookMarkedNews;
    }

    void SetRate(double num,NewsApp &news) {
        Rateuser = num ;
        news.SetRate(Rateuser);
    }

    double getRate() {
        return this->Rateuser ;
    }

    // Getter for favCategory list
    const std::list<std::string>& getFavCategory() const {
        return favCategory;
    }

    bool bookMarkNews(NewsApp News) {
        for (const auto& news : BookMarkedNews) {
            if (news.getTitle() == News.getTitle()) {
                return false; // News with the specified title found
            }
        }
        BookMarkedNews.push_back(News);
        return true; // News with the specified title not found        
    }

    void addToFavCategory(std::string category) {
        favCategory.push_back(category);
    }

    static bool isPhoneNumberExist(const std::string& phoneNumber, std::vector<User*>& users) {
        for (int i = 0; i < users.size();i++) {
           if (users[i]->getPhone() == phoneNumber) {
               return true; // Phone number exists in the array
           }
       }
       return false; // Phone number not found in the array
    }

    static void updatePasswordByPhone(const std::string& phoneNumber, std::string& newPassword, std::vector<User*>& users) {
       for (int i = 0; i < users.size(); i++) {
           if (users[i]->getPhone() == phoneNumber) {
               users[i]->setPassword(newPassword);
           }
       }
    }

    static std::stack<NewsApp>  DisplayTrendingNews(std::vector <NewsApp>& News) // need edit
    {
        std::sort(News.begin(), News.end(), compareByRate);
        std::stack <NewsApp> Trends;
        if (!News.empty()) {

            if (News.size() >= 9) {
                for (size_t i = 0; i < 9; i++)// i = 2  
                {
                    if (News[i].getRate() < 2)
                        continue;
                    else
                        Trends.push(News[i]);
                }
            }
            else {
                for (size_t i = 0; i < News.size(); i++)// i = 2  
                {
                    if (News[i].getRate() < 2)
                        continue;
                    else
                        Trends.push(News[i]);
                }
            }
        }
        
        
        return Trends;
    }

    static std::vector <NewsApp> SearchKeyWord(const std::string& keyword, std::vector <NewsApp>& News) {
        std::vector<NewsApp> searchResults;
        for (const auto& news : News) {
            // Check if the news contains the search keyword
            if (news.ContainsKeyword(keyword)) {
                searchResults.push_back(news);
            }
        }
        return searchResults;
    }

    static std::vector <NewsApp> SearchDate(const std::string& searchDate, std::unordered_map < Datetime, std::list<NewsApp>>& DateAndNews) {
        std::vector<NewsApp> searchResults;
        int day, month, year;
        std::istringstream iss(searchDate);
        char discard; // To discard the '/'
        iss >> day >> discard >> month >> discard >> year;
        Datetime searchDatetime(year, month, day);
        if (DateAndNews.find(searchDatetime) != DateAndNews.end()) {
            for (NewsApp news : DateAndNews[searchDatetime])
                searchResults.push_back(news);
        }
        return searchResults;
    }
};
