// David Adewoyin
// HW6

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class Student
{
private:
	string ID;
	string fname;
	string lname;
	double grade1;
	double grade2;
	double grade3;
	double grade4;
public:
Student();   //constructor
string getID() const;
string getFname() const;
string getLname() const;
double getGrade1() const;
double getGrade2() const;
double getGrade3() const;
double getGrade4() const;
void displayStudentInfo() const;
void readStudentInfo();
double computeStudentAvg();
};
// The constructor initializes all fields     *
//***********************************************************
Student::Student()
{ ID="";
fname="";
lname="";
grade1=0.0;
grade2=0.0;
grade3=0.0;
grade4=0.0;
}

   // getID returns the value of the member variable ID.  *
//***********************************************
  string Student::getID() const
   { return ID; }

   // getfname returns the value of the member variable fname.  *
//***********************************************
  string Student::getFname() const
   { return fname; }

   // getlname returns the value of the member variable lname;  *
//***********************************************
  string Student::getLname() const
   { return lname; }

   // getgrade1 returns the value of the member variable grade1.  *
//***********************************************
  double Student::getGrade1() const
   { return grade1; }

      // getgrade2 returns the value of the member variable grade2.  *
//***********************************************
 double Student::getGrade2() const
   { return grade2; }

     // getgrade3 returns the value of the member variable grade3.  *
//***********************************************
 double Student::getGrade3() const
   { return grade3; }
  
     // getgrade4 returns the value of the member variable grade4.  *
//***********************************************
  double Student::getGrade4() const
   { return grade4; }

  // displayStudentInfo displays all the members of the class *
//*********************************************** 
 void Student::displayStudentInfo() const
 {cout << "ID= " <<ID <<endl<<"First name = " << fname<<endl;
 cout<<"Last name = " << lname<<endl;
 cout<<"Grades: "<< grade1<<"," <<grade2<<","<<grade3<<","<<grade4<<endl;
 }
 // readStudentInfo reads in all the members of the class from the keyboard *
//*********************************************** 
 void Student::readStudentInfo()
 {
	 cout<<"Please enter the student's ID, first name, last name and 4 grades"<<endl;
	 cin >> ID >>fname>>lname>>grade1>>grade2>>grade3>>grade4;
 }
 // computeStudentAvg() calculates the average of the 4 grades
//*********************************************** 
  double Student::computeStudentAvg()
  {return (grade1 + grade2 + grade3 + grade4)/4.0;}

  int main()	
  {
  Student x;  //declare an instance of the Student class.
  int i, num;
  float sumaverages = 0.0;
  cout << "Please enter the number of students in the class: " << endl;
  cin >> num;
  for (i=1; i <= num; i++)
  {
	  x.readStudentInfo();
	  x.displayStudentInfo();
	  cout <<"The student's final grade is: " <<x.computeStudentAvg()<<endl<<endl;
	  sumaverages +=x.computeStudentAvg();
  }
  cout << "The average final grade for the class is: " << sumaverages / num <<endl;
  return 0;
  }
