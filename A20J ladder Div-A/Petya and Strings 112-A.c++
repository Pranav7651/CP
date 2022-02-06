#include<bits/stdc++.h>
using namespace std;
 
int main(){
 string s;
 cin>>s;
 string t;
 cin>>t;
 int n1=s.length();
 int n2=t.size();
   transform(s.begin(), s.end(), s.begin(), ::tolower);
   transform(t.begin(), t.end(), t.begin(), ::tolower);
 
if(s==t){
    cout<<"0";
}
else if(s>t) cout<<"1"<<endl;
else if(s<t) cout<<"-1"<<endl;
 
return 0;
}
