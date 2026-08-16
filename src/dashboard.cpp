#include <iostream>
#include <vector>
#include <string>

void printDashboard(const std::vector<std::string>& widgets) {
    std::cout << "=== Dashboard ===" << std::endl;
    for (const auto& widget : widgets) {
        std::cout << "- " << widget << std::endl;
    }
}

void addWidget(std::vector<std::string>& widgets, const std::string& name) {
    widgets.push_back(name);
    std::cout << "Added widget: " << name << std::endl;
}

int main() {
    std::vector<std::string> widgets = {"Attendance", "Grades", "Announcements"};
    printDashboard(widgets);
    addWidget(widgets, "Fee Status");
    printDashboard(widgets);
    return 0;
}