#include <iostream>
#include <vector>
#include <string>

void testDashboard() {
    std::vector<std::string> widgets = {"A", "B"};
    addWidget(widgets, "C");
    std::cout << "Test: " << (widgets.size() == 3 ? "PASS" : "FAIL") << std::endl;
}

bool removeWidget(std::vector<std::string>& widgets, const std::string& name) {
    for (auto it = widgets.begin(); it != widgets.end(); ++it) {
        if (*it == name) {
            widgets.erase(it);
            std::cout << "Removed widget: " << name << std::endl;
            return true;
        }
    }
    std::cout << "Widget not found: " << name << std::endl;
    return false;
}

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
    removeWidget(widgets, "Announcements");
    printDashboard(widgets);
    return 0;
}