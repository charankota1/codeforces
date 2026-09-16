#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    string s2;
    string res;
    cin>>s1;
    cin>>s2;
    for(int i=0;i<s1.size();i++){
        if(s1[i]!=s2[i]) res.push_back('1');
        else res.push_back('0');
    }
    cout<<res;
}