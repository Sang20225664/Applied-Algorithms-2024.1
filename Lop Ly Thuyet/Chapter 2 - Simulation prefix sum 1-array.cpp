
#include <bits/stdc++.h>
using namespace std;
const int MAX=1e6+1;
int n;
int a[MAX];
int Sum[MAX];
int Q;
void PrefixSum(){
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    Sum[0]=0;
    for(int i=1;i<=n;i++){
        Sum[i]=Sum[i-1]+a[i];
    }


}
void cac(){
    cin >> Q;
    int S;
    for(int i=0;i<Q;i++){
        int x,y; cin >> x >> y;
        S = Sum[y]-Sum[x-1];
        cout << S << endl;
    }
}
int main()
{
PrefixSum();
cac();
return 0;
}
