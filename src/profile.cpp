#include <iostream>
#include <string>

struct UserProfile {
    std::string name;
    std::string email;
};

bool isValidEmail(const std::string& email) {
    return email.find('@') != std::string::npos;
}

void printProfile(const UserProfile& profile) {
    std::cout << "Name: " << profile.name << std::endl;
    std::cout << "Email: " << profile.email << std::endl;
}

int main() {
    UserProfile profile{"Srv", "srv@example.com"};
    if (isValidEmail(profile.email)) {
        printProfile(profile);
    } else {
        std::cout << "Invalid email address" << std::endl;
    }
    return 0;
}