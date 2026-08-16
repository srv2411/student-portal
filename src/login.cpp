#include <iostream>
#include <string>

void printLoginError(const std::string& username) {
    if (username.empty()) {
        std::cout << "Error: username cannot be empty" << std::endl;
    }
}

bool validateLogin(const std::string& username, const std::string& password) {
    return !username.empty() && password.length() >= 6;
}

int main() {
    std::string user = "student";
    std::string pass = "pass123";
    if (validateLogin(user, pass)) {
        std::cout << "Login successful for " << user << std::endl;
    } else {
        std::cout << "Login failed" << std::endl;
    }
    return 0;
}