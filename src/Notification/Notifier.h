// Notification/Notifier.h
#pragma once
#include <iostream>
#include <string>

class Notifier {
public:
    Notifier() = default;
    ~Notifier() = default;

    void sendAlert(const std::string& message) {
        std::cout << "[Notifier] ALERT: " << message << "\n";
    }
};
