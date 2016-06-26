/*
Author: Placido Macosso
Last Date: 2016/02/10

This is the User Interaction class, 
here is where all the output and input will be resented and entered
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <cstdlib>
#include "UImanager.h"

using namespace std;

//This will display the main menu as soon as a user enters the system
void UImanager::mainMenu(int* choice)
{
  string str;

  *choice = -1;

  cout << endl << endl << "WELCOME TO THE BOOKSTORE MANAGEMENT SYSTEM" << endl<<endl;
  cout << "  Course Management:" << endl;
  cout << "  ( 1 )  Add course" << endl;
  cout << "  ( 2 )  List all courses" << endl;
  cout << "  ( 3 )  Delete course" << endl << endl;
  cout << "  Textbook Management:" << endl;
  cout << "  ( 4 )  Add textbook" << endl;
  cout << "  ( 5 )  List course textbooks" << endl << endl;
  cout << "  Store Management:" << endl;
  cout << "  ( 6 )  Add gift" << endl;
  cout << "  ( 7 )  Add eletronics"  << endl;
  cout << "  ( 8 )  Add apparel"     << endl;
  cout << "  ( 9 )  Print Inventory" << endl;
  cout << "  ( 0 )  Exit" << endl << endl;

while (*choice < 0 || *choice > 9) {
    cout << "Enter your selection from 0 to 9:  ";
    *choice = getInt();
  }

}

//Here the system ask the user to input information about a specific class
void UImanager::getCourseData(Course** course)
{
  string    str = "";
  string    subj, num, name, inst;
  int       enrol;

    cin.ignore();
  while (str.length() != 8) {
    cout << "Enter course code (e.g. COMP2404):  ";
    getline(cin, str);
  } 
  subj = str.substr(0,4);
  num  = str.substr(4);

  cout << endl << "Enter course name (e.g. Introduction to SE):  ";
  getline(cin, name);

  cout << endl << "Enter instructor name:   ";
  getline(cin, inst);

  cout << endl << "Enter enrolment:   ";
  getline(cin, str);
  stringstream ss(str);
  ss >> enrol;

  *course = new Course (subj, num, name, inst, enrol);

}

//Here the system ask the user to input information about a specific book 
void UImanager::addTextbook(Book** book) 
{

   
  string    str = "";
  string    title, authors, isbn, code;
  int       year, edition;

  cout << endl;

	  cout << endl << "Enter book title (e.g. Introduction to SE):  ";
	  getline(cin, title);

	  cout << endl << "Enter author name (e.g. Mr. TA ):   ";
	  getline(cin, authors);
	   

	  cout<< endl <<"Enter ISBN (e.g. MY-613123567): "; 
	  getline(cin, isbn);

	  cout << endl << "Enter published year (e.g. 1989)";
	  getline(cin, str);
	  stringstream ss(str);
	  ss >> year;

	  cout << endl << "Enter book edition (e.g. 10)";
	  getline(cin, str);
	  stringstream ss2(str);
	  ss2>>edition;

           //Dynamically allocating the book object
	  *book = new Book (title, authors, isbn, edition,  year);          
}

//This subroutine will take a pointer and print all the courses added  
void UImanager::printCourses(DList *arr)
{
  cout << endl << endl << "ALL COURSES:" << endl << endl;
  string sdfjs;
 // cout << *arr << endl;
  cout << arr->incFormat() << endl << endl;

}


//This subroutine will take a pointer and print all the books added  
void UImanager::printCourseBook(Course *course)
{
  cout << endl << endl <<"ALL BOOKS: " << endl <<endl;
 
  for (int i = 0; i<course->getNumBooks();i++)
  {
    Book* b = course->getBook(i);
    //ask user to enter book info
    cout << "Title:   " << b->getTitle()   << endl;
    cout << "Authors: " << b->getAuthors() << endl;
    cout << "ISBN:    " << b->getISBN()    << endl;
    cout << "Edtion:  " << b->getEdition() << endl;
    cout << "Year :   " << b->getYear()    << endl; 
  }  

}

void UImanager::addGift(Product **product)
{
  string    str = "";
  string    giftType, name;
  int       giftAmount, price;

  cout << endl;

	  cout << endl << "Enter name of product (e.g. Gift) :  ";
	  getline(cin, name);

	  cout << endl << "Enter price :   ";
	  getline(cin, str);
	  stringstream ss2(str);
	  ss2>>price;
          

	  cout<< endl <<"Enter what type of gift : "; 
	  getline(cin, giftType);

	  cout << endl << "Enter how many gifts: ";
	  getline(cin, str);
	  stringstream ss(str);
	  ss >> giftAmount;
   
           //Dynamically allocating the product objects
	  *product = new Gift    (giftAmount, giftType, price, name);
              
}

void UImanager::addApparel(Product **product)
{
  string    str = "";
  string    appType, name;
  int       appAmount, price;

  cout << endl;

	  cout << endl << "Enter name of product (e.g: Apparel):  ";
	  getline(cin, name);

	  cout << endl << "Enter price :   ";
	  getline(cin, str);
	  stringstream ss2(str);
	  ss2>>price;
	

	  cout<< endl <<"Enter what type of Apparel : "; 
	  getline(cin, appType);

	  cout << endl << "Enter how many of them : ";
	  getline(cin, str);
	  stringstream ss(str);
	  ss >> appAmount;
 

  
           //Dynamically allocating the product object 
          *product = new Apparel (appAmount, appType, price, name);    
}


void UImanager::addElectronics(Product **product)
{
  string    str = "";
  string    eleType, name;
  int       eleAmount, price;

  cout << endl;

	  cout << endl << "Enter name of product (e.g. Eletronics):  ";
	  getline(cin, name);

	  cout << endl << "Enter price :   ";
	  getline(cin, str);
	  stringstream ss2(str);
	  ss2>>price;
	

	  cout<< endl <<"Enter what type of eletronics : "; 
	  getline(cin, eleType);

	  cout << endl << "Enter how many of them : ";
	  getline(cin, str);
	  stringstream ss(str);
	  ss >> eleAmount;
 
  
           //Dynamically allocating the product object 
          *product = new Eletronics (eleAmount, eleType, price, name);    
}


//This functions makes the system take a pause, untill user is ready to continue
void UImanager::pause()
{
  string str;

  cout << endl << "\nPress enter to continue...";
  getline(cin, str);
}

//This function will get the users string input then allow the user to enter an intenger
int UImanager::getInt()
{
  string str;
  int    num;

  getline(cin, str);
  stringstream ss(str);
  ss >> num;

  return num;
}

//Helper Function to get the course code from the user
void UImanager::getCourseCode(string& str)
{
  cin.ignore();
  while(str.length() !=8)
  {
	  cout <<"enter Code (COMP2404) then press enter 2x, ONLY PRINT IF U ADD THE COURSE : ";
	  getline(cin,str);

  }
}

//Helper function to allow us manipulate several list at the same time
void UImanager::courseList(DList** tempList, int count)
{
   
  //int count =0;
  *tempList = new DList;
  Course* tempCourse;
  for (int i = 0; i<count; i++){
      getCourseData(&tempCourse);
      **tempList +=tempCourse;

  }
 //delete tempList;
 //tempList=0;
}
 
//Helper function to get the amount of courses we need to manipulate
int UImanager::courseAmount()
{
  int number;
  cout<<"How many courses would you like to manipulate?";
  cin>> number;
  if (number==1){
      cout<<"1 course\n";
  }
  else
      cout<<"multiple courses\n";

  return number;     
}

//Subroutine function to Print the inventory we have 
void UImanager::printInv(Product *product[])
{  
   cout << endl << endl <<"ALL INENTORY: " << endl <<endl;
 Product *b;
 int i =0;
  while (product[i] != 0)
  { 
    
    b = product[i];
   
    //ask user to enter the products info
    cout << "Name:   " << product[i]->getName()   << endl;
    cout << "Price :  " << b->getPrice() << endl;
   i++;
  }  
}
