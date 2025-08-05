#include<iostream>
using namespace std;
class A 
{
	public:
		virtual void show()
		{
			cout<<"Base class\n";
			
		}
};
class B: public A
{
	public:
		 void show()
		 {
		 	cout<<"Derived class \n";
		 	
		 }
};
int main()
{
	A *bptr;
	A aobj;
	bptr = &aobj;
	bptr->show();
	B bobj;
	bptr = &bobj;
	bptr->show();
	return 0;
	
}

