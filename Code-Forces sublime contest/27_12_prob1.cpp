#include<iostream>
using namespace std;

//A. Least Product

int main(){

	// cout<<"Hello World";
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		int nC=0;
		int zbool= false;
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		for(int i=0;i<n;i++){
			if(arr[i]<0) nC++;
			if(arr[i]==0) zbool=true;
		}
		if(nC%2!=0) cout<<0<<endl;
		else if(zbool) cout<<0<<endl;
		else{
			cout<<1<<endl;
			cout<<1<<" "<<0<<endl;
		}
	}
	return 0;
}