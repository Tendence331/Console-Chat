#pragma once
#include <iostream>
#include <string>

class Message
{
public:
    Message(const std::string& recipient, const std::string& text, const std::string& sender);
    ~Message() = default;
    std::string getRecipient() const;
    std::string getText() const;
    std::string getSender() const;
    void sendMessages();
private:
    std::string _recipient;     // получатель
    std::string _text;          // сообщение
    std::string _sender;        // отправитель
};