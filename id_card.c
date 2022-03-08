#include<stdio.h>

int main(){
    char user_name[100] , address[100];
    int age,id_number;
    printf("\nEnter your name : ");
    scanf("%s",user_name);
    printf("\nEnter your age : ");
    scanf("%d",&age);
    printf("\nEnter your addresss : ");
    scanf("%s",address);
    printf("\nEnter your ID Number : ");
    scanf("%3d",&id_number );

    printf("\n*************************************");
    printf("\nNAME : %s",user_name);
    printf("\nAGE : %d",age);
    printf("\nADDRESS : %s",address);
    printf("\nID NUMBER : %d\n",id_number);
    printf("*************************************\n");

    return 0;

}