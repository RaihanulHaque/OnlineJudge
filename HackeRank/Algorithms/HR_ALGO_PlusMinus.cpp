#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int n, array[100], countp = 0, countn = 0, countz = 0;
	float fracp, fracn, fracz;
	cin>>n;
	for (int i = 0; i < n; i++)
	{
		cin>>array[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (array[i] > 0){
			countp += 1;
		}
		else if (array[i] < 0){
			countn += 1;
		}
		else{
			countz += 1;
		}
	}
	fracp = countp / n;
	fracn = countn / n;
	fracz = countz / n;
	cout<<countp<<endl;
	cout << fixed << setprecision(6) << fracp << endl;
	cout << fixed << setprecision(6) << fracn << endl;
	cout << fixed << setprecision(6) << fracz << endl;
	return 0;
}