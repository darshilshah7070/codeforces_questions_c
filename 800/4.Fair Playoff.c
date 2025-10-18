/*https://codeforces.com/problemset/problem/1535/A*/

#include <stdio.h>

int main(){
    int t=1;
    scanf("%d",&t);
    while(t--){
       
        int a[4];
        int f_h=0,s_h=0,f_w=0,s_w=0;
        for(int i=0;i<4;i++){
            scanf("%d",a+i);
        }
        for(int i=0;i<4;i++){
            if(a[i]>f_h){
                s_h=f_h;
                f_h=a[i];
                
            }
        }
        for(int i=0;i<4;i++){
            if(a[i]>s_h && a[i]!=f_h){
    
                s_h=a[i];
                
            }
        }
        f_w=(a[0]>a[1])?a[0]:a[1];
        s_w=(a[2]>a[3])?a[2]:a[3];
        //  printf("%d %d %d %d ",f_h,s_h,f_w,s_w);
        if((f_w==f_h || f_w==s_h) && (s_w==f_h || s_w==s_h))printf("YES\n");
        else printf("NO\n");
    }
}