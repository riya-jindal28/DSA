#include<iostream>
using namespace std;
void orderNatural(int n){
    if(n==0){
        return;
    }
    orderNatural(n-1);
    cout<<n<<" ";
}
int main(){
    int n;
    cin>>n;
    orderNatural(n);
    return 0;
}