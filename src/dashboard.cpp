#include <iostream>
#include <vector>
#include <string>

void printDashboard(const std::vector<std::string>& widgets) {
    std::cout << "=== Dashboard ===" << std::endl;
    for (const auto& widget : widgets) {
        std::cout << "- " << widget << std::endl;
    }
}

int main() {
    std::vector<std::string> widgets = {"Attendance", "Grades", "Announcements"};
    printDashboard(widgets);
    return 0;
}