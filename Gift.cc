#include "Gift.h"
#include <iostream>
#include <string>

Gift::Gift(int a, string t, int p, string n)
   :giftAmount(a), giftType(t), size(0)
{
  setPrice(p);
  setName(n); 
}

Gift::~Gift()
{

}

int Gift::getGiftAmount()
{
  return giftAmount;
}

string Gift:: getGiftType()
{
  return giftType;
}

int Gift::getSize()
{
  return 0;
}

