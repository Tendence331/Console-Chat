#pragma once
#include <iostream>
#include <string>

class Message
{
public:
    Message(const std::string& recipient, const std::string& text, const std::string& sender);
    ~Message() = default;

    // getter
    std::string getRecipient() const;
    std::string getText() const;
    std::string getSender() const;
    std::shared_ptr<Message> getnextMessage() const;

    //setter
    void setRecipient(const std::string recipient);
    void setText(const std::string text);
    void setSender(const std::string sender);
    void setNextMessage(std::shared_ptr<Message> next);

    void sendMessages();        // просмотр отправленного сообщения
private:
    std::string _recipient;     // получатель
    std::string _text;          // сообщение
    std::string _sender;        // отправитель
    std::shared_ptr<Message> _nextMess;
};