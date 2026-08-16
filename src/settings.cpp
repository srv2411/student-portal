#include <iostream>
#include <map>
#include <string>

std::map<std::string, bool> settings = {
    {"notifications", true},
    {"dark_mode", false}
};

void printSettings() {
    std::cout << "=== Settings ===" << std::endl;
    for (const auto& [key, value] : settings) {
        std::cout << key << ": " << (value ? "ON" : "OFF") << std::endl;
    }
}

int main() {
    printSettings();
    return 0;
}