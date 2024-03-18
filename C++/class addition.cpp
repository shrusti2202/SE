#include<iostream>
using namespace std;


class myclass{
	
	public:
		
		int a,b;
		myfun()
		{
			cout<<"Enter number 1 :";
			cin>>a;
		}
		myfun1()
		{
			cout<<"Enter number 2 :";
			cin>>b;
		}
		myfun2()
		{
			int c=a+b;
			cout<<"Addition :"<<c;
		}
	
};

main()
{
	myclass obj;
	obj.myfun();
	obj.myfun1();
	obj.myfun2();
}
