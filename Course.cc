/*
Author: Placido Macosso
Last Revised Date: 2016/02/10

This is the Course class, 
here is where all the tasks to get the course information will be implemented
*/

#include "Course.h"
#include <iomanip>
Course::Course(string s, string nu, string na, string i, int e)
{
   subj  = s;
   num   = nu;
   name  = na;
   instr = i;
   enrol = e;
   size  = 0;
}

Course::~Course(){}

string Course::getCode()      { return subj + num; }
string Course::getName()      { return name; }
string Course::getInstr()     { return instr; }
int    Course::getEnrol()     { return enrol; }
Book*  Course::getBook(int i) { return books.getBook(i); }
int    Course::getNumBooks()  { return books.getSize(); }

void   Course::addBook(Book* b)  
{ 
  books.add(b);
}

//void   Course::format(Course& course){
ostream& operator<<(ostream& out, Course& course)
{
  for(int i =0; i < course.size;i++){
      cout <<setfill('0')<<setw(2)<< course.getCode() <<":"
      <<setfill('0')<<setw(2)<< course.getName()  <<":"
      <<setfill('0')<<setw(2)<< course.getInstr() <<":"
      <<setfill('0')<<setw(2)<< course.getEnrol() <<":" <<endl;
   }
 return out;
} 
