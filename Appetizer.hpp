/**
 * @file Appetizer.hpp
 * @brief This file contains the declaration of the Appetizer class, which represents an appetizer inherited from Dish class.
 * 
 * The Appetizer class includes attributes such as serving style, spiciness level, and whether it was vegetarian.
 * It provides constructors, accessor and mutator functions, and a display function to manage and present
 * the details of an appetizer.
 * 
 * @date September 17th, 2024
 * @author Kun Feng Wei
 */

#ifndef APPETIZER_HPP
#define APPETIZER_HPP

#include "Dish.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <iomanip> // For std::fixed and std::setprecision
#include <cctype>  // For std::isalpha, std::isspace


class Appetizer : public Dish
{
public:
    // ServingStyle enum definition
    enum ServingStyle { PLATED, FAMILY_STYLE, BUFFET };

/**
* Default constructor of Appetizer with inheritence from Dish default constructor.
* Initializes all private members with default values:
* - serving_style_ = PLATED
* - spiciness_level_: 0
* - vegetarian_: False
*/    
    Appetizer();

/**
* Parameterized constructor of Appetizer with inheritance from Dish parameterized constructor.
* @param name A reference to the name of the dish.
* @param ingredients A reference to a list of ingredients (default is
empty list).
* @param prep_time The preparation time in minutes (default is 0).
* @param price The price of the dish (default is 0.0).
* @param cuisine_type The cuisine type of the dish (a CuisineType enum)
with default value OTHER.
* @param serving_style The serving style of the appetizer (a ServingStyle enum)
* @param spiciness_level The spiciness level
* @param vegetarian A reference to whether the appetizer is vegetarian
Accessors and Mutators:
* @post The private members are set to the values of the corresponding
parameters.
*/
    Appetizer(const std::string& name, const std::vector<std::string>& ingredients, const int& prep_time, const double& price, const CuisineType cuisine_type, const ServingStyle serving_style, const int& spiciness_level, const bool& vegetarian);

/**
 * Sets the serving style of the appetizer.
 * @param serving_style The new serving style.
 * @post Sets the private member `serving_style_` to the value of the
parameter.
 */
    void setServingStyle(const ServingStyle& serving_style);

/**
 * @return The serving style of the appetizer (as an enum).
 */
    ServingStyle getServingStyle() const;

/**
 * Sets the spiciness level of the appetizer.
 * @param spiciness_level An integer representing the spiciness level of
the appetizer.
 * @post Sets the private member `spiciness_level_` to the value of the
parameter.
 */
    void setSpicinessLevel(const int& spiciness_level);

/**
 * @return The spiciness level of the appetizer.
 */
    int getSpicinessLevel() const;

/**
 * Sets the vegetarian flag of the appetizer.
 * @param vegetarian A boolean indicating if the appetizer is
vegetarian.
 * @post Sets the private member `vegetarian_` to the value of the
parameter.
 */
    void setVegetarian(const bool& vegetarian);

/**
 * @return True if the appetizer is vegetarian, false otherwise.
*/
    bool isVegetarian() const;

    // Helper function to display outputs
    /**
     * @return The logical outputs
     */
    void displayAppetizer() const;

private:
    ServingStyle serving_style_;
    int spiciness_level_;
    bool vegetarian_;
};

#endif // APPETIZER_HPP

