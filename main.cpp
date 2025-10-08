#include "passwordManagement.hpp"
#include "passwordManagement.cpp"
#include <string>
#include <iostream>
#include <typeinfo>
#include <vector>

int main() {

    std::string test = "ABCDEFG";
    std::string symbols = "`~!@#$%^&*()_+-=.,?";
    password testPassword(test);
    testPassword.generateNewPassword();
    std::cout << testPassword.currentPassword;

}