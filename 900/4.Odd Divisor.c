/*https://codeforces.com/problemset/problem/1475/A*/

#include <stdio.h>
#include <stdlib.h>
#define ll long long


int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
       ll a;
       scanf("%lld",&a);
       int one=0;
       while(a){
        if(a&1)one++;
        a>>=1;
       }
    //    printf("%d ",one);
       if(one!=1)printf("YES\n");
       else printf("NO\n");
    }
}
