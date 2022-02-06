#include<bits/stdc++.h>
using namespace std;
 
int main(){
 string s;
 cin>>s;
 string t;
 int n=s.length();
 
 for(int i=0;i<n;i++){
    if(isdigit(s[i])) t=t+s[i];
 }
 
 sort(t.begin(),t.end());
 int j=0;
 for(int i=0;i<n;i++){
    if(isdigit(s[i])){
        s[i]=t[j];
        j++;
    }
 }
 
for(int i=0;i<n;i++) cout<<s[i];
 
return 0;
}
