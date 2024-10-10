// MessageFactory.hpp
#pragma once
#include "Message.hpp"
#include <memory>
#include <string>

class MessageFactory
{
public:
    // 创建短信消息
    static std::shared_ptr<Message> createSMSMessage(const std::string& text)
    {
        return std::make_shared<SMSMessage>(text);
    }

    // 创建电子邮件消息
    static std::shared_ptr<Message> createEmailMessage(
        const std::string& subject, const std::string& body)
    {
        return std::make_shared<EmailMessage>(subject, body);
    }
};
