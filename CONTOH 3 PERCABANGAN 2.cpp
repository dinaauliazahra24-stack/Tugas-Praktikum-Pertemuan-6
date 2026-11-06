//C++ Program to demonstrate syntax of switch
#include <iostream>
using namespace std;

//Driver Code
int main()
{
	//switch variabel
	char x = 'A';
	//switch statements
	switch (x) {
	case 'A':
		cout<<"Choice is A";
		break;
	case 'b':
		cout<<"choice is B";
		break;
	case 'c':
		cout<<"choice is C";
		break;
	default:
		cout<<"choice other than A, B and C";
		break;
	}
	return 0;
}
