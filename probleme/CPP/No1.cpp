#include <iostream>

using namespace std;

int main()
{

	int n;
	cin >> n;
    for(int i = 0; i < n; i++)
	{
	    int j;
		for(j = 0; j <= i; j++)
		{
			cout << "*";
		}
        for(int k = j; k < n; k++)
        {
            cout << " ";
        }
        for(int k = j; k < n; k++)
        {
            cout << " ";
        }
        for(int k = 0; k < n; k++)
        {
            cout << " ";
        }
        for(j = 0; j <= i; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << " ";
        }
        for(int j = 0; j < n; j++)
        {
            cout << "*";
        }
        for(int j = 0; j < n; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    for(int i = 1; i <= n; i++)
	{
	    int j;
	    j = i;
		for(int j = i; j <= n; j++)
		{
			cout << "*";
		}
        for(int k = 0; k < i-1; k++)
        {
            cout << " ";
        }
        for(int k = 0; k < i-1; k++)
        {
            cout << " ";
        }
        for(int k = 0; k < n; k++)
        {
            cout << " ";
        }
        for(int j = i; j <= n; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
}

/*void ascendent()
{
	for(int i = n; i > 0; i--)
	{
		for(int j = i; j > 0; j--)
		{
			cout << star << endl;
		}
		cout << " " << endl;
	}
}
void descendent()
{
	for(int i = 0; i < n; i++)
	{
		for(int j = i; j < n; j++)
		{
			cout << star << endl;
		}
		cout << " " << endl;
	}
}*/


