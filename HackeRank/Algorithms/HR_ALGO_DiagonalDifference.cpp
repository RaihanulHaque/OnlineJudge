#include <iostream>
using namespace std;
int diagonalDifference(int n, int array[100][100])
{
	int sum, firstDsum = 0, secondDsum = 0;
	for (int i = 0; i < n; i++)
	{
		firstDsum += array[i][i];
	}
	for (int i = 0; i < n; i++)
	{
		secondDsum += array[i][n - i - 1];
	}
	sum = firstDsum - secondDsum;
	if (sum < 0)
		return (-1 * (sum));
	else
		return sum;
}

int main()
{
	int n, array[100][100];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &array[i][j]);
		}
	}
	cout << diagonalDifference(n, array) << endl;
	return 0;
}