#include<iostream>
using namespace std;
void selection(int n,int k, int ar[]){
    int midIdx=0;
    for(int i=0;i<k-1;i++){
        midIdx = i;
        for(int j=i+1;j<n;j++){
            if(ar[j]<ar[midIdx]){
                midIdx=j;
            }
        }
        swap(ar[i],ar[midIdx]);
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
    selection(n,k,ar);
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
}