#include "passwordManagement.hpp"
#include "passwordManagement.cpp"
#include <string>
#include <iostream>
#include <typeinfo>
#include <vector>

int main() {

    password testPassword;
    testPassword.generateNewPassword();
    std::cout << testPassword.currentPassword;

}