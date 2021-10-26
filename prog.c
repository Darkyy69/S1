#include<stdio.h>
#include<stdlib.h>


int main()
{
float P;
char ch[2]="da";
int t1=25,t2=40,t3=50;

     printf("\n Donner le poids du colis :");
scanf("%d",&P);


    if ((P>0)&&(P<21))
     {
         printf("Le trarif en Da est:%d %s\n",t1,ch);

     }

     else if ((P>=21)&&(P<51)){
         printf("le tarif est :%d %s\n",t2,ch);
     }
    else if ((P>=51)&&(P<100)){
        printf("le tarif est :%d %s\n",t3,ch);
    }
      else { 

            printf("Erreur. \n");
    }
     system("pause");
    return 0;



}