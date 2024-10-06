/**
 * @file MainCourse.hpp
 * @brief This file contains the declaration of the MainCourse class, which represents a main course inherited from Dish class.
 * 
 * The MainCourse class includes attributes such as cooking method, protein type, side dishes with category, and whether it is gluten free.
 * It provides constructors, accessor and mutator functions, and a display function to manage and present
 * the details of a main course.
 * 
 * @date September 17th, 2024
 * @author Kun Feng Wei
 */

#ifndef MAIN_COURSE_HPP
#define MAIN_COURSE_HPP

#include "Dish.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <iomanip> // For std::fixed and std::setprecision
#include <cctype>  // For std::isalpha, std::isspace

class MainCourse : public Dish
{
public:
    enum CookingMethod { GRILLED, BAKED, FRIED, STEAMED, RAW };

    enum Category { GRAIN, PASTA, LEGUME, BREAD, SALAD, SOUP, STARCHES, VEGETABLE };

    struct SideDish
    {
        std::string name;
        Category category;
    };

/**
* Default constructor with inheritence from Dish default constructor.
* Initializes all private members with default values:
* - cooking_method_ = GRILLED
* - protein_type_: "UNKNOWN"
* - side_dishes_: Empty list
* - gluten_free_: False
*/
    MainCourse();

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
    MainCourse(const std::string& name, const std::vector<std::string>& ingredients, const int& prep_time, const double& price, const CuisineType cuisine_type, const CookingMethod cooking_method, const std::string& protein_type, const std::vector<SideDish>& side_dishes_, const bool& gluten_free);
/**
 * Sets the cooking method of the main course.
 * @param cooking_method The new cooking method.
 * @post Sets the private member `cooking_method_` to the value of the
parameter.
 */
    void setCookingMethod(CookingMethod cooking_method_);

 /**
 * @return The cooking method of the main course (as an enum).
 */   
    MainCourse::CookingMethod getCookingMethod() const;

/**
 * Sets the type of protein in the main course.
 * @param protein_type A string representing the type of protein.
 * @post Sets the private member `protein_type_` to the value of the
parameter.
 */
    void setProteinType(const std::string& protein_type_);

/**
 * @return The type of protein in the main course.
 */
    std::string getProteinType() const;

/**
 * Adds a side dish to the main course.
 * @param side_dish A SideDish struct containing the name and category
of the side dish.
 * @post Adds the side dish to the `side_dishes_` vector.
 */
    void addSideDish(const SideDish& side_dishes_);

/**
 * @return A vector of SideDish structs representing the side dishes
served with the main course.
 */
    std::vector<SideDish> getSideDishes() const;

/**
 * Sets the gluten-free flag of the main course.
 * @param gluten_free A boolean indicating if the main course is gluten-
free.
 * @post Sets the private member `gluten_free_` to the value of the
parameter.
 */
    void setGlutenFree(const bool& gluten_free_);

/**
 * @return True if the main course is gluten-free, false otherwise.
 */
    bool isGlutenFree() const;

    // Helper function to display outputs
    /**
     * @return The logical outputs
     */
    void displayMainCourse() const;

private:
    CookingMethod cooking_method_;
    std::string protein_type_;
    std::vector<SideDish> side_dishes_;
    bool gluten_free_;
};

#endif // MAIN_COURSE_HPP

