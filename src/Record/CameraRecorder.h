// Record/CameraRecorder.h
#pragma once
#include <iostream>

class CameraRecorder {
public:
    CameraRecorder() = default;
    ~CameraRecorder() = default;

    void startRecording() {
        std::cout << "[CameraRecorder] Recording started\n";
    }

    void stopRecording() {
        std::cout << "[CameraRecorder] Recording stopped\n";
    }
};
