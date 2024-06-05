#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"Enter Number:";
cin>>n;
int i=1;
while(i<=n){
int space=n+1-i;
while(space){
cout<<" ";
space=space-1;

}
int j=1;
while(j<=n+1-i){
cout<<"*";
j=j+1;



}
cout<<endl;
i=i+1;

}



    return 0;
}