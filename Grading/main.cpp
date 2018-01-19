#include <iostream>
#include <queue>
using namespace std;

int main()
{
	double score;
	cout << "Score(0-100) : ";
	cin >> score;
	cout << "Your score was : " << score << endl;
	cout << "Your grade is ";
	if(score>=90.0){
		cout << "A.\n";
				if(score==100.0)
		cout << "You got a Perfect Score.\nWOW. Keep that working.\n";
	}else if(score>=80.0)
		cout << "B.\n";
	else if(score>=70.0)
		cout << "C.\n";
	else if(score>=50.0)
			cout << "D.\n";
	else
				cout << "F.\n";
}



