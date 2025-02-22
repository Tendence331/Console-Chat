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

    void registerUser(std::string& login, std::string& password, std::string& name);          // регистрация пользователя
    bool loginUser(std::string& login, std::string& password);                                // авторизация пользователя должен возвращать true если удачно, если нет то false
    
    void displayUsers();                                                                      // вывод пользователей

    void sendToUser(std::string& recipient, std::string& sender, std::string& text);          // отправка сообщения пользователю
    void viewChat();                                                                          // отправка сообщения в чат
    ~Chat() = default;
private:
    User *_currentUsers = {nullptr};    // текущий пользователи                       
    std::shared_ptr<User> user;         // зарегистрированные пользователи
    std::shared_ptr<Message> message;   // сообщения
};