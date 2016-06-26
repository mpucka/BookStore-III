/*
Author: Placido Macosso
Last Revised Date: 2016/03/17

This is the Gift class, 
which is product sold in the bookstrore 
*/
#ifndef ELETRONICS_H
#define ELETRONICS_H

#include <iostream>
#include <string>
#include "Product.h"
using namespace std;

class Eletronics: public Product
{
 public:
  Eletronics(int,string,int,string);
  ~Eletronics();

 private:
  int eleAmount;
  string eleType;
  

};

#endif 
