//10.WAP to perform Palindrome number using for loop and function

#include<stdio.h>
int palim(int num){
	int orgnum=num;
	int revnum=0;
	for(;num>0;num/=10){
		int digit = num%10;
		revnum=revnum*10+digit;
	}
	return(orgnum==revnum);
}
int main(){
	int number;
	printf("enter num :");
	scanf("%d",&number);
	if(palim(number)){
		printf("%d is a palim num",number);
	}
	else{
	printf("%d is not a palim num",number);
	}
}
