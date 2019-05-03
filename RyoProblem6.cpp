#include <iostream>

using namespace std;

int main()
{
	
	int F=0,S=1,a,b;
	
	
	cout<<"The first 20 terms of the Fibonacci Sequence\n"<<endl;
	
	for(a=1;a<=20;a=a+1)
	{
		
		b=S+F;
		F=S;
		S=b;
		cout<<b<<",";
	}
	
	

	return 0;
}

