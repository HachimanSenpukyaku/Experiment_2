#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double V = 0, X, Y, Z = 2.5;
	
	cout << "Enter the Value of X: ";
	cin >> X;
	cout << "Enter the Value of Y: ";
	cin >> Y;
	
	if (X = 1 && Y > 1 && Y < 5)
		{
		V = X*Y*Z;
		cout << "\tV = " << V << "\n";
		}
	else if (X = 1 && Y >= 5)
		{
		V = ((X+Y)/Z);
		cout << "\tV = " << V << "\n";
		}
	else if (X = 2 && Y <= 5)
		{
		V = (X-Y)/Z;
		cout << "\tV = " << V << "\n";
		}
	else if (X = 2 && Y > 5)
		{
		V = X  -(sqrt (Y + Z));
		cout << "\tV = " << V << "\n";
		}
	else 
		{
		V = X + Y + Z;
		cout << "\tV = " << V << "\n";
		}	

return 0;	
}
