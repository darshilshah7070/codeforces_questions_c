/*https://codeforces.com/problemset/problem/71/A*/

#include <stdio.h>
#include <string.h>

int main()
{
    int f,i,len;
    char s[100];
    scanf("%d",&f);
    for(i=0;i<f;i++){
        scanf("%s",s);
        len = strlen(s);
        if(len>10){
            printf("%c%d%c\n",s[0],len-2,s[len-1]);
        }


        else{
            printf("%s\n",s);
        }

    }
    return 0;
}