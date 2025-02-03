#include "User.h"

User::User(std::string& name, std::string& login, std::string& password) : _name{name}, _login{login}, _password{password} {}

std::string User::getName() const
{
    return _name;
}

std::string User::getLogin() const
{
    return _login;
}

std::string User::getPass() const
{
    return _password;
}

std::shared_ptr<User> User::getNextUser() const
{
    return _nextUser;
}

void User::setName(const std::string name)
{
    _name = name;
}

void User::setLogin(const std::string login)
{
    _login = login;
}

void User::setPass(const std::string password)
{
    _password = password;
}

void User::setNextUser(std::shared_ptr<User> next)
{
    _nextUser = next;
}
