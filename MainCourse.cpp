/**
 * @file MainCourse.cpp
 * @brief This file contains the implementation of the MainCourse class, which represents a main course inherited from the Dish class.
 * 
 * The MainCourse class includes methods to manage and present the details of cooking methods, protein type, side dishes, and whether it is gluten free.
 * The implementation ensures that the main course name is validated and correctly formatted.
 * 
 * @date September 17th, 2024
 * @author Kun Feng Wei
 */

#include "MainCourse.hpp"

/**
* Default constructor with inheritence from Dish default constructor.
* Initializes all private members with default values:
* - cooking_method_ = GRILLED
* - protein_type_: "UNKNOWN"
* - side_dishes_: Empty list
* - gluten_free_: False
*/
MainCourse::MainCourse() : Dish()
{
    this->cooking_method_ = GRILLED;
    this->protein_type_ = "UNKNOWN";
    this->side_dishes_ = {};
    this->gluten_free_ = false;
}

/**
* Parameterized constructor of MainCourse with inheritance from Dish parameterized constructor.
* @param name A reference to the name of the dish.
* @param ingredients A reference to a list of ingredients (default is
empty list).
* @param prep_time The preparation time in minutes (default is 0).
* @param price The price of the dish (default is 0.0).
* @param cuisine_type The cuisine type of the dish (a CuisineType enum)
with default value OTHER.
* @param cooking_method The cooking method of the main course (a CookingMethod enum)
* @param protein_type A reference to the protein type of the main course
* @param side_dishes A struct containing the name and category of the side dish.  
* @param gluten_free A reference to whether the main course is gluten free
Accessors and Mutators:
* @post The private members are set to the values of the corresponding
parameters.
*/
MainCourse::MainCourse(const std::string& name, const std::vector<std::string>& ingredients, const int& prep_time, const double& price, const CuisineType cuisine_type, const CookingMethod cooking_method, const std::string& protein_type, const std::vector<SideDish>& side_dishes, const bool& gluten_free) : Dish(name, ingredients, prep_time, price, cuisine_type)
{
    cooking_method_ = cooking_method;
    protein_type_ = protein_type;
    side_dishes_ = side_dishes;
    gluten_free_ = gluten_free;
}

/**
 * Sets the cooking method of the main course.
 * @param cooking_method The new cooking method.
 * @post Sets the private member `cooking_method_` to the value of the
parameter.
 */
void MainCourse::setCookingMethod(const CookingMethod cooking_method)
{
    this->cooking_method_ = cooking_method;
}

/**
 * @return The cooking method of the main course (as an enum).
 */
MainCourse::CookingMethod MainCourse::getCookingMethod() const
{
    return cooking_method_;
}

/**
 * Sets the type of protein in the main course.
 * @param protein_type A string representing the type of protein.
 * @post Sets the private member `protein_type_` to the value of the
parameter.
 */
void MainCourse::setProteinType(const std::string& protein_type)
{
    this->protein_type_ = protein_type;   
}

/**
 * @return The type of protein in the main course.
 */
std::string MainCourse::getProteinType() const
{
    return protein_type_;
}

/**
 * Adds a side dish to the main course.
 * @param side_dish A SideDish struct containing the name and category
of the side dish.
 * @post Adds the side dish to the `side_dishes_` vector.
 */
void MainCourse::addSideDish(const SideDish& side_dishes)
{
    side_dishes_.push_back(side_dishes);
}

/**
 * @return A vector of SideDish structs representing the side dishes
served with the main course.
 */
std::vector<MainCourse::SideDish> MainCourse::getSideDishes() const
{
    return side_dishes_;
}

/**
 * Sets the gluten-free flag of the main course.
 * @param gluten_free A boolean indicating if the main course is gluten-
free.
 * @post Sets the private member `gluten_free_` to the value of the
parameter.
 */
void MainCourse::setGlutenFree(const bool& gluten_free)
{
    this->gluten_free_ = gluten_free;
}

/**
 * @return True if the main course is gluten-free, false otherwise.
 */
bool MainCourse::isGlutenFree() const
{
    return this->gluten_free_;
}

    // Helper function to display outputs
    /**
     * @return The logical outputs
     */
void MainCourse::displayMainCourse() const
{
    std::cout << "Cooking Method: ";
    if (cooking_method_ == 0)
    {
        std::cout << "GRILLED" << std::endl;
    }
    if (cooking_method_ == 1)
    {
        std::cout << "BAKED" << std::endl;
    }
    if (cooking_method_ == 2)
    {
        std::cout << "FRIEND" << std::endl;
    }
    if (cooking_method_ == 2)
    {
        std::cout << "STEAMED" << std::endl;
    }
    if (cooking_method_ == 3)
    {
        std::cout << "RAW" << std::endl;
    }

    std::cout << "Protein Type: " << getProteinType() << std::endl;

    std::vector<MainCourse::SideDish> side_dishes = getSideDishes();
    std::cout << "Side Dishes: ";
    for (size_t i = 0; i < side_dishes.size(); i++)
    {
        std::cout << side_dishes[i].name;
        if (side_dishes[i].category == GRAIN)
        {
            std::cout << " (Grain)";
        }
            if (side_dishes[i].category == PASTA)
        {
            std::cout << " (Pasta)";
        }
        if (side_dishes[i].category == LEGUME)
        {
            std::cout << " (Legume)";
        }
        if (side_dishes[i].category == BREAD)
        {
            std::cout << " (Bread)";
        }
        if (side_dishes[i].category == SALAD)
        {
            std::cout << " (Salad)";
        }
        if (side_dishes[i].category == SOUP)
        {
            std::cout << " (Soup)";
        }
        if (side_dishes[i].category == STARCHES)
        {
            std::cout << " (Starches)";
        }
        if (side_dishes[i].category == VEGETABLE)
        {
            std::cout << " (Vegetable)";
        }

        if (i < side_dishes.size() - 1)
        {
            std::cout << ", ";
        }
    }

    std::cout << std::endl;

    std::cout << "Gluten-Free: ";
    if (isGlutenFree() == 1)
    {
        std::cout << "True" << std::endl;
    }
    else
    {
        std::cout << "False" << std::endl;
    }
}