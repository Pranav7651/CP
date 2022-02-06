#include<bits/stdc++.h>
using namespace std;
 
int main(){
 string s;
 cin>>s;
 string t;
 int n=s.length();
for(int i=0;i<n;i++){
    if(!(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='y'||s[i]=='Y')){
       char c='.';
       char z=tolower(s[i]);
       t=t+c+z;
 
       }
}
for(int i=0;i<t.length();i++){
    cout<<t[i];
}
return 0;
}
 
