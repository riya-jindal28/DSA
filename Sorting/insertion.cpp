#include<iostream>
using namespace std;
void insertion(int n, int ar[]){
    int j=0;
    for(int i=0;i<n;i++){
        int temp =ar[i];
        j=i-1;
        while(temp<ar[j]&&j>=0){
            ar[j+1]=ar[j];
            j--;
        }
        ar[j+1]=temp;
    }
}
int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    insertion(n,ar);
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
}