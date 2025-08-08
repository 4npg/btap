// authur : anphung
// github : 4npg
#include <bits/stdc++.h>
using namespace std;
#define int64 long long
#define TASK "tenbai"
#define el cout<<"\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define f0(i,a,b) for(int (i)=(a);i<=(b);++i)

int32_t main() {
    fast;
    if (fopen(TASK ".inp", "r")) {
        freopen(TASK ".inp", "r", stdin);
        freopen(TASK ".out", "w", stdout);
    }
    int t;
    cin >> t;
    unordered_map<string,int> val = {
        {"A",1}, {"2",2}, {"3",3}, {"4",4}, {"5",5}, {"6",6},
        {"7",7}, {"8",8}, {"9",9}, {"10",10}, {"J",10}, {"Q",10}, {"K",10}
    };
    while(t--){
        string a, b;
        cin >> a >> b;
        if ((a=="A" && (b=="10"||b=="J"||b=="Q"||b=="K")) || ((a=="10"||a=="J"||a=="Q"||a=="K") && b=="A")) {
            cout << "Blackjack";
            el;
            continue;
        }
        int baseSum = val[a] + val[b];
        bool hasA = (a=="A" || b=="A");
        if (hasA && baseSum + 10 <= 21) baseSum += 10;

        int maxPoint = baseSum;

        for (auto &card : val) {
            int cardVal = card.second;
            if (card.first == "A") {
                if (baseSum + 11 <= 21) cardVal = 11;
                else cardVal = 1;
            }
            int total = baseSum + cardVal;
            if (total <= 21 && total > maxPoint) maxPoint = total;
        }
        cout << maxPoint;
        el;
    }
}
