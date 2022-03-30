#include<stdio.h>
int acc(int login[3][2], int ID, int PIN) {
    int student=0;
    for(int i=0;i<3;i++) {
        if(ID==login[i][0] && PIN==login[i][1]){
            student=1;
        }
    }
    return student;
}
int main(){
    int login[3][2]={{1234,1111},{2345,2222},{3456,3333}};
    int ID, PIN;
    printf("ENTER ID NUMBER:");
    scanf("%d",&ID);
    printf("ENTER PIN:");
    scanf("%d",&PIN);
    
    if(acc(login,ID,PIN))
    {
        printf("YOU HAVE SUCCESSULLY LOGGED IN\nID#:%d",ID);
    }    
    
      else {
        printf("INVALID ID/PIN");
    }
    return 0;
    
}


   