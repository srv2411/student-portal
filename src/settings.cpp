#include <iostream>
#include <map>
#include <string>

void toggleSetting(const std::string& key) {
    if (settings.find(key) != settings.end()) {
        settings[key] = !settings[key];
        std::cout << "Toggled " << key << " to " << (settings[key] ? "ON" : "OFF") << std::endl;
    } else {
        std::cout << "Setting not found: " << key << std::endl;
    }
}

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
    toggleSetting("dark_mode");
    printSettings();
    return 0;
}