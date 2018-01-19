#include <iostream>

using namespace std;

int main()
{
	int persons[10];
	int ordered[10]={-1};
	int n,aux,aux1;
	cout << "Enter the number of pancakes each person eats.\n";
	for(unsigned int i=0;i<10;i++)
	{
		cout << "Person " << i+1 << " : ";
		cin >> n;
		if(n<0){
			cout << "Error number is lower than 0.\n";
			return 0;
		}
		persons[i]=n;
		for(unsigned int w=0;w<10;w++)
		{
			if(ordered[w]<n)
			{
				aux=ordered[w];
				ordered[w]=n;
				for(unsigned int r=w+1;r<9;r++){
					aux1=ordered[r];
					ordered[r]=aux;
					aux=aux1;
				}
				break;
			}
		}
	}
	cout << "Nice now here is the persons you inserted , by order.\n";
	for(unsigned int i=0;i<10;i++)
	{
		cout << "Person ";
		for(unsigned int w=0;w<10;w++)
		{
			if(ordered[i]==persons[w])
			{
				cout << w+1 << ": ate " << ordered[i] << " pancakes.\n";
				persons[w]=-1;
				break;
			}
		}
	}
}



