#include<iostream>
using namespace std;
int gcd_recursive(int a,int b)
{
	if(b==0)
	return a;
	else 
	return gcd_recursive(b,a%b);
}
int GCD_iterative(int a,int b)
{
	for(int i=a;i>=2;i--)
	{
		if(a%i==0 && b%i==0)
		{
			return i;
			break; 
		}
	}
	return 1;
}
int fact_recursive(int num)
{
	if(num==1)
	return num;
	else 
	return (num*fact_recursive(num-1));
}
int fact_iterative(int num)
{
	int fact=1; 
	for(int i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	return fact;
}
float power_recursive(float n,float m)
{
	if(m==0)
	return 1;
	else if(m==1)
	return n;
	else if(m<0)
	return 1/n*power_recursive(n,m+1);
	else 
	return (n*power_recursive(n,m-1));
}
float power_iterative(float n,float m)
{
	float result=1;
	if(m>1)
	{
	
		for(int i=1;i<=m;i++)
		{
			result=result*n;
		}
	}
	if(m<1)
	{
		for(int i=m;i<0;i++)
		{
			result*=1/n;
		}
	}
	if(m==0)
	{
		result=1;
	}
    return result;
}
int fibo_recursive(int num)
{
	if(num==0 || num==1)
	return num;
	else 
	return(fibo_recursive(num-1)+fibo_recursive(num-2));
}
int fibo_iterative(int n)
{
	int i,a=0,b=1,c;
	if(n==1)
	{
		cout<<"\nFibonacci series:\n"<<a;
	}
	else if(n==2)
	{
		cout<<"\nFibonacci series:\n"<<a<<" "<<b;
	}
	else
	{
		cout<<"\nFibonacci series:\n"<<a<<" "<<b<<" ";
	   for(i=3;i<=n;i++)
	  {
         c=a+b;
         a=b;
         b=c;
         cout<<c<<" ";
		
	  }
    }
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
						cout<<"\n********  RECURSIVE RESULT  ********";
			            cout<<"\nG.C.D. of "<<num1<<" & "<<num2<<" is:"<<gcd_recursive(num1,num2);
			            cout<<"\n********  ITERATIVE RESULT  ********";
						cout<<"\nG.C.D. of "<<num1<<" & "<<num2<<" is:"<<GCD_iterative(num1,num2);
						break;
			case 2:		try{
			                cout<<"\nEnter a number:";
						    cin>>num;
						    if(num<0)
						    throw "PLEASE ENTER NUMBER >=0";
						    if(num==0)
						    throw 1;
						    else
						    {
							
						    	cout<<"\n********  RECURSIVE RESULT  ********";
								cout<<"\nFactorial is:"<<fact_recursive(num);
								cout<<"\n********  ITERATIVE RESULT  ********";
						    	cout<<"\nFactorial is:"<<fact_iterative(num);
						    }
							}
						    catch(const char* str)
						    {
						    	cout<<"\n"<<str;
							}
							catch(int i)
							{
								cout<<"\n********  RECURSIVE RESULT  ********";
								cout<<"\nFactorial is:"<<i;
								cout<<"\n********  ITERATIVE RESULT  ********";
						    	cout<<"\nFactorial is:"<<i;
							}
						break;			
			case 3:		cout<<"\nEnter base term and exponent term:";
						cin>>num1>>num2;
						cout<<"\n********  RECURSIVE RESULT  ********";
						cout<<"\nCalculated result is:"<<power_recursive(num1,num2);
						cout<<"\n********  ITERATIVE RESULT  ********";
						cout<<"\nCalculated result is:"<<power_iterative(num1,num2);
						break;
			case 4:		try{			 
			            	cout<<"\nEnter number of terms:";
							cin>>num;
							if(num<0)
							throw "NUMBER OF TERMS CAN'T BE NEGATIVE,PLEASE ENTER VALID NUMBER OF TERMS!!";
							else
							{
							
								cout<<"\n********  RECURSIVE RESULT  ********";
								cout<<"\nFibonacci series:\n";
								while(i<num)
								{
									cout<<fibo_recursive(i)<<" ";
									i++;
								}
								cout<<"\n********  ITERATIVE RESULT  ********";
								fibo_iterative(num);
							}
						}
							catch(const char* str)
							{
								cout<<"\n"<<str;
							}
						break;
			default:    cout<<"\nWRONG CHOICE!!";				
	    }
	    cout<<"\n Do you want to continue(y/n):";
	    cin>>ch;
	}while(ch=='y' || ch=='Y');
	return 0;
}
