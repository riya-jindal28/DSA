#include<iostream>
using namespace std;
void even(int n){
    if(n==0){
        cout<<n<<" ";
        return;
    }
    even(n-1);
    if(n%2==0){
        cout<<n<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    even(n);
    return 0;
}