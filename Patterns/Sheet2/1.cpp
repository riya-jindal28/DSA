// 1     7
// 12   67
// 123 567
// 1234567
// 123 567
// 12   67
// 1     7

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int p=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=p || j>=n-p+1){
                cout<<j;
            }
            else{
                cout<<" ";
            }
        }
        if(i<=n/2){
            p++;
        }
        else{
            p--;
        }
        cout<<endl;
    }

}

// int main(){
//     int n;
//     cin>>n;
//     int h=n/2+1;
//     for(int i=1;i<=n/2+1;i++){
//          if(i==n/2+1){
//             for(int i=1;i<=n;i++){
//                 cout<<i;
//             }
//             cout<<endl;
//         }
//         else{
//         for(int j=1;j<=i;j++){
//             cout<<j;
//         }
//         for(int k=i+1;k<=n-i;k++){
//             cout<<" ";
//         }
//         for(int l=n-i+1;l<=n;l++){
//             cout<<l;
//         }
//         cout<<endl;  
//     }
//     }
//     int m=1;
//     for(int i=h+1;i<=n;i++){
//         for(int j=1;j<=n-i+1;j++){
//             cout<<j;
//         }
//         for(int k=1;k<=m;k++){
//             cout<<" ";
//         }
//         m+=2;
//         for(int l=i;l<=n;l++){
//             cout<<l;
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }
