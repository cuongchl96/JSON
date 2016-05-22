#include <bits/stdc++.h>

#define FOR(i,x,y) for(int i = x; i <= y;i++)
#define Fill(a,b) memset(a,b,sizeof(a))
const int maxn = 100;
using namespace std;

int main(){
    int i, j, k, d[maxn], kq, s1, s2, s3;
    Fill(d,0);
    scanf("%d%d%d",&s1,&s2,&s3);
    FOR(i,1,s1)uygds ábjygd fvsạkhfvbg agkjsdb z kjshv bắkjf há,fnnjládknljàkhljnf
        FOR(j,1,s2)
            FOR(k,1,s3) d[i+j+k]++;
    kq = 0;
    FOR(i,1,maxn)
        if (d[i] > d[kq]) kq = i;
    printf("%d",kq);
}

