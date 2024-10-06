/**
 * @file test.cpp
 * @brief This file contains the implementation of the Appetizer, Dessert, and MainCourse class, which represents all implementation files inherited from the Dish class.
 * 
 * The test implementation includes methods to manage and present the details of the inherited classes from Dish class.
 * The implementation ensures that the outputs are validated and correctly formatted.
 * 
 * @date September 17th, 2024
 * @author Kun Feng Wei
 */

#include "Dish.hpp"
#include "Appetizer.hpp"
#include "Dessert.hpp"
#include "MainCourse.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <iomanip> // For std::fixed and std::setprecision
#include <cctype>  // For std::isalpha, std::isspace

int main()
{
//Instantiate an appetizer with the default constructor
    Dish def_parameter;

    def_parameter.setName("UNKNOWN");
    def_parameter.getName();

    def_parameter.setIngredients(std::vector<std::string> {});
    def_parameter.getIngredients();

    def_parameter.setPrepTime(0);
    def_parameter.getPrepTime();

    def_parameter.setPrice(0.00);
    def_parameter.getPrice();

    def_parameter.setCuisineType(Dish::CuisineType::OTHER);
    def_parameter.getCuisineType();

    def_parameter.display();

    Appetizer def_parameter_with_appetizer;

    def_parameter_with_appetizer.setSpicinessLevel(7);
    def_parameter_with_appetizer.getSpicinessLevel();

    def_parameter_with_appetizer.setServingStyle(Appetizer::FAMILY_STYLE);
    def_parameter_with_appetizer.getServingStyle();

    def_parameter_with_appetizer.setVegetarian(true);
    def_parameter_with_appetizer.isVegetarian();

    def_parameter_with_appetizer.displayAppetizer();

//Seperates outputs to make it look more readable    
    std::cout << std::endl;

//Instantiate a main course with the parameterized constructor
    std::vector<std::string> maincourse_ingredients = {"Chicken", "Olive Oil", "Garlic", "Rosemary"};

    Dish maincourse_parameterized("Grilled Chicken", maincourse_ingredients, 30, 18.99, Dish::CuisineType::AMERICAN);
    
    maincourse_parameterized.display();

    MainCourse parameterized_with_maincourse;

    parameterized_with_maincourse.setCookingMethod(MainCourse::GRILLED);
    parameterized_with_maincourse.getCookingMethod();

    parameterized_with_maincourse.setProteinType("Chicken");
    parameterized_with_maincourse.getProteinType();

    parameterized_with_maincourse.addSideDish({"Mashed Potatoes", MainCourse::STARCHES});
    parameterized_with_maincourse.addSideDish({"Green Beans", MainCourse::VEGETABLE});
    parameterized_with_maincourse.getSideDishes();

    parameterized_with_maincourse.setGlutenFree(true);
    parameterized_with_maincourse.isGlutenFree();

    parameterized_with_maincourse.displayMainCourse();

//Seperates outputs to make it look more readable    
    std::cout << std::endl;

//Instantiate a dessert with the parameterized constructor
    std::vector<std::string> dessert_ingredients = {"Flour", "Sugar", "Cocoa Powder", "Eggs"};

    Dish dessert_parameterized("Chocolate Cake", dessert_ingredients, 45, 7.99, Dish::CuisineType::FRENCH);
    
    dessert_parameterized.display();

    Dessert parameterized_with_dessert;

    parameterized_with_dessert.setFlavorProfile(Dessert::SWEET);
    parameterized_with_dessert.getFlavorProfile();

    parameterized_with_dessert.setSweetnessLevel(9);
    parameterized_with_dessert.getSweetnessLevel();

    parameterized_with_dessert.setContainsNuts(false);
    parameterized_with_dessert.containsNuts();

    parameterized_with_dessert.displayDessert();

    return 0;
}
