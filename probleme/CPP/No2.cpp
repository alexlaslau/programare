#include <iostream>
#include <math.h>

using namespace std;

	int sumalungime = 0;
	int sumalatime = 0;
	int sumainaltime = 0;

int adunarecutii(int lungime, int latime, int inaltime)
{
	sumalungime = sumalungime + lungime;
	sumalatime = sumalatime + latime;
	sumainaltime = sumainaltime + inaltime;
}

int main()
{
	int cutii, lungime, latime, inaltime;
	cin >> cutii;
	for(int i = 1; i <= cutii; i++)
	{
		cin >> lungime >> latime >> inaltime;
		adunarecutii(lungime, latime, inaltime);
	}
	cout << "Suma lungimilor este: " << sumalungime << endl;
	cout << "Suma latimilor este: " << sumalatime << endl;
	cout << "Suma inaltimilor este: " << sumainaltime;
}
