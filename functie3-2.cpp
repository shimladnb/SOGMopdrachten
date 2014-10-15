


#include <iostream>

using namespace std;


//roteer links oude functie
/* void roteerL (string argL[], int lengthL)
{
	for (int n=0;n<lengthL;n++)
	{	
		if (n > 0)
		{
			cout << n+1 << " " << argL[n] << endl;
		}
	
		if (n == lengthL-1)
		{
			cout << 1 << " " << argL[0] << endl;
		}						
	}
}
*/

void Rotate (string arg[],int length)
{
	string temp = arg[0];

	for(int i = 0; i < length - 1; i++)
	{
		arg[i] = arg[i+1];
	}
	
	arg[length-1] = temp;	
}

void printLijst (string arg[], int length)
{
	for(int i = 0; i<length; i++)
	{
		cout << i+1 << " " << arg[i] << endl;
	}
}

int main()
{
	string stad[] = {"amsterdam","utrecht","osdrop"};


	printLijst (stad,3);
	Rotate (stad,3);
	cout << endl;
	printLijst (stad,3);


	return 0;
}




// +=   is gelijk aan x = x + a 



// (e - b)* index + b = envelope formule!  

 