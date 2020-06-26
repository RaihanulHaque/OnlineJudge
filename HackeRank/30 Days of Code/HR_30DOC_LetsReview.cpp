#include <iostream>
using namespace std;
int main()
{
	string name;
	int T;
	cin >> T;
	while (T--)
	{
		cin >> name;
		for (int i = 0; i < name.length(); i += 2)
		{
			cout << name[i];
		}
		cout << " ";
		for (int i = 1; i < name.length(); i += 2)
		{
			cout << name[i];
		}
		cout<<"\n";
	}
	return 0;
}