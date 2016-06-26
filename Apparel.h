/*
Author: Placido Macosso
Last Revised Date: 2016/03/17

This is the Product class, 
here is where all the other classes  get derived from  
*/

#ifndef APPAREL_H
#define APPAREL_H

#include <iostream>
#include <string>
#include "Product.h"

using namespace std;

class Apparel : public Product
{

  public:
    Apparel(int,string,int,string);
    ~Apparel();

  private:
    int appAmount;
    string appKind;

};

#endif 
