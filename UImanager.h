/*
Author: Placido Macosso
Last Date: 2016/03/17

This is the User Interaction class, 
here is where all the output and input will be resented and entered
*/

#ifndef UIMANAGER_H
#define UIMANAGER_H

#include "DList.h"
#include "BookArray.h"
#include "Gift.h"
#include "Apparel.h"
#include "Eletronics.h"

#define TEST_MODE

class UImanager {
  public:
    void mainMenu(int*);
    void getCourseData(Course**);
    void printCourses(DList*);
    void pause();
    void addTextbook(Book**);
    void printCourseBook(Course*);
    void getCourseCode(string&);
    void courseList(DList**, int);
    int  courseAmount();
    void addGift(Product**);
    void addElectronics(Product**);
    void addApparel(Product **product);
    //void printProduct(Product*);
    void printInv(Product*[]);
    
  private:
    int getInt();
};

#endif

