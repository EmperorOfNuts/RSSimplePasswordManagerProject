#ifndef CATEGORY_HPP
#define CATEGORY_HPP
#include "entry.hpp"
#include <string>
#include <vector>

class category {
    private:
        
    public:
        std::string categoryName;
        std::vector<entry> categoryList;
        category(std::string);
        category(std::string, std::vector<entry>);
        entry getItem(int);
        void addItem(int, entry);
        void removeItem(int);
        void sortAscending();
        void sortDescending();
        void sortByDateCreated();

};

#endif