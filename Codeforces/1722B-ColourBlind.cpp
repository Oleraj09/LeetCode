#include<bits/stdc++.h>
using namespace std;
int main() {
    int t,n,sum=0;
    string s1,s2;
    cin>>t;
    while(t--) {
        int cnt=0,cnts=0;
        cin>>n;
        cin>>s1;
        cin>>s2;
        for(int i=0;i<n;i++){
            if(s1[i]==s2[i]){
                cnt++;
            }
            else{
                if((s1[i]=='G' && s2[i]=='B')||(s1[i]=='B' && s2[i]=='G')){
                    cnts++;
                }
            }
        }
        sum=cnt+cnts;
        if(sum==n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

}
