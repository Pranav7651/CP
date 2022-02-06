#include<bits/stdc++.h>
using namespace std;
 
int main(){
int t;
cin>>t;
while(t--){
 string s;
 cin>>s;
 string t;
 int n=s.length();
 
 if(s.length()>10){
        t=t+s[0];
        int x=n-2;
        t=t+to_string(x)+s[n-1];
        for(int i=0;i<t.length();i++) cout<<t[i];
 }
 
 else{
        for(int i=0;i<s.length();i++) cout<<s[i];
}
cout<<endl;
}
return 0;
}
