#include<iostream>
using namespace std;
void toh(int n, char a, char b, char c){
    if(n==0){
        return;
    }
    toh(n-1,a,c,b);
    cout<<"Move Disk "<<n<<" from "<<a<<" to "<<b<<endl;
    toh(n-1,c,b,a);
}
int main(){
    int n;
    cin>>n;
    toh(n,'a','b','c');
}