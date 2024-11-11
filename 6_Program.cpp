/*
Program6: Nested switch Statements for a MenuCreate a menu-based program where the user can choose between "Vegetarian" and "Non-
Vegetarian" options, then display a sub-menu with specific dishes based on the selection. Use
nested switch statements to handle each menu and sub-menu option.
*/
#include<iostream>
using namespace std;
int main(){

    char c;
    int choice;
    cout<<"Select Category by entering 'V' for Vegetarian , 'N' for Non-Vegetarian and Others for full menu\n";
    cin>>c;
    switch(c){
        case 'V':
            cout<<"Select a Sub-Category by entering:\n1 for Burgers and Sandwiches\n2 for Beverages\n3 for Biryani and Rice\n4 for Pizzas\n5 for Snacks\n";
            cin>>choice;
            switch(choice){
                case 1:
                    cout<<"Burgers & Sandwiches:\n1. Veg Club Sandwich\t\t2. Paneer Tikka Sandwich\n3. Aloo Tikki Burger\t\t4.Premium Paneer Burger\n";
                    break;
                case 2:
                    cout<<"Beverages:\n1. Mango Shake\t\t2. Chocolate Shake\n3. Strawberry Shake\t\t4. Oreo Shake\n";
                    break;
                case 3:
                    cout<<"Biryani and Rice:\n1. Veg Biryani\t\t2. Veg Fried Rice\n3. Jeera Rice\t\t4. Plain Rice\n";
                    break;
                case 4:
                    cout<<"Pizzas:\n1. Cheese Pizza\t\t2. Veggie Delight Pizza\n3. Paneer Tikka Pizza\t\t4. Mashroom Delight Pizza\n";
                    break;
                case 5:
                    cout<<"Snacks:\n1. French Fries\t\t2. Peri Peri Fries\n";
                    break;
                default:
                    cout<<"Invalid Choice\n";
                    break;
            }
            break;
        case 'N':
            cout<<"Select a Sub-Category by entering:\n1 for Burgers and Sandwiches\n2 for Shawarmas\n3 for Biryani and Rice\n4 for Pizzas\n5 for Snacks\n";
            cin>>choice;
            switch(choice){
                case 1:
                    cout<<"Burgers & Sandwiches:\n1. Chicken Grilled Sandwich\t2. Chicken Tikka Sandwich\n3. Zinger Burger\t\t4. Mexican Chicken Burger\n";
                    break;
                case 2:
                    cout<<"Shawarmas:\n1. Classic Chicken Shawarma\t2. Irani Chicken Shawarma\n3. Turkish Chicken Shawarma\t4. Spicy Chicken Shawarma\n";
                    break;
                case 3:
                    cout<<"Biryani and Rice:\n1. Chicken Biryani\t\t2. Chicken Fried Rice\n3. Mutton Biryani\n";
                    break;
                case 4:
                    cout<<"Pizzas:\n1. Chicken Blast Pizza\t\t2. Roast Chicken Pizza\n3. Chicken Tikka Pizza\t\t4. Peri Peri Chicken Pizza\n";
                    break;
                case 5:
                    cout<<"Snacks:\n1. Chicken Popcorn\t\t2. Chicken Nuggets\n3. Chicken Strips\t\t4. Fried Chicken Bucket\n";
                    break;
                default:
                    cout<<"INVALID CHOICE!!";
                    break;
            }
            break;
        default:
            cout<<"Vegetarian Menu:\n";
            cout<<"Burgers & Sandwiches:\n1. Veg Club Sandwich\t\t2. Paneer Tikka Sandwich\n3. Aloo Tikki Burger\t\t4.Premium Paneer Burger\n";
            cout<<"Beverages:\n1. Mango Shake\t\t2. Chocolate Shake\n3. Strawberry Shake\t4. Oreo Shake\n";
            cout<<"Biryani and Rice:\n1. Veg Biryani\t\t2. Fried Rice\n3. Jeera Rice\t\t4. Plain Rice\n";
            cout<<"Pizzas:\n1. Cheese Pizza\t\t2. Veggie Delight Pizza\n3. Paneer Tikka Pizza\t4. Mashroom Delight Pizza\n";
            cout<<"Snacks:\n1. French Fries\t\t2. Peri Peri Fries\n\n";
            cout<<"Non-Vegetarian Menu:\n";
            cout<<"Burgers & Sandwiches:\n1. Chicken Grilled Sandwich\t\t2. Chicken Tikka Sandwich\n3. Zinger Burger\t\t4. Mexican Chicken Burger\n";
            cout<<"Shawarmas:\n1. Classic Chicken Shawarma\t\t2. Irani Chicken Shawarma\n3. Turkish Chicken Shawarma\t\t4. Spicy Chicken Shawarma\n";
            cout<<"Biryani and Rice:\n1. Chicken Biryani\t\t2. Chicken Fried Rice\n3. Mutton Biryani\n";
            cout<<"Pizzas:\n1. Chicken Blast Pizza\t\t2. Roast Chicken Pizza\n3. Chicken Tikka Pizza\t\t4. Peri Peri Chicken Pizza\n";
            cout<<"Snacks:\n1. Chicken Popcorn\t\t2. Chicken Nuggets\n3. Chicken Strips\t\t4. Fried Chicken Bucket\n";
            break;

        
    }
}


