#include <iostream>

using namespace std;
int main()
{
	int alice[3],bob[3];
	int alicescore=0,bobscore=0,nobodyscore=0;
	cin>>alice[0]>>alice[1]>>alice[2];
	cin>>bob[0]>>bob[1]>>bob[2];
	for (int i = 0; i < 3; i++)
	{
		if (alice[i] > bob[i])
			alicescore += 1;
		else if (alice[i] < bob[i])
			bobscore += 1;
		else
			nobodyscore += 1;
	}
	cout << alicescore << " " << bobscore << endl;
	return 0;
}