#include <iostream>
#include <map>
#include <string>

void testSettings() {
    addSetting("test_flag", false);
    toggleSetting("test_flag");
    std::cout << "Test: " << (settings["test_flag"] == true ? "PASS" : "FAIL") << std::endl;
}

void addSetting(const std::string& key, bool defaultValue) {
    if (settings.find(key) == settings.end()) {
        settings[key] = defaultValue;
        std::cout << "Added new setting: " << key << std::endl;
    } else {
        std::cout << "Setting already exists: " << key << std::endl;
    }
}

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
    testSettings();
    printSettings();
    toggleSetting("dark_mode");
    printSettings();
    addSetting("auto_save", true);
    printSettings();
    return 0;
}// minor tweak
