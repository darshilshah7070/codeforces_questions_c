/*https://codeforces.com/problemset/problem/1521/A*/

#include <stdio.h>

#define ll long long

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
       ll a,b;
       scanf("%lld %lld",&a,&b);
       if(b==1){
        printf("NO\n");
       }
       else{
        printf("YES\n");
        if(b==2){
            b*=2;
        }
        printf("%lld %lld %lld\n",a,a*(b-1),a*b);
       }
    }
}
