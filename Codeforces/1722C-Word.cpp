#include<bits/stdc++.h>
using namespace std;
using vii = vector<int>;
int main(){
    int t;
    cin>>t;
    while(t--) {
        map<string,vii>mp;
        int n,cnt1=0,cnt2=0,cnt3=0;
        cin>>n;
        for(int i=0; i<n; i++) {
            string s;
            cin>>s;
            mp[s].push_back(1);
        }
        for(int i=0; i<n; i++) {
            string s;
            cin>>s;
            mp[s].push_back(2);
        }
        for(int i=0; i<n; i++) {
            string s;
            cin>>s;
            mp[s].push_back(3);
        }
        for(auto it:mp) {
            if(it.second.size()==1) {
                if(it.second[0]==1)
                    cnt1+=3;
                else if(it.second[0]==2)
                    cnt2+=3;
                else
                    cnt3+=3;
            } else if(it.second.size()==2) {
                if(it.second[0]==1 and it.second[1]==2) {
                    cnt1+=1;
                    cnt2+=1;
                } else if(it.second[0]==1 and it.second[1]==3) {
                    cnt1+=1;
                    cnt3+=1;
                }
                if(it.second[0]==2 and it.second[1]==3) {
                    cnt2+=1;
                    cnt3+=1;
                }
            } else {
                cnt1=cnt1;
                cnt2=cnt2;
                cnt3=cnt3;
            }
        }
        cout<<cnt1<<" "<<cnt2<<" "<<cnt3<<endl;
    }
}
