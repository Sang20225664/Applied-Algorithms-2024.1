#include <iostream>
#include <cmath>
using namespace std;
const int  N = 1e6 + 5;
int n;
int a[N];
int M[30][N];
int Q,x,y;
int sum =0;
void preCompute(){
    for(int i = 0; (1 << i)<=n; i++){
        for(int j = 0; j < n; j++){
            M[i][j] = -1;
        }
    }
    for(int j = 0; j < n; j++){
        M[0][j] = j;
    }
    for(int i = 1; (1 << i)<=n; i++){
        for(int j = 0; j + (1 << i) - 1 < n; j++){
            if(a[M[i-1][j]] < a[M[i-1][j + (1 << (i-1))]]){
                M[i][j] = M[i-1][j];
            }
            else{
                M[i][j] = M[i-1][j + (1 << (i-1))];
            }
        }
    }
}

void RMQ(){
    cin >> Q;
    int k;
    for(int i=0;i<Q;i++){
        cin >> x >> y;
     k = log2(y-x+1);
    if(a[M[k][x]] < a[M[k][y-(1<<k)+1]]){
       sum = sum + a[M[k][x]];
    } else
    sum = sum + a[M[k][y-(1<<k)+1]];
}
cout << sum;
}
int main() {

    cin >> n;
for(int i = 0; i < n; i++){
    cin >> a[i];
}
preCompute();
RMQ();
return 0;
}
