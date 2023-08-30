#include<iostream>
using namespace std;

int  main(){
    int T;
    cin>>T;
    
    while(T--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        int count = 0;
        for(int i=0;i<n;i++){
        if(s[i] =='a' || s[i]=='e' || s[i]=='i' || s[i]=='o'|| s[i]=='u'){
                count = 0;
            }
            else{
                count++;
                if(count>=4){
                    break;
                }
            }
        }
        if(count>=4){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    
    return 0;
}
