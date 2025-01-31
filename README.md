# Итоговый проект - консольный чат

Участник проекта - Харитонов Вячеслав

Описание классов и методов

Созданы 3 класса:
1. Класс User
Хранит в себе данные о пользователе такие как - логин, пароль, имя
Функции(методы):
* Геттеры
* Сеттеры
2. Класс Message
Хранит в себе данные о сообщении - отправитель, получатель, текст
* void sendMessages() - просмотр отправленного сообщения
* Геттеры
* Сеттеры
3. Класс Chat
Хранит в себе массивы на класс User и Message
Так же текущие пользователи - currentUsers
Функции:
void registerUser() - функция регистрации пользователя
bool loginUser() - функция авторизации пользователя
void sendToUser() - отправка сообщения пользователю
void viewChat() - просмотр всех сообщений в чате

Главный main()

1.Регистрация пользователя.

2.Авторизация пользователя.

3.Отправка сообщения пользователю.

4.Просмотр сообщений.

5.Просмотр авторизованных пользователей.

Для выхода необходимо ввести 0.
