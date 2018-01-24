#include <iostream>
#include <string>

using namespace std;


void concate(string &name1,string name2);
int main();
string vowel(string name);
string reverse(string name);


void exit(){
	int n;
	cout << "1-Return to main menu.\n"
			"2-Exit.\n";
	cin >> n;
	if(n==2){
		cout << "Bye ma friend.\n";
		return;
	}
	cin.ignore();
	main();
}

string reverse(string name){
	string aux;
	for(unsigned int i=0;i<name.size();i++)
	{
		aux.push_back(name[name.size()-i-1]);
	}
	return aux;
}

void concate(string &name1,string name2){
	name1+=' ' + name2;
}

string vowel(string name) {
	for (unsigned int i = 0; i < name.size(); i++) {
		if ((name[i] == 'a') || (name[i] == 'e') || (name[i] == 'i') || (name[i] ==
				'o') || (name[i] == 'u'))
			name[i] = 'z';
		if ((name[i] == 'A') || (name[i] == 'E') || (name[i] == 'I') || (name[i] ==
				'O') || (name[i] == 'U'))
			name[i] = 'z';
	}
	return name;
}


int main(){
	string name1,name2;
	cout << "Input two of your names.\n";
	getline(cin,name1);
	cin.clear();
	getline(cin,name2);
	cin.clear();
	concate(name1,name2);
	cout << "Hello " << name1 << endl;
	cout << "Here is your name with the vowel's in Z's.\n" <<  vowel(name1);
	cout << "\nHere is your name in reverse.\n";
	cout << reverse(name1) << endl << endl;
	exit();
}
