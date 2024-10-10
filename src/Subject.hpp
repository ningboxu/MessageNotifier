// Subject.hpp
#pragma once
#include "Observer.hpp"
#include <vector>
#include <memory>
#include <algorithm>

class Subject
{
private:
    std::vector<std::shared_ptr<Observer>> observers;

public:
    void addObserver(std::shared_ptr<Observer> observer)
    {
        observers.push_back(observer);
    }

    void removeObserver(std::shared_ptr<Observer> observer)
    {
        observers.erase(
            std::remove(observers.begin(), observers.end(), observer),
            observers.end());
    }

    // 通知所有观察者
    void notify(std::shared_ptr<Message> message)
    {
        for (const auto& observer : observers)
        {
            observer->update(message);
        }
    }
};
