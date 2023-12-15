#include<iostream>
using namespace std;

class Rectanagle
{
	private :
		int length,width;
		
	public :
		
		void setter()
		{
			cout << " enter length " << length << endl;
			cin >> length;
			cout << " enter width " << width << endl;
			cin >> width;
		}
		
		void getter()
		{
			cout << length << width << endl;
			
			area of rectangle = l*b;
		}
};

main()
{
	Rectanagle r1;
 	r1.setter();
 	r1.getter();
 	
	
}