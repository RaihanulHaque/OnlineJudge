#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int n;
	string num[10000];
	string name[10000],queries[10000];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>name[i]>>num[i];
	}
	for(int i =0;i<n;i++){
		cin>>queries[i];
	}
	for(int i=0;i<n;i++){
		if(name[i]==queries[i])
			cout<<name[i]<<"="<<num[i]<<endl;
		else
			cout<<"Not found"<<endl;
	}
	return 0;
}