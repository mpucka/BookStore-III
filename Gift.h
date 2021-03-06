/*
Author: Placido Macosso && Douglas Raymond 
Last Revised Date: 2016/03/17

This is the Gift class, 
which is product sold in the bookstrore 
*/

#ifndef GIFT_H
#define GIFT_H

#include <iostream>
#include <string>
#include "Product.h"
using namespace std;

class Gift: public Product
{
  
  public:
    Gift(int,string,int,string);
    ~Gift();
    int getGiftAmount();
    string getGiftType();
    int getSize();

  private:
    int giftAmount;
    string giftType;
    int size;
};

#endif 
