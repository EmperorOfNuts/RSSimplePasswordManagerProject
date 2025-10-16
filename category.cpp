#include <string>
#include <vector>
#include "category.hpp"

category::category(std::string newCategoryName)
  : categoryName(newCategoryName),
    categoryList()
{}

category::category(std::string newCategoryName, std::vector<entry> newCategoryList)
  : categoryName(newCategoryName),
    categoryList(newCategoryList)
{}

entry category::getItem(int index) {
    return categoryList[index];
}

void category::addItem(int index, entry item) {
    categoryList.insert(categoryList.begin() + index, item);
}

void category::removeItem(int index) {
    categoryList.erase(categoryList.begin() + index);
}

