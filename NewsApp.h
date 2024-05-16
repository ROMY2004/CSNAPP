#pragma once
#include <string>
#include <regex>
struct Datetime {
	int year;
	int month;
	int day;
	Datetime(int _year, int _month, int _day) : year(_year), month(_month), day(_day) {}
	//Datetime();
};

namespace std {
	template <>
	struct hash<Datetime> {
		size_t operator()(const Datetime& date) const {
			return hash<int>()(date.year) ^ (hash<int>()(date.month) << 1) ^ (hash<int>()(date.day) << 2);
		}
	};
}

bool operator==(const Datetime& lhs, const Datetime& rhs) {
	return lhs.year == rhs.year && lhs.month == rhs.month && lhs.day == rhs.day;
}

bool compareDates(const Datetime& date1, const Datetime& date2) {
	if (date1.year != date2.year)
		return date1.year < date2.year;
	if (date1.month != date2.month)
		return date1.month < date2.month;
	return date1.day < date2.day;
}
int numOfnews = 1;
class NewsApp
{
private:
	int Id;
	std::string title;
	std::string description;
	Datetime Date;
	std::string Category;
	int NumOfUsersRated = 0;
	double Rate = 0.0;;
public:
	NewsApp( std::string& title,  std::string& description,  Datetime& date,  std::string& category)
		: title(title), description(description), Date(date), Category(category) {
		this->Id = numOfnews ;
		numOfnews++;
	}

	NewsApp(int id, std::string& title, std::string& description, Datetime& date, std::string& category)
		: Id(id), title(title), description(description), Date(date){}


	int getId() const {
		return this->Id;
	}
	void SetRate(double num) {
		NumOfUsersRated++;
		Rate = (Rate * (NumOfUsersRated - 1) + num) / NumOfUsersRated;
	}

	double getRate() const {
		return this->Rate;
	}


	std::string getTitle()const {
		return this->title;
	}

	std::string getDateday()const {
		return std::to_string(Date.day);
	}

	std::string getDatemonth()const {
		return std::to_string(Date.month);
	}

	std::string getDateyear()const {
		return std::to_string(Date.year);
	}

	Datetime getDate() const{
		return this->Date;
	}

	std::string getdescripiton() const{
		return this->description;
	}

	std::string getcategory() const{
		return this->Category;
	}

	void setDateday(int day) {
		this->Date.day = day;
	}
	void setDatemonth(int month) {
		this->Date.month = month;
	}
	void setDateyear(int year) {
		this->Date.year = year;
	}

	void setTitle(std::string title)
	{
		this->title = title;
	}
	void setDes(std::string des)
	{
		this->description = des;
	}
	void setcategory(std::string cat)
	{
		this->Category = cat;
	}
	void setid(int id)
	{
		this->Id = id;
	}

	static bool IsDate(std::string str) {
		std::regex dateRegex("\\d{1,2}/\\d{1,2}/\\d{4}");
		return std::regex_match(str, dateRegex);
	}

	bool ContainsKeyword(const std::string& keyword) const {
		return title.find(keyword) != std::string::npos || description.find(keyword) != std::string::npos;
	}

	// Method to check if the date matches the search date
	bool MatchesDate(const std::string& searchDate) const {
		//Datetime searchDatetime;
		int day, month, year;
		std::istringstream iss(searchDate);
		char discard;	// True if all equals
		iss >> day >> discard >> month >> discard >> year;
		return Date.year == year && Date.month == month && Date.day == day;
	}

	bool operator<(const NewsApp& other) const {
		return Id < other.Id; 
	}

	bool operator==(const NewsApp& other) const {
		// Assuming category is the only attribute for comparison
		return this->getcategory() == other.getcategory();
	}

	bool operator==( NewsApp& other)  {
		// Assuming date is the key for ordering
		return this->getDate() == other.getDate();
	}
};

