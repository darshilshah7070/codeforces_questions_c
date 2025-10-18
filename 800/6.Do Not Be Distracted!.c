/*https://codeforces.com/problemset/problem/1520/A*/

#include <stdio.h>

int main(){
    int t=1;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        char s[n];
        scanf("%s",s);
        int a[26]={0};
        int f=0;
        a[s[0]-'A']++;
        for(int i=1;i<n;i++){
            if(a[s[i]-'A']>0){
                if(s[i-1]!=s[i]){
                    printf("NO\n");
                    f++;
                    break;
                }
            }
            else a[s[i]-'A']++;
        }
        // for(int i=0;i<26;i++)printf("%d ",a[i]);
        if(f)continue;
        printf("YES\n");
    }
}