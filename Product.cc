#include "Product.h"
#include <iostream>
#include <string>

Product::Product(int p, string n)
   :price(p), name(n)
{}

Product::~Product()
{}

void Product::setPrice(int p)
{
  price=p;
}

void Product::setName(string p)
{
  name=p;
}

string Product::getName()
{
  return name;
}

int Product::getPrice()
{
  return price;
}
/*
void Product::printInv()
{
  cout<< "The products in sale are: " <<endl;
  cout<< "Product: " <<name<<" price: " <<price<<endl;
}*/
