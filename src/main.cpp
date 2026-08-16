#include <iostream>
#include <string>

std::string greetUser(const std::string& name) {
    return "Welcome to Student Portal, " + name + "!";
}

int main() {
    std::string name = "Student";
    std::cout << "Branch Version : "<< greetUser(name) << std::endl;
    return 0;
}
// important change
