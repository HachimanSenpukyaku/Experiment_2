#include <iostream>

using namespace std;

int main()
{
	int R,C,Rd,Cd;
	
	cout<<"How many rows do you want?: ";
	cin>>R;
	cout<<"How many columns do you want?: ";
	cin>>C;
	
	for (Rd = 1; Rd <= R; Rd++)
	{
		for (Cd = 1; Cd <= C; Cd++) 
		{
			cout << " * ";
		}
		
		cout << endl;
	}
	
	return 0;
}
