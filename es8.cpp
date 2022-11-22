#include <iostream>
using namespace std;

int main()
{
	int n1;
	int	n2;
	int ris=0;
	
	cout << "inserire il primo fattore: "<<endl;
	cin >> n1;

	cout << "inserire il secondo fattore: "<<endl;
	cin >> n2;
	
	while (n2>0)
	{
		n2--;
		ris=n1+ris;
	}
	
	cout<<ris;
}
