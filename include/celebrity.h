//
// Created by Kasey Stowell on 3/30/18.
//

#ifndef TIMINGTEST_CELEBRITY_H
#define TIMINGTEST_CELEBRITY_H

#include <string>
#include <ostream>

class celebrity {
    public:
        celebrity(std::string name,
                  int rating,
                  std::string category,
                  bool havemet);
        
        bool operator<(const celebrity &rhs) const {
            if (rating < rhs.rating)
                return true;
            if (rhs.rating < rating)
                return false;
            if (havemet == rhs.havemet) {
                if (name < rhs.name)
                    return true;
                if (rhs.name < name)
                    return false;
            }
            return havemet < rhs.havemet;
        }
        
        friend std::ostream &operator<<(std::ostream &os, const celebrity &celebrity1);
        
        const std::string &getName() const;
        
        void setName(const std::string &name);
        
        int getRating() const;
        
        void setRating(int rating);
        
        const std::string &getCategory() const;
        
        void setCategory(const std::string &category);
        
        bool isHavemet() const;
        
        void setHavemet(bool havemet);
    
    private:
        std::string name;
        int rating;
        std::string category;
        bool havemet;
};

#endif //TIMINGTEST_CELEBRITY_H
