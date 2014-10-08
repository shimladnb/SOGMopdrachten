#include <iostream>

using namespace std;

void doeshit (int arg[], int length)
{
	for (int n=0;n<length;n++)
	{	
		cout << n+1 << " " << arg[n] << endl;				
	}
}



int main()
{
	int stad[] = {55,44,22,455,12};
	doeshit (stad,5);

	return 0;
}

