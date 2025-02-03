#include "Message.h"

Message::Message(const std::string &recipient, const std::string &text, const std::string &sender) : _recipient{recipient}, _text{text}, _sender{sender} {}

std::string Message::getRecipient() const
{
    return _recipient;
}

std::string Message::getText() const
{
    return _text;
}

std::string Message::getSender() const
{
    return _sender;
}

std::shared_ptr<Message> Message::getnextMessage() const
{
    return _nextMess;
}

void Message::setRecipient(const std::string recipient)
{
    _recipient = recipient;
}

void Message::setText(const std::string text)
{
    _text = text;
}

void Message::setSender(const std::string sender)
{
    _sender = sender;
}

void Message::setNextMessage(std::shared_ptr<Message> next)
{
    _nextMess = next;
}

void Message::sendMessages()
{
    std::cout << "Кому: " << _recipient << " От кого: " << _text << " Сообщение: " << _sender << std::endl;
}
