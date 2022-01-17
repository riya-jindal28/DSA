#include<iostream>
using namespace std;
void bubble(int n,int k, int ar[]){
    for(int i=0;i<k-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(ar[j]>ar[j+1]){
                swap(ar[j],ar[j+1]);
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    int ar[n];
    int k;
    cin>>k;
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    bubble(n,k, ar);
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
}