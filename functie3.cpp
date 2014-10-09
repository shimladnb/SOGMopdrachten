/*

Gemaakt door                  | |                      | |          
 ___  ___ _ __ ___    ___  ___| |__  _ __ ___ _   _  __| | ___ _ __ 
/ __|/ _ \ '_ ` _ \  / __|/ __| '_ \| '__/ _ \ | | |/ _` |/ _ \ '__|
\__ \  __/ | | | | | \__ \ (__| | | | | |  __/ |_| | (_| |  __/ |   
|___/\___|_| |_| |_| |___/\___|_| |_|_|  \___|\__,_|\__,_|\___|_|  

*/


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






