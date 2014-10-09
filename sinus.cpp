#include <iostream>
#include <math.h>

using namespace std;
//zodat je niet de hele tijd std::lt ofzo bij elke << moet zetten.


int main(int argc, char ** argv)
//int argc, char ** argv weet ik even niet meer 
//int main hier zet je je code in! 
{
	float PI = 3.1415;
	for (int sample=0; sample < 48000; sample++)
	{
	cout << sin (480*(2 * PI)* sample) << endl;
	
	}
	return 0;
	//zo sluit je het programma af
}

