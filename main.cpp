#include <iostream>
using namespace std;

int main() {
	int total=0;
	int input;
	int firstnum, secondnum;
	char ch='y';
	
	cout << "Pick 1-4 numbers below you want to operate\n";
	
	do{
	cout << "\n1 = addition\n";
	cout << "2 = subtraction\n";
	cout << "3 = multiplication\n";
	cout << "4 = division\n\n";
	
	cin >> input;
	
	if(input==1){
		cout << "ADDITION\n\n";
		cout << "Enter first number: ";
		cin >> firstnum;
		cout << "Enter second number: ";
		cin >> secondnum;
		
		total=firstnum+secondnum;
		
		cout << "\nThe sum of " << firstnum << " & " << secondnum << " is " << total;
	}
	else if(input==2){
		cout << "SUBTRACTION\n\n";
		cout << "Enter first number: ";
		cin >> firstnum;
		cout << "Enter second number: ";
		cin >> secondnum;
		
		total=firstnum-secondnum;
		
		cout << "\nThe difference of " << firstnum << " & " << secondnum << " is " << total;
	}
	else if(input==3){
		cout << "MULTIPLICATION\n\n";
		cout << "Enter first number: ";
		cin >> firstnum;
		cout << "Enter second number: ";
		cin >> secondnum;
		
		total=firstnum*secondnum;
		
		cout << "\nThe product of " << firstnum << " & " << secondnum << " is " << total;
	}
	else if (input==4){
		cout << "DIVISION\n\n";
		cout << "Enter first number: ";
		cin >> firstnum;
		cout << "Enter second number: ";
		cin >> secondnum;
		
		total=firstnum/secondnum;
		
		cout << "\nThe quotient of " << firstnum << " & " << secondnum << " is " << total;
	}
	else{
		cout << "THAT'S NOT IN THE OPTION!";
	}
	cout << "\n\nPROCESS ANOTHER? (y/n): ";
	cin >> ch;
	}
	while(ch=='y');
	cout << "\n\nTHANK YOU FOR USING MY PROGRAM!";
	return 0;
}
