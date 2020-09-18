#include <stdio.h>
int sumofno(int num);


int main()
{
    int num, sum;
    
    printf("Enter any number to find sum of digits: ");
    scanf("%d", &num);
    
    sum = sumofno(num);
    
    printf("Sum of digits of %d = %d", num, sum);
    
    return 0;
}


int sumofno(int num)
{
    // Base condition
    if(num == 0)
        return 0;
        
    return ((num % 10) + sumofno(num / 10));
}
