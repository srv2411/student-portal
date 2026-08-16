#include <iostream>
#include <string>

struct UserProfile {
    std::string name;
    std::string email;
};

void printProfile(const UserProfile& profile) {
    std::cout << "Name: " << profile.name << std::endl;
    std::cout << "Email: " << profile.email << std::endl;
}

int main() {
    UserProfile profile{"Srv", "srv@example.com"};
    printProfile(profile);
    return 0;
}