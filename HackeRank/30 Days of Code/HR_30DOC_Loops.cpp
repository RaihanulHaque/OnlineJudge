#include<iostream>
using namespace std;
int main(){
	int n,res;
	cin>>n;
	for(int i=1;i<=10;i++){
		res = n*i;
		cout<<n<<" x "<<i<<" = "<<res<<endl;
	}
	return 0;
}