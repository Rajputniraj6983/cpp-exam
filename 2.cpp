#include<iostream>
#include<string>
using namespace std;

class Employee
{
	private :
	  string name,designation;
	  int salary;
	
	  public :
	  
	  void setter()
	  {
	  	cout << " enter the name ";
	  	cin >> name ;
	  	cout << " enter the salary ";
	  	cin >> salary;
		cout << " enter the designation ";
	  	cin >>  designation;
	  	
      }
      void getter()
      {
      	cout << name << salary << designation << endl;
      }
      
};
main()
{
	
	Employee s1;
	s1.getter();
	s1.setter();
}