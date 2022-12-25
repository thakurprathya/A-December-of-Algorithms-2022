//December 2 - The Secret Language
#include<iostream>
using namespace std;

string translate(string s){
    string str="";
    str+= s[s.length()-4];
    str+= s[s.length()-3];
    for(int i=0; i<s.length()-4; i++){ str+= s[i]; }
    return str;
}

int main(){
    string s; cin>>s;
    cout<<translate(s)<<endl;
    return 0;
}