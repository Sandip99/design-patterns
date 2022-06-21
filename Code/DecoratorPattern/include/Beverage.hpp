#pragma once

#include<string>
/**
 * Base Class for beverages
*/
class Beverage {
public:
    /**
     * @return Description of the beverage / condiment
    */
    virtual std::string getDescription();
    /**
     * @return Cost of the beverage / condiment
    */
    virtual double cost();
    virtual ~Beverage() {}

    std::string description = "";
};
