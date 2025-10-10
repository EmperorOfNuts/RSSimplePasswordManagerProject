#include "login.hpp"
#include "login.cpp"
#include <string>
#include <iostream>
#include <typeinfo>
#include <vector>

int main() {

    login testLogin;
    std::cout << testLogin.generateNewPassword(false, true, 10);

}