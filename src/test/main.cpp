#include <iostream>
#include <chrono>
#include <thread>
#include <Motion/MotionDetector.h>
#include <Notification/Notifier.h>
#include <Record/CameraRecorder.h>


enum class State { IDLE, MOTION_DETECTED };

int main() {
    MotionDetector motion;
    CameraRecorder recorder;
    Notifier notifier;

    State state = State::IDLE;
    int counter = 0;

    while (true) {
        switch(state) {
            case State::IDLE:
                std::cout << "IDLE: Waiting...\n";
                if (motion.detectMotion()) {
                    state = State::MOTION_DETECTED;
                    recorder.startRecording();
                    notifier.sendAlert("Motion detected!");
                    counter = 0;
                }
                break;

            case State::MOTION_DETECTED:
                std::cout << "MOTION DETECTED: Recording...\n";
                if (++counter > 5) {  // stay in motion state for a few cycles
                    recorder.stopRecording();
                    state = State::IDLE;
                }
                break;
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
}
