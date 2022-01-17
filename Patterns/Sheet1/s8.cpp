//     1    
//    2 2
//   3   3
//  4     4
// 5       5
//  4     4
//   3   3
//    2 2
//     1


#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        cout<<i;
        for(int k=1;k<=(i-1)*2 - 1;k++){
            cout<<" ";
        }
        if(i!=1){
            cout<<i;
        }
    cout<<endl;
    }
    for(int i=n-1;i>0;i--){
        for(int j=n;j>i;j--){
            cout<<" ";
        }
        cout<<i;
        for(int k=1;k<=(i-1)*2-1;k++){
            cout<<" ";
        }
        if(i!=1){
            cout<<i;
        }
    cout<<endl;
    }
    return 0;
}