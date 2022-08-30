#include<bits/stdc++.h>
using namespace std;
int main() {
    int t,n;
    string s;
    cin>>t;
    while(t--) {
        int cnts=0,cnti=0,cntm=0,cntu=0,cntr=0;
        cin>>n;
        cin>>s;
        if(s.length()==5) {
            for(int i=0; i<n; i++) {
                if(s[i]=='T') {
                    cnts++;
                }
                if(s[i]=='i') {
                    cnti++;
                }
                if(s[i]=='m') {
                    cntm++;
                }
                if(s[i]=='u') {
                    cntu++;
                }
                if(s[i]=='r') {
                    cntr++;
                }
            }

            if(cnts==1 && cnti==1 && cntm==1 && cntu==1 && cntr==1) {
                cout<<"YES"<<endl;
            } else {
                cout<<"NO"<<endl;
            }
        } else {
            cout<<"NO"<<endl;
        }
    }
}
