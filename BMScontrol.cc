/*
Author: Placido Macosso
Last Date: 2016/02/17

This is the control class, here is where all the operations will be made

*/

#include <iostream>
#include "BMScontrol.h"

using namespace std;

//In this constructor the view, books and course will be dynamically allocated 
BMScontrol::BMScontrol() //int value
{
	view =    new UImanager();
	courses = new DList();
        books =   new BookArray();
        for(int i=0;i<255;i++)
        productArray[i]=0;

	//dynamicallly allocate memory 
        value=0;
        
}

//In this destructor the view, books and course will be deallocated 
BMScontrol::~BMScontrol()
{

  delete view;
  delete courses;
  delete books;
  
  for (int i =0; i< 255;i++){
  delete productArray[i];
  
   productArray[i]=0;
  }
}

void BMScontrol::launch()
{
  int    choice;

  string code;
  Course* newCourse = 0;
  DList*  sevCourse  ;//several courses

  while (1) {
    choice = -1;
    code   =  "";
    view->mainMenu(&choice);
    if (choice == 0) {
      break;
    }
    //Adding the courses
    else if (choice == 1) {
      
      //initializing the course object 
        int courseAmount = view->courseAmount();
         
         //adding one course       
         if (courseAmount==1) {
             view->getCourseData(&newCourse);
             *courses+=(newCourse);

          } 

          //adding multiple courses
          else if (courseAmount >= 2){
               view->courseList(&sevCourse,courseAmount);
               *courses+=(*sevCourse);
          }    
    }
    //printing the courses
    else if (choice == 2) {
        view->printCourses(courses); //remove the & operator because is already a pointer
    }

    //Deleting Courses
    else if (choice == 3) {
          int courseAmount = view->courseAmount();
     	  
	  //Deleting one course
          if(courseAmount ==1){
             view->getCourseCode(code);
             if(courses->find(code)){
                Course* c = courses->find(code);
                *courses-=(c);
              }
           }

 	   //Deleting multiple courses  
           else if(courseAmount >=2){
                  view->getCourseCode(code);
                  if(courses->find(code)){
                    Course* sevCourses = courses->find(code);
                    view->courseList(&sevCourse,courseAmount);
                   *courses-=(*sevCourse);
                   }
           }


    }
    //Adding a text book
    else if (choice == 4) {
    
    //inittializing the book object
         Book* newBook= 0; 
         string n;

         view->getCourseCode(code);
    
         if (courses->find(code)){//checking if it can find the course code
            view->addTextbook(&newBook);
            Course* c = courses->find(code);
            c->addBook(newBook);
            productArray[value]=newBook;
            value++;
    }
    else 
          cout<<"Course not found\n";

    }
    //Printing the textbooks
    else if (choice == 5) {
         string n;

         view->getCourseCode(code);
    
        if (courses->find(code)){
            Course* c = courses->find(code);
            view->printCourseBook(c);
    }
        else 
            cout<<"Course not found\n";
    }
    //Adding a gift
    else if (choice == 6){
       string n;

       Product* newGift = 0; 
       view->addGift(&newGift);
       productArray[value]=newGift;
       value++;
   }

   //Adding eletronics
   else if (choice == 7){
       string n;
       Product* newEletronic = 0; 
       view->addElectronics(&newEletronic);
       productArray[value]=newEletronic;
       value++;
   }

   //Adding Apparel
   else if (choice == 8){
       string n;
       Product* newApparel = 0; 
       view->addApparel(&newApparel);
       productArray[value]=newApparel;
       value++;
   }

   //Print inventory
   else if (choice == 9){
    view->printInv(productArray);
   }
 
    view->pause();
  }
}


