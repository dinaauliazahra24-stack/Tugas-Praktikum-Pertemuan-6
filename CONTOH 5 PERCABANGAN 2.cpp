#include <iostream>
#include <string>
using namespace std;

int main(){
	double marks;
	
	//take input from users
	cout<<"enter your marks:";
	cin>>marks;
	
	//ternary operatot checks if
	//marks is greater than 40
	string result = (marks>=40) ?"passed" : "failed";
	
	cout<<"you"<<result<<"the exam.";
	
	return 0;
}
