#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main ()
{
    int i,len, vowels=0, consonants=0;
    char sen[100];
    printf("Input a sentence: ");
    gets(sen);
    len = strlen(sen);

    for (i=0; sen[i]!='\0'; ++i){
        if (sen[i] == 'a' || sen[i] == 'e' || sen[i] == 'i' ||sen[i] == 'o' || sen[i] == 'u'){
            ++vowels;
            sen[i] = toupper(sen[i]);
        } else if ((sen[i] >= 'a' && sen[i] <= 'z')) {
            ++consonants;
        }
    }

    printf("String converted: ");
    puts(sen);

    printf("String length: %d\n", len);
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}