#include <iostream>
using namespace std;

class student
{
  private:
  int rollNo;
  string name;
  public:
  // constructor 
  student (int r , string n )
  {
    rollNo=r;
    name=n;
    cout<< "student object created"<< endl;
  }

  //member function 
  void display ()
  {
    cout<<"Roll number:" << rollNo << endl;
    cout << "Nmae :" << name << endl;
  }

  //destructor 
  ~student()
  {
    cout<<"student object destroyed"<< endl;
  }


};
int main()
{
  student s1(101,"Arun");
  s1.display();
  return 0;
}