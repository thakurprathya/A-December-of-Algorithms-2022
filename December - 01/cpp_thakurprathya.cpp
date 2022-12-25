//December 1 - William Butcher's Mission
// 1 change from original input size of every word is entered.
#include<iostream>
#include<math.h>
#include<stack>
#include<map>
#include<vector>
using namespace std;

char hexaToDec(string s){
    map<char, char> mp;
    mp['A']=':', mp['B']=';', mp['C']='<', mp['D']='=', mp['E']='>', mp['F']='?';
    int decNum=0;
    stack<char> stk;
    for(int i=0; i<s.length(); i++){
        if(mp.find(s[i])!=mp.end()){ s[i]= mp[s[i]]; }
        stk.push(s[i]);
    }
    int j=0;
    while(!stk.empty()){
        decNum+= (int)(stk.top()-'0')*pow(16,j);
        j++;
        stk.pop();
    }
    return (char)decNum;
}

int main(){
    int n; cin>>n;
    vector<string> vec;
    while(n--){
        int a; cin>>a;
        string arr[a], res="";
        for(int i=0; i<a; i++){ cin>>arr[i]; res+= hexaToDec(arr[i]); }
        vec.push_back(res);
    }
    for(auto i:vec){ cout<<i<<endl; }
    return 0;
}