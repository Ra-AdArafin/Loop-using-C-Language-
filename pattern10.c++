#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"Enter Numbers:";
cin>>n;
int i=1;
while(i<=n){
int space=i-1;
while(space>0){
cout<<" ";
space=space-1;


}
int j=1;
while(j<=(n+1-i)){
cout<<(i+j-1)<<" ";
j=j+1;

}
cout<<endl;
i=i+1;

}


    return 0;
}