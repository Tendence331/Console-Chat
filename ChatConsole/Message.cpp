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

void Message::sendMessages()
{
    std::cout << "Кому: " << _recipient << "От кого: " << _sender << "Сообщение: " << _text << std::endl;
}
