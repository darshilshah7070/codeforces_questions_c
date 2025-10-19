/*https://codeforces.com/problemset/problem/1543/A*/

#include <stdio.h>
#include <stdlib.h>
#define ll long long

ll min(ll a, ll b) {
    return (a < b) ? a : b;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        ll a, b;
        scanf("%lld %lld", &a, &b);
        if (a == b) {
            printf("0 0\n");
            continue;
        }
        ll diff = llabs(a - b);
        ll ans2 = min(a % diff, diff - a % diff);
        printf("%lld %lld\n", diff, ans2);
    }
}
