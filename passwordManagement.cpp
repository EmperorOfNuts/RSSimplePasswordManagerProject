
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include "passwordManagement.hpp"

// Declare everything possible that makes up the password.
std::vector<std::string> letters = {"abcdefghijklmnopqrstuvwxyz", "ABCDEFGHIJKLMNOPQRSTUVWXYZ"}; 
std::string numbers = "0123456789", symbols = "`~!@#$%^&*()_+-=.,?";

password::password(std::string newPassword)
  : currentPassword(newPassword),
    currentPasswordLength(currentPassword.length())
{}

password::password()
  : currentPassword(),
    currentPasswordLength(0)
{}

void password::generateNewPassword() {

    int passwordLength;
    std::string newPassword;

    // Get new password length
    std::cout << "Enter password Length: ";
    std::cin >> passwordLength;

    // Get options for password: Letters, Numbers, Symbols

    std::string options[] = {"", ""};
    std::cout << "Numbers in the password? (Y/N): ";
    std::cin >> options[0];
    std::cout << "Symbols in the password? (Y/N): ";
    std::cin >> options[1];
    
    // Set appropriate dictionary values

    std::vector<std::string> allowedCharacters = letters;

    if (options[0] == "Y") allowedCharacters.push_back(numbers);
    if (options[1] == "Y") allowedCharacters.push_back(symbols);

    // Generate the password using rand(), very poor random
    newPassword.reserve(passwordLength);
    srand(time(NULL));

    for (int i = 0; i < passwordLength; i++) {
        int characterKind = rand() % allowedCharacters.size();
        int charSelection = rand() % allowedCharacters[characterKind].length();
        newPassword += allowedCharacters[characterKind][charSelection];
    }
    currentPassword = newPassword;

}

void password::setNewPassword(std::string newPassword) {
    currentPassword = newPassword;
}

