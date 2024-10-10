// main.cpp
#include "MessageFactory.hpp"
#include "Subject.hpp"
#include "ConcreteObserver.hpp"

int main()
{
    // 创建主题（Subject）
    Subject messageCenter;

    // 创建两个观察者
    std::shared_ptr<Observer> observer1 =
        std::make_shared<ConcreteObserver>("Observer1");
    std::shared_ptr<Observer> observer2 =
        std::make_shared<ConcreteObserver>("Observer2");

    // 将观察者添加到主题
    messageCenter.addObserver(observer1);
    messageCenter.addObserver(observer2);

    // 创建消息
    std::shared_ptr<Message> sms =
        MessageFactory::createSMSMessage("Hello via SMS");
    std::shared_ptr<Message> email = MessageFactory::createEmailMessage(
        "Meeting", "Don't forget the meeting at 3 PM.");

    // 通知所有观察者
    messageCenter.notify(sms);
    messageCenter.notify(email);

    return 0;
}
