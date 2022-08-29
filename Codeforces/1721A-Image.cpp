#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    char x;
    cin>>t;
    while(t--) {
        set<char>st;
        cin>>x;
        st.insert(x);
        cin>>x;
        st.insert(x);
        cin>>x;
        st.insert(x);
        cin>>x;
        st.insert(x);
        cout<<(st.size()-1)<<"\n";
        st.clear();
    }

}
