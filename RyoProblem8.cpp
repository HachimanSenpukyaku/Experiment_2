#include <iostream>

using namespace std;

int main()
{
	int M,a;
	
	cout<<"Enter a Number: ";
	cin>>M;
	cout<<"\nHere are the multiples of "<<M<<":\n\n";
		
	for(a=1;a<=10;a++)
	{
		cout<<M<<" x "<<a<<" = "<<(M*a)<<endl;
    }   
    
	return 0;
}
