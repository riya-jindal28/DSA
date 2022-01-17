// 1  
// 1 1 
// 1 2 1 
// 1 3 3 1 
// 1 4 6 4 1 



#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;  
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j==1 || j==i){
                cout<<"1";
            }
            else{
                
            }
        }
        cout<<endl;
    }
    return 0;
}
