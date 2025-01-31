#include "Chat.h"

void Chat::registerUser(std::string &login, std::string &password, std::string &name)           // регистрация пользователя
{
    std::shared_ptr<User> counter = user;                                                       // счетччик counter ссылается на один и тот же объект user
    while (counter)
    {
        if (counter->getLogin() == login)
        {
            std::cout << "Пользователь с логином " << login << " уже существует!" << std::endl;
            std::cout << "Пройдите регистрацию снова!" << std::endl;
            return;
        }
    }
    std::shared_ptr<User> newUser = std::make_shared<User>(name, login, password);              // Добавляем нового пользователя
    newUser->setLogin(login);                                                                   // Новый пользователь указывает на предыдущего
    user = newUser;                                                                             // Новый пользователь становится началом списка
    std::cout << "Пользователь " << "[" << name << "]" << " зарегистрирован!" << std::endl;
}

bool Chat::loginUser(std::string &login, std::string &password)                                 // авторизация пользователя
{
    std::shared_ptr<User> counter = user;                                                       // cчетчик сounter ссылается на один и тот же объект user 
    while (counter)
    {
        if (counter->getLogin() == login && counter->getPass() == password)                     // счетчик обращается к методу ->getLogin() и спрашивает равен ли он логину, так же для пароля
        {
            _currentUsers = counter.get();                                                      // текущий пользователь возвращает адрес авторизированного пользователя
            std::cout << "Пользователь " << "[" << counter->getName() << "]" << " успешно вошел" << std::endl;   
            return true;
        }
    }
    std::cout << "Ошибка ввода логина и пароля" << std::endl;
    return false;
}

void Chat::displayUsers()
{
    std::cout << "Пользователь: " << _currentUsers->getName() << " логин: " << _currentUsers->getLogin() << std::endl;
}

void Chat::sendToUser(std::string &recipient, std::string &sender, std::string &text)
{
    while (!_currentUsers)
    {
        std::cout << "Вы не авторизированы!" << std::endl;
        break;
    }
    std::shared_ptr<Message> msg = std::make_shared<Message>(recipient, sender, text);
    msg->sendMessages();
    
}

void Chat::viewChat()
{
    std::shared_ptr<Message> msg = message;
    while (_currentUsers)
    {
        if (msg->getRecipient() == "all")
        {
            std::cout << "Чат: " << msg->getSender() << ": " << msg->getText() << std::endl;
        }
    }
    
}

