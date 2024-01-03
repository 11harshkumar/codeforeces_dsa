// #include<iostream>
// #include<string>
#include <bits/stdc++.h>
using namespace std;

int main(){
	int t ; 
	cin >> t ; 
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		
		string res="";
		while(!s.empty()){
			int cnt;
			if(s.back()=='b'|| s.back()=='c'||s.back()=='d') cnt =3;
			else cnt =2;
			while(cnt--){
				res+=s.back();
				s.pop_back();
			}
			res+=".";
		}
		res.pop_back();
		reverse(res.begin(),res.end());
		cout<<res<<endl;
	}
}