#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int n, divizori;
	int numere[20];
	cin >> n;
	while(n > 0)
	{
	for(int k = 0; k <= 19; k++)
	{
		divizori = 2;
		int c = n%10;
		for(int i = 2; i <= sqrt(c); i++)
		{
			if(c % i == 0)
			{
				divizori++;
			}
		}
		if(divizori == 2 && (n % 10) % 2 != 0 && (n % 10) > 2)
		{
			int verificare = 0;
			for(int l = 0; l <= 19; l++)
			{
				if(numere[l] == c)
				{
					verificare++;
				}
			}
			if(verificare == 0)
			{
				cout << n % 10 << " ";
				numere[k] = c;
			}
		}
		else if(n % 10 == 2)
		{
			int verificare = 0;
			for(int l = 0; l <= 19; l++)
			{
				if(numere[l] == c)
				{
					verificare++;
				}
			}
			if(verificare == 0)
			{
				cout << n % 10 << " ";
				numere[k] = c;
			}
		}
		n = n / 10;
	}
	}
}
