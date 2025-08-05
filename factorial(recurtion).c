#include<stdio.h>
void main(){
int fact(int),ans;
ans = fact(5);
printf("%d",ans);
}

int fact(int n){
    if(n<=1)
        return 1;
    else
        return n * fact(n-1);
}
