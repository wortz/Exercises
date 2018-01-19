#include <iostream>

using namespace std;


int main()
{
bool failed=false;
int n,i=0;
cout << "Rules of the game.\n"
		"Never enter a number that we told you to not.\n"
		"Remember all the numbers that we are telling you.\n";
while(!failed)
{
	cout << "Do not enter the number " << i
			<< ".\nYour number : ";
	cin >> n;
	if(n<=i)
		failed=true;
	if(i == 20)
		break;
	i++;
}
if(failed)
	cout << "You lost!\n";
else cout << "You win!\n";
}
