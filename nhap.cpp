#include<bits/stdc++.h>
using namespace std;
//n <= 1000 ==> int
bool nto(int n){
    if(n<2)return false;
    for(int i = 2;i*i<=n;i++)
        if(n%i==0)return false;
    return true;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int n;cin>>n;
    set<int> unto;
    set<int> ut;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            if(nto(i))unto.insert(i);
            ut.insert(i);
            if(n/i!=i){
                if(nto(n/i))unto.insert(n/i);
                ut.insert(n/i);
            }
        }
    }
    for(auto x:ut){
        cout<<x<<" ";
    }
    cout<<"\n";
    if(unto.size()==0){
        cout<<0;
    }else{
    for(auto x:unto){
        cout<<x<<" ";
    }}
}