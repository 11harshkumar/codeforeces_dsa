#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++) cin>>arr[i];
		long long sum=0;
		for(int i=0;i<n;i++) sum+=arr[i];

		long long sqr = sqrt(sum);
		long long chk=sqr*sqr;
		if(chk==sum) cout << "YES"<<endl;
		else cout<<"NO"<<endl;
	}
}