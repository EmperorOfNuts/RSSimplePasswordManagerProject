#ifndef PASSWORDMANAGEMENT_HPP
#define PASSWORDMANAGEMENT_HPP
#include <string>

class password {
    private:
        
    public:
        std::string currentPassword;
        int currentPasswordLength;
        password(std::string);
        password();
        void generateNewPassword();
        void setNewPassword(std::string);
};

#endif