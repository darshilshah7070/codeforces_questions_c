/*https://codeforces.com/problemset/problem/1542/A*/

#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int odd=0,even=0;
        for(int i=0;i<2*n;i++){
            int z;
            scanf("%d",&z);
            if(z&1)odd++;
            else even++;
        }
        if(odd==even)printf("YES\n");
        else printf("NO\n");
    }
}