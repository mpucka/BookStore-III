/*
Author: Placido Macosso
Last Revised Date: 2016/02/10

This is the Course class, 
here is where all the tasks to get the course information will be implemented
*/

#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>

using namespace std;

#include "defs.h"
#include "BookArray.h"

class Course {

    friend ostream& operator<<(ostream&, Course&);
  public:
    Course(string="", string="", string="", string="", int=0);
    string  getCode();
    string  getName();
    string  getInstr();
    int     getEnrol();
    int     getNumBooks();
    Book*   getBook(int);
    void    addBook(Book*);
    ~Course();
    Course* getCourseID(string); 
    void    format(Course&);
    bool codeExist(string);

  private:
    string    subj;
    string    num;
    string    name;
    string    instr;
    int       enrol;
    BookArray books;//books is an instance of BookArray
    int size;   
};

#endif

