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

void updateEmail(UserProfile& profile, const std::string& newEmail) {
    if (isValidEmail(newEmail)) {
        profile.email = newEmail;
        std::cout << "Email updated successfully" << std::endl;
    } else {
        std::cout << "Update failed: invalid email" << std::endl;
    }
}

int main() {
    UserProfile profile{"Srv", "srv@example.com"};
    printProfile(profile);
    updateEmail(profile, "srv.new@example.com");
    printProfile(profile);
    return 0;
}