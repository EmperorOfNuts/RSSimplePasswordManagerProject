#ifndef ENTRY_HPP
#define ENTRY_HPP
#include "category.hpp"
#include "login.hpp"
#include "simplePassword.hpp"
#include <string>

class entry {
    private:
        
    public:
        entry(login);
        entry(simplePassword);
        std::vector<std::string> getInformation();
};

#endif