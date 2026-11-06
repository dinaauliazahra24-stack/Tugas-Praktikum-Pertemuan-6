#include <iostream>
using namespace std;

int main()
{
	
	int var1 = 1;
	int var2 = 0;
	//outer switch
	switch (var1){
	case 0:
		cout<<"outer switch case 0/n";
		break;
	case 1:
		cout<<"outer switch case 1/n";
		//inner switch
		switch (var2){
		case 0:
			cout<<"inner switch case 0/n";
			break;
		}
		break;
	default:
		cout<<"default case of outer loop";
		break;
	}
	
	return 0;
}
