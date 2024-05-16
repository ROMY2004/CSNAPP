#pragma once
#include "CSNAPP.h"
#include "NewsApp.h"
#include "User.h"
#include <list>
#include<queue>
class Admin : public User
{
public:
    Admin(const std::string& username, const std::string& email, const std::string& password, const std::string& phone, const std::string& role, const std::string& pi, int age)
        :User(username, email, password, phone, role, pi, age) {}
    Admin(const int id, const std::string& username, const std::string& email, const std::string& password, const std::string& phone, const std::string& role, const std::string& pi, int age)
        :User(id,username, email, password, phone, role, pi, age) {}
    std::string getRole() override { return "Admin"; }
    bool postNews( std::string& title,  std::string& description,  Datetime& date,  std::string& category,  std::unordered_map < std::string, std::set <NewsApp>>& categoryNews, std::vector <NewsApp>&  News, std::queue <NewsApp>& LatestNews, std::unordered_map < Datetime, std::list<NewsApp>>& DateAndNews)
    {
        std::stringstream ss(title);
        std::string word;
        int count = 0;
        while (ss >> word) {
            count++;
        }
        if (count < 5)
        {
            return false;
        }
        count = 0;
        ss.clear();
        ss << description.c_str();
        while (ss >> word) {
            count++;
        }
        if (count < 7)
        {
            return false;
        }

        NewsApp Newsdata(title, description, date, category);
        News.push_back(Newsdata);
        categoryNews[category].insert(Newsdata);
        if (LatestNews.size() == 18)
        {
            LatestNews.pop();
            LatestNews.push(Newsdata);
        }
        else
        {
            LatestNews.push(Newsdata);
        }
        DateAndNews[date].push_back(Newsdata);
        return true;
    }
   
    bool addCategory(const std::string& category, std::unordered_map < std::string, std::set <NewsApp>>& categoryNews)
    {
        if (categoryNews.find(category) != categoryNews.end())
        {
            return false;
        }
        categoryNews[category];
        return true;
    }

    void removeNewsofVector(NewsApp removenews, std::vector <NewsApp>& News)
    {
        for (int i = 0; i < News.size(); i++)
        {
            if (News[i].getTitle() == removenews.getTitle() && News[i].getdescripiton() == removenews.getdescripiton())
            {
                News.erase(News.begin() + i);
                break;
            }
        }
    }

    void removeNewsofMap(NewsApp& removenews, std::unordered_map < std::string, std::set <NewsApp>>& categoryNews)
    {
        
        auto it = categoryNews.find(removenews.getcategory());
        if (it != categoryNews.end()) {
            auto& newsSet = it->second;
            auto newsIt = newsSet.find(removenews);
            if (newsIt != newsSet.end()) {
                newsSet.erase(newsIt);
                // If the set becomes empty, remove the key from the map
                if (newsSet.empty()) {
                    categoryNews.erase(it);
                }
            }
        }
    }

    static void updateNewsQueue(std::queue <NewsApp>& LatestNews, std::vector <NewsApp> & News)
    {
        while (!LatestNews.empty())
        {
            LatestNews.pop();
        }
        for (int i = 1; i <= News.size() && LatestNews.size() < 18; i++)
        {
            LatestNews.push(News[News.size()-i]);
        }
    }

    void removeNews(NewsApp& removenews,std::vector <NewsApp>& News, std::queue <NewsApp>& LatestNews, std::unordered_map < std::string, std::set <NewsApp>>& categoryNews, std::unordered_map < Datetime, std::list<NewsApp>>& DateAndNews)
    {
        removeNewsofVector(removenews, News);
        removeNewsofMap(removenews, categoryNews);//
        updateNewsQueue(LatestNews, News);
        removeNewsMapDate(removenews,DateAndNews);//
    }
    void removeNewsMapDate(NewsApp& removenews, std::unordered_map<Datetime, std::list<NewsApp>>& DateAndNews)
    {
        // Get the list associated with the specified date
        auto& newsList = DateAndNews[removenews.getDate()];
        // Iterate through the list to find and remove the news item
        auto it = newsList.begin();
        while (it != newsList.end()) {
            if (*it == removenews) {
                it = newsList.erase(it); // erase() advances iterator
                break;
            }
            else {
                ++it;
            }
        }
    }

};
