//C++
#include <bits/stdc++.h>
using namespace std;
const int M =1e6 + 5;
int a[M];
int n;
int Q;
void input(){
    cin >> n >> Q;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
}
void cac(){
    int L=1;
    int sum=0;
    int count=0;
    for(int R=1;R<=n;R++){
        sum=sum+a[R];

        if(sum>Q){
            sum=sum-a[L];
            L++;
        }
        count= max(count , R-L+1);
    }
    cout << count;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    input();
    cac();
    return 0;
}
