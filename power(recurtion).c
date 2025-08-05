#include<stdio.h>
int power(int,int);
void main(){
    int x,n,ans;
    ans= power(2,5);
    printf("%d",ans);
}

int power(int x, int n) {
    if (n == 0)
        return 1;
    else
        return x * power(x, n - 1);
}
