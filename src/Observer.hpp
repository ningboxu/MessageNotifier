// Observer.hpp
#pragma once
#include "Message.hpp"
#include <memory>

class Observer
{
public:
    virtual ~Observer()                                   = default;
    virtual void update(std::shared_ptr<Message> message) = 0;
};
