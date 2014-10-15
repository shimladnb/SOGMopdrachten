


#include <iostream>

using namespace std;


//roteer links
void roteerL (string argL[], int lengthL)
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



int main()
{
	string stad[] = {"amsterdam","utrecht","jezus"};


	
	roteerL (stad,3);


	return 0;
}




// +=   is gelijk aan x = x + a 



// (e - b)* index + b = envelope formule!  

 