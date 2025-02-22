#pragma once
#include "Chat.h"
#include <string>

class User
{
public:
    User() = default;
    User(std::string& name, std::string& login, std::string& password);

    // getter
    std::string getName() const;
    std::string getLogin() const;
    std::string getPass() const;
    std::shared_ptr<User> getNextUser() const;

    // setter
    void setName(const std::string name);
    void setLogin(const std::string login);
    void setPass(const std::string password);
    void setNextUser(std::shared_ptr<User> next);

    ~User() = default;
private:
    std::string _name;          // имя
    std::string _login;         // логин
    std::string _password;      // пароль
    std::shared_ptr<User> _nextUser;
};