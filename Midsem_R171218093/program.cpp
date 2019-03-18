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


};
int main()
{
	MidSem obj(2,3);      // creation of object(commit 1)

	cout<<obj.add()<<endl;
	cout<<obj.subtract()<<endl;        //commit 2
	return 0;
}
