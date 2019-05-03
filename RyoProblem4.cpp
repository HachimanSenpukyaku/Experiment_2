#include <iostream>


using namespace std;

int main()
{
	int Num1, Num2, Num3;
	
	cout<<"Enter First Number: ";
	cin>>Num1;
	cout<<"\n";
	
	cout<<"Enter Second Number: ";
	cin>>Num2;
	cout<<"\n";
	
	cout<<"Enter Third Number: ";
	cin>>Num3;
	cout<<"\n";
	
	if( (Num1>Num2)&&(Num1>Num3))
	{
		cout<<"\tYour Largest Number is: ";
		cout<<Num1;
	}
	else if( (Num2>Num1)&&(Num2>Num3))
	{
		cout<<"\tYour Largest Number is: ";
		cout<<Num2;
	}
	else
	{
		cout<<"\t-->Your Largest Number is: ";
		cout<<Num3;
	}
	
	return 0;
	
}







