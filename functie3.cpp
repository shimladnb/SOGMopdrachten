#include <iostream>

using namespace std;

void roteerL (string arg[], int length)
{
	for (int n=0;n<length;n++)
	{	
		if (n > 0)
		{
			cout << n+1 << " " << arg[n] << endl;
		}
	
		if (n == 2)
		{
			cout << 1 << " " << arg[0] << endl;
		}						
	}
}



int main()
{
	string stad[] = {"amsterdam","utrecht","jezus"};
	roteerL (stad,3);

	return 0;
}
