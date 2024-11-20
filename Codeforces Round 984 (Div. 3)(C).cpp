#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    long long int q;
    cin>>q;
    long long int size=s.size();
    long long int cnt=0;
    for(int i=0;i<size-3;i++){
        if(s[i]=='1' and s[i+1]=='1' and s[i+2]=='0' and s[i+3]=='0')cnt++;
    }
    while(q--){
        long long int x;
        char y;
        cin>>x>>y;
        x--;
    //     char f=s[x];
    //     s[x]=y;
    if(s.size()<4){
        cout<<"NO"<<endl;
        //return;
    }
    //     else{
    //     long long int size=s.size();
    //     bool muhtasim=false;
    //     for(int i=0;i<size-3;i++){
    //         if(s[i]=='1' and s[i+1]=='1' and s[i+2]=='0' and s[i+3]=='0'){
    //             muhtasim=true;
    //             break;
    //         }
    //     }
    //     if(muhtasim){
    //         cout<<"YES"<<endl;
    //     }
    //     else{
    //         cout<<"NO"<<endl;
    //     }
    // }
    else{
        long long int j=max(0LL,x-3);
        long long int k=min(x,size-4);
        for(int i=j;i<=k;i++){
            if(s[i]=='1' and s[i+1]=='1' and s[i+2]=='0' and s[i+3]=='0')cnt--;
        }
        s[x]=y;
        j=max(0LL,x-3);
        k=min(x,size-4);
        for(int i=j;i<=k;i++){
            if(s[i]=='1' and s[i+1]=='1' and s[i+2]=='0' and s[i+3]=='0')cnt++;
        }
        if(cnt>0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    }

}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
}
