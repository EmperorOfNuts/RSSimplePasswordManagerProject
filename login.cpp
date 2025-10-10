
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include "login.hpp"

// Declare everything possible that makes up the password.
std::vector<std::string> letters = {"abcdefghijklmnopqrstuvwxyz", "ABCDEFGHIJKLMNOPQRSTUVWXYZ"}; 
std::string numbers = "0123456789", symbols = "`~!@#$%^&*()_+-=.,?";

login::login(std::string newPassword, std::string newWebsiteLink, std::string newUsername)
  : password(newPassword),
    websiteLink(newWebsiteLink),
    username(newUsername)
{}

login::login()
  : password(""),
    websiteLink(""),
    username("")
{}

std::string login::generateNewPassword(bool hasNumbers, bool hasSymbols, int newPasswordLength) {

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

void login::setNewPassword(std::string newPassword) {
    password = newPassword;
}

void login::setNewWebsiteLink(std::string newWebsiteLink) {
    websiteLink = newWebsiteLink;
}

void login::setNewUsername(std::string newUsername) {
    username = newUsername;
}

