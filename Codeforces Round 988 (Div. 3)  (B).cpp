// Muhtasim

#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long int k;cin>>k;
    long long int ans=k-2;
    map<long long int,long long int>mp;
    for(int i=0;i<k;i++){
        long long int x;cin>>x;
        if(ans%x==0){
           mp[x]++;
        }
    }
    long long int size=mp.size();
    for(int i=1;i*i<=ans;i++){
        if(ans%i==0){
            if(mp[i]>0 and mp[ans/i]>0){
                cout<<i<<" "<<ans/i<<endl;
                return;
            }
        }
    }
}

int main(){
    int t;
    cin >> t;
    while (t--) solve();
}
