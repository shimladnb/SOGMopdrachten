#include <iostream>

using namespace std;

void doeshit (string arg[], int length)
{
	for (int n=0;n<length;n++)
	{	
		cout << n+1 << " " << arg[n] << endl;				
	}
}



int main()
{
	string stad[] = {"amsterdam","utrecht","jezus"};
	doeshit (stad,3);

	return 0;
}

