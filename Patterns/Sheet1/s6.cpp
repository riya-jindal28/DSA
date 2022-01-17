//     1
//    321
//   54321
//  7654321
// 987654321

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            cout<<" ";
        }
        for(int c=i*2-1;c>0;c--){
        cout<<c;
        }
        cout<<endl;
    }
    return 0;
}
