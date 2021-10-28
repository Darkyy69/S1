#include<stdio.h>
#include<stdlib.h>


int main()
{
float P;
char ch[]="Da";
int t1=25,t2=40,t3=50;
printf("Donner le poids du colis:\n");
scanf("%f",&P);
if (P<=0)
{
    printf("Erreur.\n");
}
if (P>0&&P<=20)
{
    printf("Le tarif en da est:%d%s\n",t1,ch);
}
if (P>20&&P<=50)
{
    printf("Le tarif en da est:%d%s\n",t2,ch);
}
if (P>50&&P<=100)
{
    printf("Le tarif en da est:%d%s\n",t3,ch);
}
system("pause");
return 0;
}