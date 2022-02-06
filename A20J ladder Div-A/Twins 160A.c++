#include<bits/stdc++.h>
using namespace std;
 
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++) cin>>a[i];
sort(a,a+n,greater<int>());
int s=0;
for(int i=0;i<n;i++) s=s+a[i];
int z=0,w=0;
 
for(int i=0;i<n;i++){
    z=z+a[i];
    w++;
    if(z>(s-z)){
        break;
    }
 
}
cout<<w<<endl;
return 0;
}
