// E       E 
//  D     D
//   C   C
//    B B
//     A  

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    char ch='E';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n*2-1;j++){
            if(j==i || j==n+n-i){
                cout<<ch;
            }
            else{
                cout<<" ";
            }
        }
        ch--;
        cout<<endl;
    }
    return 0;
}

