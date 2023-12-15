#include<iostream>
using namespace std;

class Employee
{
	private : 
	
		int employe1,employe2;

	public :
		void set()
		{
			cout << " enter number of employe1 ";
			cin >> employe1;
			cout << " enter number of employe2 ";
			cin >> employe2;
		
	}
	
	void get()
	{
		cout << employe1 <<employe2  <<endl;
	}
};

main()
{
	int s1,s2,s3;
	Employee s1;
	s1.get(); 
	s1.set();
	Employee s2;
	s2.get();
	s2.set();
	
	int s1,s2,s3;
	s3 = s1 + s2; 
}
