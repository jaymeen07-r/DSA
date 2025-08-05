#include <stdio.h>
int i, a = 0, b = 1, temp, count = 1, n; /*define all variables*/

int main() /*main function*/
{
    printf("Enter the number of terms: ");/*take input(number of terms)*/
    scanf("%d", &n);/*read and store the number of terms*/
    fibonacci(n);/*function call*/
}

int fibonacci(int n)/*fibonacci function*/
{
    if (count <= n)/*condition*/
    {
        printf("%d\t", a);
        temp = a + b;/*changing(swaping) values of operands for creating next term*/
        a = b;
        b = temp;
        count++; /*increment count*/
        fibonacci(n);/*recursive call*/
    }
    else/*condition false*/
    {
        return 0;/*end of recursion*/
    }
}
