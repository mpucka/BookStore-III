#include "Apparel.h"
#include <iostream>
#include <string>

Apparel::Apparel(int a, string k, int p, string n)
  :appAmount(a), appKind(k)
{
  setPrice(p);
  setName(n);
}

Apparel::~Apparel()
{

}
