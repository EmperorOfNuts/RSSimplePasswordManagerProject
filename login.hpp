#ifndef LOGIN_HPP
#define LOGIN_HPP
#include <string>

class login {
    private:
        
    public:
        std::string password;
        std::string websiteLink;
        std::string username;
        login(std::string, std::string, std::string);
        login();
        std::string generateNewPassword(bool, bool, int);
        std::vector<std::string> getInformation();
        void setNewPassword(std::string);
        void setNewWebsiteLink(std::string);
        void setNewUsername(std::string);
};

#endif