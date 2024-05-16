#pragma once
#include <string>
public class User
{
private:
    int Id;
    std::string Username;
    std::string Email;
    std::string Password;
    std::string Phone;
    std::string pic;
    std::string Role;
    int Age;
public:
    // Constructor
    User(const std::string& username, const std::string& email, const std::string& password, const std::string& phone,const std::string& role, const std::string&pi, int age)
    {
        Username = username;
        Email = email;
        Password = password;
        Phone = phone;
        Age = age;
        pic = pi;
        Role = role;
    }
    User(const int id, const std::string& username, const std::string& email, const std::string& password, const std::string& phone, const std::string& role, const std::string& pi,const int age)
    {
        Id = id;
        Username = username;
        Email = email;
        Password = password;
        Phone = phone;
        Age = age;
        pic = pi;
        Role = role;
    }
    void User::setId(int uid) { Id = uid; }
    void User::setEmail(std::string uEmail) { Email = uEmail; }
    void User::setUsername(std::string uname) { this->Username = uname; }
    void User::setPassword(std::string uPassword) { this->Password = uPassword; }
    void User::setPhone(std::string uphone) { this->Phone = uphone; }
    void User::setAge(int uage) { this->Age = uage; }
    void User::setPic(const std::string& upic) { this->pic = upic; }
    void User::setRole(const std::string& urole) { this->Role = urole; }
    std::string User::getUsername() { return this->Username; }
    std::string User::getPic() { return this->pic; }
    std::string User::getEmail() { return this->Email; }
    std::string User::getPassword() { return this->Password; }
    std::string User::getPhone() { return this->Phone; }
    virtual std::string User::getRole() { return this->Role; }
    int User::getAge() const { return this->Age; }
    int User::getId() const { return Id; }
};
