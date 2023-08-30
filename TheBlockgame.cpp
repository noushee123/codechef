#include<iostream>
using namespace std;

int  main(){
    int T;
    cin>>T;
    
    while(T--)
    {
        int n;
        cin>>n;
        
        int rev=0,rem=0;
        int num = n;
        while(num>0){
              rem = num%10;
              rev = rev*10+rem;
              num = num/10;
        }
        if(rev == n){
            cout<<"wins"<<endl;
        }
        else{
            cout<<"loses"<<endl;
        }
        

    }
    
    return 0;
}
