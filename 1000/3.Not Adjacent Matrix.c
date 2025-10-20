#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        if(n==2)printf("-1\n");
        else{
            int k=1;
            for(int i=1;i<=n*n;i+=2){
                printf("%d ",i);
                if(k%n==0)printf("\n");
                k++;
            }
             for(int i=2;i<=n*n;i+=2){
                printf("%d ",i);
                if(k%n==0)printf("\n");
                k++;
            }

        }
    }
}