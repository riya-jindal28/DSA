#include<iostream>
#include<math.h>
using namespace std;
void pattern(int n){
if(n==0){
    return;
}
pattern(n-1);
cout<<pow(2,n-1)<<" + ";
}
int main(){
    int n;
    cin>>n;
    pattern(n);
    return 0;
}