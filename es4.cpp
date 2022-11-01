#include <iostream>

using namespace std;

int main()
{
	int a,b,c;
	cout<<"inserisci i tre lati";
	cin>>a>>b>>c;
	if (a+b>c && a+c>b && b+c>a)
		cout<<"Questi valori sono rappresentabili con un triangolo";
	else
		cout<<"Questi valori NON sono rappresentabili con un triangolo";
}
