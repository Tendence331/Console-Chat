#pragma once
#include <memory>
#include <string>
#include "User.h"
#include "Message.h"

class User;

class Chat
{
public:
    Chat() = default;

    void registerUser(std::string& login, std::string& password, std::string& name);   // регистрация пользователя
    bool loginUser(std::string& login, std::string& password);   // авторизация пользователя должен возвращать true если удачно, если нет то false
     
    void sendToUser(std::string& recipient, std::string& text);          // отправка сообщения пользователю - сначала надо if(!currentUsers) Вы не авторизированы
    void sendToChat();          // отправка сообщения в чат - сначала надо if(!currentUsers) Вы не авторизированы
    ~Chat() = default;
private:
    User *_currentUsers = {nullptr};    // текущий пользователь                         
    std::shared_ptr<User> user;         // зарегистрированные пользователи
    std::shared_ptr<Message> message;   // сообщения
};