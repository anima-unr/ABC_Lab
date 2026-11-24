#ifndef RESTAURANT_H
#define RESTAURANT_H
#include "menuItem.h"


class Restaurant{
    string name;
    int numItem;
    int maxItem;
    MenuItem* items;

    public:
        //3 constructors
       

        //getters and setters
        //method names are same as previous lab
        

        void operator + ( MenuItem&);
        
        
        //assignment(=) operator overload
       
        //insertion (<<) operator overload
       
        //Destructor


};

#endif