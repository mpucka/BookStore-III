/*
Author: Placido Macosso
Last Revised Date: 2016/03/17

This is the Product class, 
here is where all the other classes  get derived from  
*/

#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include <string>
using namespace std;

class Product
{

  public:
    Product(int=0,string="Item");
    ~Product();
    int getPrice();
    string    getName();
   // void   printInv();
    void   setPrice(int);
    void   setName(string p);

  private:
    int    price;
    string    name;

};

#endif 
