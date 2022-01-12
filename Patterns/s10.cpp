// 1   1
//  2 2
//   3
//  4 4
// 5   5

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            cout<<" ";
        }
        cout<<i;
        for(int j=1;j<=((n-i)*2-1);j++){
            cout<<" ";
        }
        if(i != n)
          cout<<i;
        cout<<endl;
    }

    for(int i=n-1;i>0;i--){
        for(int j=1;j<i;j++){
           cout<<" ";
        }
        cout<<i;

        for(int j=1;j<=((n - i)*2 - 1);j++){
           cout<<" ";
        }
        cout<<i;
        cout<<endl;
    }
    return 0;
}
