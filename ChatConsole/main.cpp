#include <iostream>
#include "Chat.h"
using namespace std;

int main()
{
    
    Chat chat;

    while (true)
    {
        cout << "-----------------------------" << endl;
        cout << "Войдите или авторизируйтесь" << endl;
        cout << "1. Регистрация" << endl;
        cout << "2. Авторизация" << endl;
        cout << "3. Отправить сообщение пользователю" << endl;
        cout << "4. Просмотр сообщений" << endl;
        cout << "5. Просмотр всех пользователей" << endl;
        cout << "Для выхода введите '0' " << endl;
        cout << endl;
        cout << "Выберите действие: ";
        int choise;
        cin >> choise;
        cout << endl;


        std::string login;
        std::string password;
        std::string name;
        std::string text;
        if (choise == 0)
        {
            cout << "Выход из программы" << endl;
            break;
        }
        else if (choise > 5)
        {
            cout << "Неверно! Выберите Вход или Регистрацию!" << endl;
        }
        
        switch (choise)
        {
        case 1:
            cout << "-----------------------------" << endl;
            cout << "-------- Регистрация --------" << endl;
            cout << "Введите логин: ";
            cin >> login;
            cout << "Введите пароль: ";
            cin >> password;
            cout << "Введите имя: ";
            cin >> name;
            chat.registerUser(login, password, name);           // метод регистрации пользователя
            cout << "-----------------------------" << endl;
            cout << endl;
            break;
        case 2:
            cout << "-----------------------------" << endl;
            cout << "-------- Авторизация --------" << endl;
            cout << "Введите логин: ";
            cin >> login;
            cout << "Введите пароль: ";
            cin >> password;
            chat.loginUser(login, password);                    // метод авторизации пользователя
            cout << "-----------------------------" << endl;
            cout << endl;
            break;
        case 3:
            cout << "-----------------------------" << endl;
            cout << "----- Отправка сообщения ----" << endl;
            cout << "Введите получателя: ";
            cin >> login;
            cout << "Введите имя отправителя: ";
            cin >> name;
            cout << "Введите текст сообщения: ";
            cin >> text;
            chat.sendToUser(login, name, text);                 // метод ввода сообщения и отправки пользоавтелю
            cout << "-----------------------------" << endl;
            cout << endl;
            break;
        case 4:
            cout << "-----------------------------" << endl;
            cout << "------- Все сообщения -------" << endl;
            cout << endl;
            chat.viewChat();                                    // метод просмотра всех сообщений
            cout << "-----------------------------" << endl;
            cout << endl;
            break;
        case 5:
            cout << "-----------------------------" << endl;
            cout << "Все пользователи" << endl;
            chat.displayUsers();                                // метод просмотра пользователей
            cout << "-----------------------------" << endl;
            cout << endl;
            break;
        default:
            break;
        }
        
    }
    
    return 0;
}