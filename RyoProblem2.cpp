#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    double GaUse, ConCost, Bal, PerGal;
	ConCost = 35;
	PerGal = 1.10;
	//
	
	cout << "Monthly Water Balance Charge \n\n";
	cout << "How many gallons of water did you used?: ";
	cin >> GaUse;
	
	cout << "How much balance do you have left?: ";
	cin >> Bal;
	
	
	    if (Bal <= 0)
	    {
	    	cout << "\n\nYour Total Payment is: ";
	    	cout << ConCost + (PerGal*GaUse) << "PHP";
		}
		else 
		{
			cout << "\n\nYour Total Payment is: ";
			cout << ConCost + Bal + 20 + (PerGal*GaUse) << "PHP";
			cout << "\n\nAdditional fees were charged since you have an unpaid balance last month \n";
		}
		
		return 0;
	
}
