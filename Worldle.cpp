#include<iostream>
using namespace std;

int  main(){
    int T;
    cin>>T;
    
    while(T--)
    {
        int N;
        cin>>N;
    
        if(N<4){
            cout<<"YES";
        }         
        else if(N%4==2){
            cout<<"YES";
        }
        else if(N%4==0){
            cout<<"NO";
        }
        cout<<endl;
    }
    
    
    return 0;
}
