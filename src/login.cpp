#include <iostream>
#include <string>

// Minimum required length for a valid password
const int MIN_PASSWORD_LENGTH = 6;

// Checks that username is non-empty and password meets length requirement
bool validateLogin(const std::string& username, const std::string& password) {
    return !username.empty() && password.length() >= MIN_PASSWORD_LENGTH;
}

// Prints a helpful error if login fails due to missing username
void printLoginError(const std::string& username) {
    if (username.empty()) {
        std::cout << "Error: username cannot be empty" << std::endl;
    }
}

// Simple sanity test for validateLogin
void testLogin() {
    std::cout << "Test: " << (validateLogin("srv", "pass123") ? "PASS" : "FAIL") << std::endl;
}

int main() {
    testLogin();

    std::string user = "student";
    std::string pass = "pass123";
    if (validateLogin(user, pass)) {
        std::cout << "Login successful for " << user << std::endl;
    } else {
        printLoginError(user);
        std::cout << "Login failed" << std::endl;
    }
    return 0;
}