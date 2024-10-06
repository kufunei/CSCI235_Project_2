/**
 * @file Dessert.cpp
 * @brief This file contains the implementation of the Dessert class, which represents a dessert inherited from the Dish class.
 * 
 * The Dessert class includes methods to manage and present the details of flavor profile, sweetness level, and whether it contains nuts.
 * The implementation ensures that the dessert name is validated and correctly formatted.
 * 
 * @date September 17th, 2024
 * @author Kun Feng Wei
 */

#include "Dessert.hpp"

/**
* Default constructor with inheritence from Dish default constructor.
* Initializes all private members with default values:
* - flavor_profile_ = SWEET
* - sweetness_level_: 0
* - contains_nuts_: False
*/
Dessert::Dessert() : Dish()
{
    this->flavor_profile_ = SWEET;
    this->sweetness_level_ = 0;
    this->contains_nuts_ = false;
}

/**
* Parameterized constructor of Dessert with inheritance from Dish parameterized constructor.
* @param name A reference to the name of the dish.
* @param ingredients A reference to a list of ingredients (default is
empty list).
* @param prep_time The preparation time in minutes (default is 0).
* @param price The price of the dish (default is 0.0).
* @param cuisine_type The cuisine type of the dish (a CuisineType enum)
with default value OTHER.
* @param flavor_profile The flavor profile of the dessert (a FlavorProfile enum)
* @param sweetness_level The sweetness level
* @param contains_nuts A reference to whether the dessert contains nuts
Accessors and Mutators:
* @post The private members are set to the values of the corresponding
parameters.
*/
Dessert::Dessert(const std::string& name, const std::vector<std::string>& ingredients, const int& prep_time, const double& price, const CuisineType cuisine_type, const FlavorProfile flavor_profile, const int& sweetness_level, const bool& contains_nuts) : Dish(name, ingredients, prep_time, price, cuisine_type)
{
    this->flavor_profile_= flavor_profile;
    this->sweetness_level_ = sweetness_level;
    this->contains_nuts_ = contains_nuts;
}

/**
 * Sets the flavor profile of the dessert.
 * @param flavor_profile The new flavor profile.
 * @post Sets the private member `flavor_profile_` to the value of the
parameter.
 */
void Dessert::setFlavorProfile(const FlavorProfile flavor_profile)
{
    this->flavor_profile_ = flavor_profile;
}

/**
 * @return The flavor profile of the dessert (as an enum).
 */
Dessert::FlavorProfile Dessert::getFlavorProfile() const
{
    return flavor_profile_;
}

/**
 * Sets the sweetness level of the dessert.
 * @param sweetness_level An integer representing the sweetness level of
the dessert.
 * @post Sets the private member `sweetness_level_` to the value of the
parameter.
 */
void Dessert::setSweetnessLevel(const int& sweetness_level)
{
    this->sweetness_level_ = sweetness_level;
}

/**
 * @return The sweetness level of the dessert.
 */
int Dessert::getSweetnessLevel() const
{
    return sweetness_level_;
}

/**
 * Sets the contains_nuts flag of the dessert.
 * @param contains_nuts A boolean indicating if the dessert contains
nuts.
 * @post Sets the private member `contains_nuts_` to the value of the
parameter.
 */
void Dessert::setContainsNuts(const bool& contains_nuts)
{
    this->contains_nuts_ = contains_nuts;
}

/**
 * @return True if the dessert contains nuts, false otherwise.
 */
bool Dessert::containsNuts() const
{
    return contains_nuts_;
}

    // Helper function to display outputs
    /**
     * @return The logical outputs
     */
void Dessert::displayDessert() const
{
    std::cout << "Flavor Profile: ";
    if (flavor_profile_== 0)
    {
        std::cout << "SWEET" << std::endl;
    }
    if (flavor_profile_ == 1)
    {
        std::cout << "BITTER" << std::endl;
    }
    if (flavor_profile_ == 2)
    {
        std::cout << "SOUR" << std::endl;
    }
    if (flavor_profile_ == 2)
    {
        std::cout << "SALTY" << std::endl;
    }
    if (flavor_profile_ == 3)
    {
        std::cout << "UMAMI" << std::endl;
    }

    std::cout << "Sweetness Level: " << getSweetnessLevel() << std::endl;
    std::cout << "Contains Nuts: ";
    if (containsNuts() == 1)
    {
        std::cout << "True" << std::endl;
    }
    else
    {
        std::cout << "False" << std::endl;
    }
}
