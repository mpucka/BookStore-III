#include"Eletronics.h"
#include <iostream>
#include <string>

Eletronics::Eletronics(int a, string t, int p, string n)
  :eleAmount(a), eleType(t)
{
  setPrice(p);
  setName(n);
}

Eletronics::~Eletronics()
{

}
