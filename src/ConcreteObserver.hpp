// ConcreteObserver.hpp
#pragma once
#include "Observer.hpp"
#include <iostream>

class ConcreteObserver : public Observer
{
private:
    std::string name;

public:
    ConcreteObserver(const std::string& observerName) : name(observerName) {}

    void update(std::shared_ptr<Message> message) override
    {
        std::cout << "Observer " << name << " received a message: ";
        message->display();
    }
};
