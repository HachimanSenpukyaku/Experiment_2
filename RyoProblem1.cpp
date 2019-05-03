#include <iostream>


using namespace std;

int main ()
{
	int A, B, C, Hours, A1, B2;
	A = 995;
	B = 1495;
	C = 1995;
	A1 = (Hours - 10)*20 + 995; 
	B2 = (Hours - 20)*10 +1495;
	
	char Packages;
	
	cout << "Hi Customer! What kind of Package are you using? [A, B, C]: ";
	cin >> Packages;
	
	cout << "How many hours have you used in the Subscription?: ";
	cin >> Hours;
	
	
	switch (Packages)
	{
		case 'A':
		case 'a':
			if (Hours <= 10)
			{
			cout << "\n\nYou have purchased package A\n ";
			cout << "\n\nYour Total Price is: ";
			cout << A << " PHP";
			}
			else
			{
			cout << "\n\nYou have purchase package A\n  ";
			cout << "\n\nYour Total Price is: ";
			cout << A1 << " PHP";
			}
			break;
			
		case 'B':
		case 'b':
		    if (Hours <= 20)
		    {
		    	cout << "\n\nYou have purchased Package B\n ";
		    	cout << "\n\nYour Total Price is: ";
		    	cout << B << " PHP";
			}	
		    else
		    {    
				cout << "\n\nYou have purchased Package B\n ";
				cout << "\n\nYour Total Price is: ";
		        cout << B2 << " PHP";
			}
			break;
		
		case 'C':
		case 'c':
		   
			cout << "\n\nYou havce purchased Package C \n";
			cout << "\n\nYour Total Price is: ";
			cout << C << " PHP";	
			break;	
	}
	
	
	return 0;
}

























