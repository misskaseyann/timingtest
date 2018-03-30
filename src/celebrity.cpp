//
// Created by Kasey Stowell on 3/30/18.
//

#include <string>
#include "../include/celebrity.h"

celebrity::celebrity(std::string name, int rating, std::string category, bool havemet) {
    celebrity::name = std::move(name);
    if (rating < 0)
        celebrity::rating = 0;
    if (rating > 10)
        celebrity::rating = 10;
    else
        celebrity::rating = rating;
    celebrity::category = std::move(category);
    celebrity::havemet = havemet;
}

const std::string &celebrity::getName() const {
    return name;
}

void celebrity::setName(const std::string &name) {
    celebrity::name = name;
}

int celebrity::getRating() const {
    return rating;
}

void celebrity::setRating(int rating) {
    if (rating < 0)
        celebrity::rating = 0;
    if (rating > 10)
        celebrity::rating = 10;
    else
        celebrity::rating = rating;
}

const std::string &celebrity::getCategory() const {
    return category;
}

void celebrity::setCategory(const std::string &category) {
    celebrity::category = category;
}

bool celebrity::isHavemet() const {
    return havemet;
}

void celebrity::setHavemet(bool havemet) {
    celebrity::havemet = havemet;
}

std::ostream &operator<<(std::ostream &os, const celebrity &celebrity1) {
    os << "name: " << celebrity1.name << " rating: " << celebrity1.rating << " category: " << celebrity1.category
       << " havemet: " << celebrity1.havemet;
    return os;
}
