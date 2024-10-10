// Message.hpp
#pragma once
#include <iostream>
#include <string>

// 抽象基类：Message
class Message
{
public:
    virtual ~Message()           = default;
    virtual void display() const = 0;
};

// 具体类：SMS 消息
class SMSMessage : public Message
{
private:
    std::string text;

public:
    SMSMessage(const std::string& msg) : text(msg) {}
    void display() const override { std::cout << "SMS: " << text << std::endl; }
};

// 具体类：Email 消息
class EmailMessage : public Message
{
private:
    std::string subject;
    std::string body;

public:
    EmailMessage(const std::string& subj, const std::string& msg)
        : subject(subj), body(msg)
    {
    }

    void display() const override
    {
        std::cout << "Email: [" << subject << "] " << body << std::endl;
    }
};
