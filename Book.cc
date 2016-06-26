/*
Author: Placido Macosso
Last Revised Date: 2016/02/10

This is the Book class, 
here is where all the tasks to get the book information will be implemented
*/

#include "Book.h"

Book::Book(string t, string a, string i, int e, int y) /*:
 Product(e)*/
{
   title   = t;
   authors = a;
   isbn    = i;
   edition = e;
   year    = y;
  setName(t);
}

Book::~Book()
{

}

string Book::getTitle()    { return title; }
string Book::getAuthors()  { return authors; }
string Book::getISBN()     { return isbn; }
int    Book::getEdition()  { return edition; }
int    Book::getYear()     { return year; }
