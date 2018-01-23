#include <iostream>

using namespace std;
void say_hello();
int multiply(int n1,int n2);
void menu();
void exit();
void half(int n);


void exit(){
	int n;
	cout << "1-Return to main menu.\n"
			"2-Exit.\n";
	cin >> n;
	if(n==2){
		cout << "Bye ma friend.\n";
		return;
	}
	menu();
}

void half(int n){
	cout << n << endl;
	n/=2;
	if(n>0)
		half(n);
}

void menu() {
	int n;
	cout << "Welcome to this basic program.\n"
			"Choose your option.\n"
			"1-Hello.\n"
			"2-Multiplication.\n"
			"3-Half.\nYour option : ";
	cin >> n;
	switch (n) {
	case 1:
		say_hello();
		break;
	case 2:
		int n1, n2;
		cout << "Enter the numbers you want to multiply: ";
		cin >> n1 >> n2;
		cout << multiply(n1, n2) << endl;
		break;
	case 3:int opt;
	cout << "Enter the number you want to use : ";
	cin >> opt;
	half(opt);
	break;
	default:
		cout << "Not a valid option try again.\n";
		return;
	}
	exit();
}


int multiply(int n1,int n2){
	return n1*n2;
}

void say_hello(){
	int n;
	cout << "How many times do you want me to say it? ";
	cin >> n;
	while(n>0)
	{
		cout << "Hello!\n";
		n--;
	}
}


int main(){
	menu();
}

