#include<iostream>
using namespace std;

int main(){

int t,n;
cin>>t;

while(t--){
    cin>>n;
    cout<<n<<" ";
    while(n!=1){
    if(n%2==0)
    n=n/2;
    else
    n=n*3+1;
    
    cout<<n<<" ";
    }
}

return 0;
}



