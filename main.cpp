
#include "restaurant.h"
#include "food.h"
#include "drink.h"
#include <fstream>

#define SIZE 10


int main(){



    // Create an array of MenuItem pointers named items with a size of SIZE.
    // This array will store pointers to both Food and Drink objects using subtype polymorphism.

    

    // Open an input file stream named fin_food to read from food.txt. 
    // 
    // Read each food item from the file until the end of the file. 
    // For every food item: 
    // 
    // 1. Read the item name and price from the file. 
    // 2. Prompt the user to select a spice level. 
    // Refer to the lab instructions for the required input format. 
    // 3. Dynamically allocate a Food object using new. 
    // 4. Store the Food object pointer in the items array. 
    // 5. Increase the number of stored menu items. 
    // 
    // Close the file after all food items have been processed.
    







    // Open an input file stream named fin_drink to read from drink.txt.
    //
    // Read each drink item from the file until the end of the file.
    // For every drink item:
    //
    // 1. Read the item name and price from the file.
    // 2. Prompt the user to select a drink size.
    //    Refer to the lab instructions for the required input format.
    // 3. Dynamically allocate a Drink object using new.
    // 4. Store the Drink object pointer in the items array.
    // 5. Increase the number of stored menu items.
    //
    // Close the file after all drink items have been processed.

    





    //Create a Restaurant type object named "restaurant" using the paremeterized constructor
    //Pass "Hello World" as the name, 7 as number of items, 7 as the maximum capacity and items as the array of pointers

    
    //Create a Drink type of object named "matcha" using the parameterized constructor
    //Pass "Matcha" as name, 5.5 as price and "Small" as Size

    //use the insertion operator overload for restaurant to display its information
    

    
    // Use a loop to delete every dynamically allocated object stored in the
    // items array. Since the objects were created using new, they must be
    // deleted to prevent memory leaks.
    
    
    
   


  
     // Your output must match Output.txt exactly.
    // Pay close attention to spelling, capitalization, spaces, and newlines.
    

    return 0;
}