/*https://codeforces.com/problemset/problem/231/A*/

#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int ans=0;
    for(int i=0;i<n;i++){
        int temp=0;
        for(int z=0;z<3;z++){
            int x;
            scanf("%d",&x);
            temp+=x;
        }
        if(temp>=2)ans++;

    }
    printf("%d",ans);
}