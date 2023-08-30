#include<iostream>
using namespace std;

int  main(){
    int T;
    cin>>T;
    
    while(T--)
    {
        int n,m;
        cin>>n>>m;
      
        int people = (n*5+m*7);
        
        cout<<people<<endl;
    }
    
    return 0;
}
