#include<stdio.h>
int main(){
	int age;
	printf("enter your age");
	scanf("%d",&age);
	if(age<=18){
		printf("value is bigger then 18");
	}
	else if(age=18){
		printf("value is == 18");
	}
	else{
		printf("value is not valid");
	}
	
}
