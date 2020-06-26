#include<iostream>
#include<vector>
using namespace std;
long LargeSum(vector<long> &arr){
	long sum=0;
	for(int i=0;i<arr.size();i++)
		sum+=arr[i];
	return sum;
}
int main(){
	int n,temp;
	vector<long> array;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>temp;
		array.push_back(temp);
	}
	cout<<LargeSum(array);
	return 0;
}