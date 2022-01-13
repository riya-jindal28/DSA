#include<iostream>
using namespace std;
void revNatural(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    revNatural(n-1);
}
int main(){
    int n;
    cin>>n;
    revNatural(n);
    return 0;
}