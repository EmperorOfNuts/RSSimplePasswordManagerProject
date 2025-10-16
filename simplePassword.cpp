
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include "simplePassword.hpp"

// Declare everything possible that makes up the password.
std::vector<std::string> letters = {"abcdefghijklmnopqrstuvwxyz", "ABCDEFGHIJKLMNOPQRSTUVWXYZ"}; 
std::string numbers = "0123456789", symbols = "`~!@#$%^&*()_+-=.,?";

simplePassword::simplePassword(std::string newPassword)
  : password(newPassword)
{}

simplePassword::simplePassword()
  : password("")
{}

std::string simplePassword::generateNewPassword(bool hasNumbers, bool hasSymbols, int newPasswordLength) {

    std::string newPassword;

    // Initialize the allowed characters for this generation

    std::vector<std::string> allowedCharacters = letters;
    if (hasNumbers) allowedCharacters.push_back(numbers);
    if (hasSymbols) allowedCharacters.push_back(symbols);

    // Generate the password using rand(), very poor random
    newPassword.reserve(newPasswordLength);
    srand(time(NULL));

    for (int i = 0; i < newPasswordLength; i++) {
        int characterKind = rand() % allowedCharacters.size();
        int charSelection = rand() % allowedCharacters[characterKind].length();
        newPassword += allowedCharacters[characterKind][charSelection];
    }

    return newPassword;

}

std::vector<std::string> simplePassword::getInformation() {
    std::vector<std::string> informationVector;
    informationVector.push_back(password);
    
    return informationVector;

}

void simplePassword::setNewPassword(std::string newPassword) {
    password = newPassword;
}

