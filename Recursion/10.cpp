#include<iostream>
#include<math.h>
using namespace std;
void pattern(int n){
if(n==0){
    return;
}
pattern(n-1);
cout<<n<<"^"<<n<<" + ";
}
int main(){
    int n;
    cin>>n;
    pattern(n);
    return 0;
}