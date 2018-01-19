#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>

using namespace std;
void menu();
void game1();
void game2();
void exitGame();
int main();

void game2()
{
	int guess=100;
	int aux=100;
	int asd;
	unsigned int i=1;
	string tip;
	cout << "Think in a number from 1 to 100.\n"
			"After my guess tell me if it is Too High , Too Low or Correct.\n";
	cin >> asd;
	cin.ignore();
	while(1)
	{
		if(i>8)
		{
			cout << "You are lying to me , for sure.\n";
			break;
		}
		if(aux==3)
			aux=2;
		else if(aux!=1)
			aux/=2;
		cout << "My guess is : " << guess << endl;
		getline(cin,tip);
		if(tip=="Correct")
		{
			cout << "Yeah, I got it right in " << i << " guesses.\n";
			break;
		}
		if(tip=="Too High")
		{
			guess-=aux;
		}
		if(tip=="Too Low")
		{
			guess+=aux;
		}
		i++;
	}

}




void exitGame()
{
	int n;
	cout << "\n1-Exit Game.\n2-Return to main menu.\n";
	cin >> n;
	switch(n)
	{
	case 1:
		cout << "Bye , don't forget to play again.";
		return;
	case 2:
		cout << "\n\n\n\n\n\n\n";
		main();
		return;
	default:
		cout << "That's not a valid option.\nTry again.";
		return;
	}
}



void game1()
{
	int number,guess;
	unsigned int i=1;
	string low,high;
	low="Too Low\n";
	high="Too High\n";
	srand(time(NULL));
	number=rand()%100+1;
	cout << "Guess my number from 1 to 100.\nInsert 0 to exit.\n";
	cout << number;
	while(1)
	{
	cout << "What is your guess : ";
	cin >> guess;
		if((guess<0)||(guess>100))
		{
		cout << "Use numbers from 1 to 100(or 0 to give up)\n;";
		continue;
		}
		if(guess==0)
		{
			cout << "You are a weak Guy/Girl, good luck next time.\n";
			break;
		}
		if(guess<number)
		{
			cout << low << "Don't forget a number greater than : ";
			cout << guess << " or 0 to give up.\n";
			i++;
			continue;
		}
		if(guess>number)
		{
			cout << high << "Don't forget a number lower than : ";
			cout << guess << " or 0 to give up.\n";
			i++;
			continue;
		}
		if(guess==number)
		{
			cout << "Nice you got it right.\nThe number was ";
			cout << number << " and you took " << i << " times to get it right.\n";
			break;
		}
	}
}

void menu()
{
	int n;
	cout << "0-Exit.\n1-User guess.\n2-Computer Guess\nWhat you wanna play : ";
	cin >> n;
	switch(n)
	{
	case 0:
		cout << "Bye.";
		return;
	case 1:
		game1();
		break;
	case 2:
		game2();
		break;
	default:
		cout << "That's not a valid option.\n";
	}
	exitGame();
}
int main()
{
	cout << "Tic Tac Toe\nThe game consists in guessing a number.\n";
	menu();
}


