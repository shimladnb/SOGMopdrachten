#include <iostream>

using namespace std;

int telop(int one,int two)
{	 
	return one+two;
}

int main()
{
	int x,y;

	cout << "geef x: ";
	cin >> x;
	cout << "geef y: ";
	cin >> y;

	int wow=telop(x,y);

	cout << "total:" << 
	wow << endl;
	return 0;
}

