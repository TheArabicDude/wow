#include <iostream>
#include <thread>
#include <chrono>

/**
 * @class DuckYouRepeater
 * A class that handles the repeated output of a specific message at regular intervals.
 */
class DuckYouRepeater {
public:
    /**
     * Starts the process of saying "FUCK YOU" every second.
     */
    void StartSayingDuckYou() {
        while (true) {
            std::cout << "FUCK YOU" << std::endl; // Output the message
            std::this_thread::sleep_for(std::chrono::seconds(1)); // Wait for 1 second
        }
    }
};

int main() {
    FuckYouRepeater repeater; // Create an instance of FuckYouRepeater
    repeater.StartSayingFuckYou(); // Start the process

    return 0; // Return success
}