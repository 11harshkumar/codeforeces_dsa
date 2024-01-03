#include<iostream>
using namespace std;

int main(){

	int t;
	cin>>t;
	while(t--){
		char arr[3][3];
		for (int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				cin>>arr[i][j];
			}
		}
		int a=0;
		int b=0;
		int c=0;
		for(int i=0;i<3 ;i++){
			for(int j=0;j<3;j++){
				if(arr[i][j]=='A') a++;
				else if(arr[i][j]=='B') b++;
				else if(arr[i][j]=='C') c++;
			}
		}
		if(a==b) cout<<'C'<<endl;
		else if(a==c) cout<<'B'<<endl;
		else cout<<'A'<<endl;
	}

}