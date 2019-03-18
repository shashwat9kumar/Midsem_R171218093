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

};
int main()
{
	MidSem obj(2,3);      // creation of object(commit 1)
	return 0;
}
