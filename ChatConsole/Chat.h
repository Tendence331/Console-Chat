#pragma once
#include <memory>
#include <string>
#include "User.h"
#include "Message.h"


class Chat
{
public:
    Chat() = default;
    Chat();

    void registerUser(std::string& login, std::string& password, std::string& name);   // регистрация пользователя
    bool loginUser(std::string& login, std::string& password);   // авторизация пользователя

    bool checkUser();           // проверка регистрации пользователя
     
    void sendToUser();          // отправка сообщения пользователю - сначала надо if(!currentUsers) Вы не авторизированы
    void sendToChat();          // отправка сообщения в чат - сначала надо if(!currentUsers) Вы не авторизированы
    ~Chat() = default;
private:
    Chat* _currentUsers = nullptr;                                
    std::shared_ptr<User> user;
    std::shared_ptr<Message> message;
};