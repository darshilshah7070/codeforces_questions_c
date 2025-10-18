/*https://codeforces.com/problemset/problem/282/A*/

#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int ans=0;
    for(int i=0;i<n;i++){
        char temp[4];
        
            scanf("%s",temp);
        
         
          
          
        
        for(int j=0;j<4;j++){
            // printf("%c ",temp[j]);
            if(temp[j]=='+'){ans++;break;}
            if(temp[j]=='-'){ans--;break;}
        }
    }
    printf("%d",ans);
}