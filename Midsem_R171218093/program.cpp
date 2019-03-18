#include <iostream>

using namespace std;

class MidSem
{
	int x,y;

	public:
	MidSem(int a=0,int b=0)              // creation of constructor(commit 1)
	{
		x=a;
		y=b;
	}

	int add()
	{
		return (x+y);              // creation of function int add(commit 2)
	}

	int subtract()
	{
		return (x-y);               //creation of function int subtract(commit 3)
	}

	int multiply()
	{
		return (x*y);              // creation of function int multiply (commit 3)
	}

	int quotient()
	{
		return (x/y);              // creation of function int quotient (commit 3)
	}




};
int main()
{
	MidSem obj(2,3);      // creation of object(commit 1)

	cout<<obj.add()<<endl;
	cout<<obj.subtract()<<endl;        //commit 2
	cout<<obj.multiply()<<endl;
	cout<<obj.quotient()<<endl;              // commit 3
	return 0;
}
