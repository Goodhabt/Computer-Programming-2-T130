#include <string.h>  
int main()  
{  
    char str[50], rev; 
    int i, left, right, len;  

    printf (" \n Enter a string: ");  
    scanf( "%s", &str);  
    len = strlen(str); 
    left = 0;  
    right = len - 1; 
    
    for (i = left; i <right; i++)  
    {  
        rev = str[i];  
        str[i] = str[right];  
        str[right] = rev;  
        right--;  
    }  
    printf (" The reverse of the string is: %s ",  str);  
    return 0;  
}  