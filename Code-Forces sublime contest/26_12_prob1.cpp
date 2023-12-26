#include<iostream>
using namespace std;

void swap(string &s , int i , int j){
	char x=s[i];
	s[i]=s[j];
	s[j]=x;
}

int main(){
	int n,t;
	cin>>n>>t;
	string s ;
	cin>>s;
	// cout<<n<<endl<<t<<endl<<s;
	int i=0,j=1;
	for(int i=0;i<t;i++){
		for(int j=0;j<n-1;j++){
			if(s[j]=='B'&&s[j+1]=='G'){
				swap(s,j,j+1);
				++j;
			}	
		}
	}
	
	cout<<s;
	return 0;
}