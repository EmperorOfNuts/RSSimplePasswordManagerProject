#ifndef SIMPLEPASSWORD_HPP
#define SIMPLEPASSWORD_HPP
#include <string>
#include <vector>

class simplePassword {
    private:
        
    public:
        std::string password;
        simplePassword(std::string);
        simplePassword();
        std::string generateNewPassword(bool, bool, int);
        std::vector<std::string> getInformation();
        void setNewPassword(std::string);
};

#endif