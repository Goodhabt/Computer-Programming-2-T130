#include <stdio.h>

int main()
{
    int elements[10];
    int n, i, sum=0;
    printf("Enter the size of the Array: ");
    scanf("%d", &n);
    
    for (i= 1; i<=n; i++)
    {
        printf("Enter element %d: ",i);
        scanf("%d", & elements[i]);
    }
    
     for(i=1; i<=n; i++)
    {
        sum+=elements[i];
    }
     printf("Sum of all array elements : %d",sum);
    return 0;
}