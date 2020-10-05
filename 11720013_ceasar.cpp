#include <iostream> 
using namespace std; 
  
string encrypt(string &text, int s){ 
  
    for (int i=0;i<text.length();i++) { 
        text[i] = (text[i]+s+128)%128;
    } 
  
    return text; 
}
string dencrypt(string &text, int s){ 
  
    for (int i=0;i<text.length();i++) { 
        text[i] = (text[i]-s+128)%128;
    } 
  
    return text; 
}  
  
int main() 
{ 
	cout<<"Enter the plain text : ";
	string text;
	getline(cin,text);
    int shift; 
    cout<<"Enter the key : ";
    cin>>shift;
    cout << "\nEncrypted text : " << encrypt(text, shift); 
    cout << "\nDencrypted text : " << dencrypt(text, shift); 
    return 0; 
} 
