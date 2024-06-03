#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"Enter Number:";
cin>>n;
int i=1;
while(i<=n){
int space=n-i;
while(space){
cout<<" ";
  // why we can use space -- please explane it deeply and explane every line in bangla
space=space-1;

}
int j=1;
while(j<=i){
cout<<"*";
j=j+1;

}
cout<<endl;
i=i+1;

}

    return 0;
}