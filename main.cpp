#include <iostream>
#include <vector>
#include "include/celebrity.h"

int main() {
    std::vector<celebrity> celebs;
    celebrity celeb = celebrity("Link", 10, "Hero", true);
    celebs.push_back(celeb);
    celeb = celebrity("Beedle", 1, "Salesman", true);
    celebs.push_back(celeb);
    celeb = celebrity("Bolson", 3, "Carpenter", true);
    celebs.push_back(celeb);
    celeb = celebrity("Cambo", 0, "Traveler", false);
    celebs.push_back(celeb);
    celeb = celebrity("Epona", 7, "Companion", false);
    celebs.push_back(celeb);
    celeb = celebrity("Hudson", 10, "Carpenter", true);
    celebs.push_back(celeb);
    celeb = celebrity("Hylia", 4, "Goddess", false);
    celebs.push_back(celeb);
    celeb = celebrity("Kilton", 6, "Monster Fan", true);
    celebs.push_back(celeb);
    celeb = celebrity("Hestu", 8, "Dancer", true);
    celebs.push_back(celeb);
    celeb = celebrity("Zelda", 10, "Princess", false);
    celebs.push_back(celeb);
    for (std::vector<celebrity>::iterator it = celebs.begin(); it != celebs.end(); ++it) {
        std::cout << ' ' << *it << std::endl;
    }
    return 0;
}