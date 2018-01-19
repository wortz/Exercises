#include <iostream>

using namespace std;

int main()
{
	int choice;
	cout << "HI.\nThis is a Automatic Machine.\nHere is the products available.\n";
	cout << "1-Coca Cola.\n2-Sprite.\n3-Water.\n4-Ice Tea.\n5-Monster.\n";
	cout << "Enter the number of your choice : ";
	cin >> choice;
	switch(choice){
	case 1:
		cout << "Your choice was Coca Cola.\n";
		break;
	case 2:
			cout << "Your choice was Sprite.\n";
			break;
	case 3:
				cout << "Your choice was Water.\n";
				break;
	case 4:
				cout << "Your choice was Ice Tea.\n";
				break;
	case 5:
				cout << "Your choice was Monster.\n";
				break;
	default:
		cout << "Error. choice was not valid, here is your money back.\n";
		break;
	}
	cout << "Thanks for your visiting.\nPlease , come again.\n";
}




