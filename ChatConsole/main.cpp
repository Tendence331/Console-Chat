#include <iostream>
#include "Chat.h"
using namespace std;

int main()
{
    cout << "Добро пожаловать в Чат" << endl;
    cout << "Войдите или авторизируйтесь" << endl;
    cout << "1. Регистрация" << endl;
    cout << "2. Авторизация" << endl;
    cout << "3. Отправить сообщение пользователю" << endl;
    cout << "4. Отправить сообщение в чат" << endl;
    cout << "Для выхода введите '0' " << endl;

    Chat chat;
    while (true)
    {
        int choise;
        cin >> choise;

        std::string login;
        std::string password;
        std::string name;
        if (choise == 0)
        {
            cout << "Выход из программы" << endl;
            break;
        }
        else if (choise > 4)
        {
            cout << "Неверно! Выберите Вход или Регистрацию!" << endl;
        }
        
        
        switch (choise)
        {
        case 1:
            cout << "Введите логин: " << endl;
            cin >> login;
            cout << "Введите пароль: " << endl;
            cin >> password;
            cout << "Введите имя: " << endl;
            cin >> name;
            // функция регистрации пользователя
            chat.registerUser(login, password, name);
            cout << "Вы успешно зарегистрировались" << endl;
            break;
        case 2:
            cout << "Введите логин: " << endl;
            cin >> login;
            cout << "Введите пароль: " << endl;
            cin >> password;
            // функция авторизации пользователя
            
            cout << "Вы успешно вошли" << endl;
            break;
        case 3:
            cout << "Отправить сообщение пользователю" << endl;
            // функция ввода сообщения и отправки пользоавтелю
            
            break;
        case 4:
            cout << "Отправить сообщение в чат" << endl;
            // функция ввода сообщения и отправки в чат
            
            break;
        default:
            break;
        }
        
    }
    
    return 0;
}