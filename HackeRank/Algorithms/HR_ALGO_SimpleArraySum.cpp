#include<iostream>
#include<vector>
using namespace std;
int SimpleArraySum(vector<int> &array){
	int sum=0;
	for(int i=0;i<array.size();i++){
		sum+=array[i];
	}
	return sum;
}
int main(){
	vector<int> arr;
	int n,temp;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>temp;
		arr.push_back(temp);
	}
	cout<<SimpleArraySum(arr)<<endl;
	return 0;
}