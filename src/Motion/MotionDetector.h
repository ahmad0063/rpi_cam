// Motion/MotionDetector.h
#pragma once
#include <iostream>

class MotionDetector {
public:
    MotionDetector() = default;
    ~MotionDetector() = default;

    bool detectMotion() {
        // Dummy detection for testing
        static int counter = 0;
        if (++counter % 5 == 0) {
            std::cout << "[MotionDetector] Motion detected!\n";
            return true;
        }
        return false;
    }
};
