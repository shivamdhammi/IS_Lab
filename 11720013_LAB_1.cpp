#include<bits/stdc++.h>
using namespace std;

int main(){
	cout<<"Enter the plain text : ";
	string s;
	getline(cin,s);
	
	int key = 40;
	
	for(int i=0;i<s.length();i++){
		s[i] = (s[i] - i - key +128)%128;
	}
	cout<<"Encrypted text : ";
	cout<<s;
	return 0;
}
