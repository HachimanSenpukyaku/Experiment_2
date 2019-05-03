#include <iostream>

using namespace std;

int main()
{
	int N,Sum;
	
	
	
	cout<<"Enter a Number: ";
	cin>>N;
	
	if (N>0)
	{
	while (N>0)
	{
		for(int a=1; a<=N; ++a)
		Sum += a;
		cout<<"the sum of all numbers from 1 to "<< N <<" is "<< Sum <<endl;
        cout<<"\nEnter a Number: ";
        cin >> N;
        
        Sum = 0;
    }
         cout<<"\n";
    }
    
    while (N<=0)
    {
    	cout << "Thank You!" << endl;
    	break;
	}
  
	
	return 0;
	
}
	
//}


//	cout<<"the sum of 1 to "<< N <<" is "<< Sum <<endl;
     //	cout<<"\nEnter a Number: ";
     //	cin>>N;
     //	Sum = 0;
		
//	}
//	    while (N<=0)
////	    break;
