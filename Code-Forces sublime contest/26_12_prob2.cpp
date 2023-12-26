#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	// for(int i=0;i<n;i++) cout<<arr[i]<<" ";
	int cnt=0;
	int minNumb=arr[0];
	int maxNumb=arr[0];
	for(int i=1;i<n;i++){
		if(arr[i]>maxNumb){
			maxNumb=arr[i];
			cnt++;
		}
		else if(arr[i]<minNumb){
			minNumb=arr[i];
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}