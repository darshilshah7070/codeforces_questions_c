/*https://codeforces.com/problemset/problem/1535/B*/

#include <stdio.h>

int gcd(int a,int b){
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int e[2000],o[2000];
        int e_i=0,o_i=0;
        for(int i=0;i<n;i++){
            int x;
            scanf("%d",&x);
            if(x&1){o[o_i]=x;o_i++;}
            else {e[e_i]=x;e_i++;}
        }
        for(int i=e_i,z=0;i<n;i++){
            e[i]=o[z];
            z++;
        }
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(gcd(e[i],2*e[j])>1)ans++;
            }
        }
        printf("%d \n",ans);
        
    }
}