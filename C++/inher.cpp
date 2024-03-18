#include<iostream>
using namespace std;

class parent{
	public:
		myfun1()
		{
			cout<<"this is Parent class";
		}
};

class child:public parent{
	myfun2()
	{
		cout<<"this is Child class";
	}
};

main()
{
	child obj;
	obj.myfun1();
	obj.myfun2();
}
