#include<iostream>
using namespace std;
int gcd(int a,int b)
{
	if(b==0)
	return a;
	else 
	return gcd(b,a%b);
}
int fact(int num)
{
	if(num==1)
	return num;
	else 
	return (num*fact(num-1));
}
float power(float n,float m)
{
	if(m==0)
	return 1;
	else if(m==1)
	return n;
	else if(m<0)
	return 1/n*power(n,m+1);
	else 
	return (n*power(n,m-1));
}
int fibo(int num)
{
	if(num==0 || num==1)
	return num;
	else 
	return(fibo(num-1)+fibo(num-2));
}
int main()
{
	int n,num1,num2,num,i=0;
	char ch;
	do
	{
		cout<<"\t\t********  MENU  ********\n"
			<<"\t\t1.G.C.D. OF TWO NUMBERS \n"
			<<"\t\t2.FACTORIAL OF A NUMBER \n"
			<<"\t\t3.CALCULATE NUM1 RAISE TO POWER NUM2 \n"
			<<"\t\t4.FIBONACCI SERIES\n";
		cout<<"\t\tEnter your choice(1-4):";
		cin>>n;
		switch(n)
		{
			case 1:   	cout<<"\nEnter the two numbers:";
						cin>>num1>>num2;	
						cout<<"\nG.C.D. of "<<num1<<" & "<<num2<<" is:"<<gcd(num1,num2);
						break;
			case 2:		cout<<"\nEnter a number:";
						cin>>num;
						cout<<"\nFactorial is:"<<fact(num);
						break;			
			case 3:		cout<<"\nEnter base term and exponent term:";
						cin>>num1>>num2;
						cout<<"\nCalculated result is:"<<power(num1,num2);
						break;
			case 4:		cout<<"\nEnter number of terms:";
						cin>>num;
						cout<<"\nFibonacci series:\n";
						while(i<num)
						{
							cout<<fibo(i)<<" ";
							i++;
						}
						break;
			default:    cout<<"\nWRONG CHOICE!!";				
	    }
	    cout<<"\n Do you want to continue(y/n):";
	    cin>>ch;
	}while(ch=='y' || ch=='Y');
	return 0;
}
