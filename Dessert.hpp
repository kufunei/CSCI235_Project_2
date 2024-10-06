/**
 * @file Dessert.hpp
 * @brief This file contains the declaration of the Dessert class, which represents a Dessert inherited from Dish class.
 * 
 * The Dessert class includes attributes such as flavor profile, sweetness level, and whether it contains nuts.
 * It provides constructors, accessor and mutator functions, and a display function to manage and present
 * the details of an appetizer.
 * 
 * @date September 17th, 2024
 * @author Kun Feng Wei
 */


#ifndef DESSERT_HPP
#define DESSERT_HPP

#include "Dish.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <iomanip> // For std::fixed and std::setprecision
#include <cctype>  // For std::isalpha, std::isspace


class Dessert : public Dish
{
public:
    enum FlavorProfile { SWEET, BITTER, SOUR, SALTY, UMAMI };

/**
* Default constructor with inheritence from Dish default constructor.
* Initializes all private members with default values:
* - flavor_profile_ = SWEET
* - sweetness_level_: 0
* - contains_nuts_: False
*/
    Dessert();

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
    Dessert(const std::string& name, const std::vector<std::string>& ingredients, const int& prep_time, const double& price, const CuisineType cuisine_type, const FlavorProfile flavor_profile, const int& sweetness_level, const bool& contains_nuts);

/**
 * Sets the flavor profile of the dessert.
 * @param flavor_profile The new flavor profile.
 * @post Sets the private member `flavor_profile_` to the value of the
parameter.
 */
    void setFlavorProfile(const FlavorProfile flavor_profile_);

  /**
 * @return The flavor profile of the dessert (as an enum).
 */  
    FlavorProfile getFlavorProfile() const;

/**
 * Sets the sweetness level of the dessert.
 * @param sweetness_level An integer representing the sweetness level of
the dessert.
 * @post Sets the private member `sweetness_level_` to the value of the
parameter.
 */
    void setSweetnessLevel(const int& sweetness_level_);
    
 /**
 * @return The sweetness level of the dessert.
 */   
    int getSweetnessLevel() const;

/**
 * Sets the contains_nuts flag of the dessert.
 * @param contains_nuts A boolean indicating if the dessert contains
nuts.
 * @post Sets the private member `contains_nuts_` to the value of the
parameter.
 */
    void setContainsNuts(const bool& contains_nuts_);
    
/**
 * @return True if the dessert contains nuts, false otherwise.
 */    
    bool containsNuts() const;

    // Helper function to display outputs
    /**
     * @return The logical outputs
     */

    void displayDessert() const;


private:
    FlavorProfile flavor_profile_;
    int sweetness_level_;
    bool contains_nuts_;
};

#endif // DESSERT_HPP

