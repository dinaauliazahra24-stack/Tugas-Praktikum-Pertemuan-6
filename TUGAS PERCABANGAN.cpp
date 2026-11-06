#include <iostream>
using namespace std;

int main() {
	int hari;
		
		cout<<"masukkan angka (1-7): ";
		cin>>hari;
			
		switch (hari) {
			case 1:
				cout<<"MONDAY";
				break;
			case 2:
				cout<<"TUESDAY";
				break;
			case 3:
				cout<<"WEDNESDAY";
				break;
			case 4:
				cout<<"THURSDAY";
				break;
			case 5:
				cout<<"FRIDAY";
				break;
			case 6:
				cout<<"SATURDAY";
				break;
			case 7:
				cout<<"SUDAY";
				break;
			default:
				cout<<"angka tidak valid";
		}
		
		return 0;
}
