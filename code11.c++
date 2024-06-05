#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"Enter Numbers:";
cin>>n;
int i=1;
while(i<=n){
int space=n-i;
while(space>0){
cout<<" ";
space=space-1;



}
int j=1;

while(j<=i){
cout<<j<<" ";
j=j+1;

}
int k=i-1;
while(k>=1){
cout<<k<<" ";
k=k-1;

}
cout<<endl;
i=i+1;

}

    return 0;
}