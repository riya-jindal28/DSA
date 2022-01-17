// 5
// 54
// 543
// 5432
// 54321
// 543210
// 54321
// 5432
// 543
// 54
// 5

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=n-1;j>n-i-1;j--){
            cout<<j;
        }
        cout<<endl;
    }
    for(int i=n-1;i>0;i--){
    for(int c=n-1;c>=n-i;c--)
        cout<<c;
      cout<<endl;
    }
    return 0;
}
