#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"Enter Numbers:";
cin>>n;
int i=1;
while(i<=n){
int rev=i+1-1;
int j=1;
while(rev>=1){

cout<<rev<<" ";
rev=rev-1;


}
cout<<endl;
i=i+1;

}



    return 0;
}