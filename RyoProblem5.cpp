#include <iostream>

using namespace std;

int main()
{
	int C;
	
	cout<<"Counting...\n\n";
	
	for(C=1;C<=10;C++)
	{
		cout<<C<<",";
	}
	for(C=12;C<=30;C=C+2)
	{
		cout<<C<<",";
	}
	
	return 0;
}
