/*
Author: Placido Macosso
Last Revised Date: 2016/02/10

This is the Book class, 
here is where all the tasks to get the book information will be implemented
*/
#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>

using namespace std;

#include "defs.h"
#include "Product.h"

class Book : public Product
 {

  public:
    Book(string="", string="", string="", int=1, int=0);
    string  getTitle();
    string  getAuthors();
    string  getISBN();
    int     getEdition();
    int     getYear();
    ~Book();

  private:
    string    title;
    string    authors;
    string    isbn;
    int       edition;
    int       year;
};

#endif

