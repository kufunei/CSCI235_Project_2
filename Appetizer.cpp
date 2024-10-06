/**
 * @file Appetizer.cpp
 * @brief This file contains the implementation of the Appetizer class, which represents an appetizer inherited from the Dish class.
 * 
 * The Appetizer class includes methods to manage and present the details of serving style, spiciness level, and whether it is vegetarian.
 * The implementation ensures that the appetizer name is validated and correctly formatted.
 * 
 * @date September 17th, 2024
 * @author Kun Feng Wei
 */

#include "Appetizer.hpp"

/**
* Default constructor with inheritence from Dish default constructor.
* Initializes all private members with default values:
* - serving_style_ = PLATED
* - spiciness_level_: 0
* - vegetarian_: False
*/
Appetizer::Appetizer() : Dish()
{
    this->serving_style_ = Appetizer::PLATED;
    this->spiciness_level_ = 0;
    this->vegetarian_ = false;
}

/**
* Parameterized constructor with inheritance from Dish parameterized constructor.
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
Appetizer::Appetizer(const std::string& name, const std::vector<std::string>& ingredients, const int& prep_time, const double& price, const CuisineType cuisine_type, const ServingStyle serving_style, const int& spiciness_level, const bool& vegetarian) : Dish(name, ingredients, prep_time, price, cuisine_type)
{
    this->serving_style_ = serving_style;
    this->spiciness_level_ = spiciness_level;
    this->vegetarian_ = vegetarian;
}

/**
 * Sets the serving style of the appetizer.
 * @param serving_style The new serving style.
 * @post Sets the private member `serving_style_` to the value of the
parameter.
 */
void Appetizer::setServingStyle(const ServingStyle& serving_style)
{
    this->serving_style_ = serving_style;
}

/**
 * @return The serving style of the appetizer (as an enum).
 */
Appetizer::ServingStyle Appetizer::getServingStyle() const
{
    return serving_style_;
}

/**
 * Sets the spiciness level of the appetizer.
 * @param spiciness_level An integer representing the spiciness level of
the appetizer.
 * @post Sets the private member `spiciness_level_` to the value of the
parameter.
 */
void Appetizer::setSpicinessLevel(const int& spiciness_level)
{
    this->spiciness_level_ = spiciness_level;
}

/**
 * @return The spiciness level of the appetizer.
 */
int Appetizer::getSpicinessLevel() const
{
    return spiciness_level_;
}

/**
 * Sets the vegetarian flag of the appetizer.
 * @param vegetarian A boolean indicating if the appetizer is
vegetarian.
 * @post Sets the private member `vegetarian_` to the value of the
parameter.
 */
void Appetizer::setVegetarian(const bool& vegetarian)
{
    this->vegetarian_ = vegetarian;
}

/**
 * @return True if the appetizer is vegetarian, false otherwise.
*/
bool Appetizer::isVegetarian() const
{
    return vegetarian_;
}

// Helper function to display outputs
/**
 * @return The logical outputs
 */
void Appetizer::displayAppetizer() const
{
    std::cout << "Spiciness Level: " << getSpicinessLevel() << std::endl;
    std::cout << "Serving Style: ";
    if (serving_style_== 0)
    {
        std::cout << "PLATED" << std::endl;
    }
    if (serving_style_ == 1)
    {
        std::cout << "FAMILY_SIZE" << std::endl;
    }
    if (serving_style_ == 2)
    {
        std::cout << "BUFFET" << std::endl;
    }
    
    std::cout << "Vegetarian: ";
    if (isVegetarian() == 1)
    {
        std::cout << "True" << std::endl;
    }
    else
    {
        std::cout << "False" << std::endl;
    }
}



