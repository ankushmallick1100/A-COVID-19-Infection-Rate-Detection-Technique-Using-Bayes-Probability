#include<stdio.h>
#include<conio.h>
int main()
{
    char a,b,c,d,e,f,name[20],state[20];
    int i,j=1,age,x,p;
    float count=0.00;
     
            printf("\n\n\t\t COVID 19 INFECTION RATE TEST DETECTOR \n\n");
   printf("\t\tPLEASE ENTER YOUR BASIC INFORMATION \n");
   printf("\tNAME:- ");
   gets(name);
   printf("\tAGE:- ");
   scanf("%d", &age);
   if (age>=13)
   {
       count+=1;
   }
   printf("\tSTATE:- ");
   scanf("%s",state);
printf("\t\t\t\t PLEASE ANSWER THE FOLLOWING QUESTION CORRECTLY\n");
printf("\n\n\tDo you have any travel history across INDIA between jan to mar?(y/n)\nAns:- ");
fflush(stdin);
scanf("%c",&a);
if(a=='y' || a=='Y')
{
    count+=1;
}
 printf("\n\n\t Do you came in contact with any covid infected parson?(y/n)\nAns:- ");
     fflush(stdin);
     scanf("%c", &b);
     if(b=='y' || b=='Y')
     {
         count+=1;
     }
 printf("\n\n\t Is there any covid patient in the range of 1 km?(y/n)\nAns:-  ");
 fflush(stdin);
 scanf("%c", &c);
 if(c=='y' || c=='Y')
 {
     count+=1;
 }
 printf("\n\n\tAre you suffering of any kind of diseases like CANCER,DIABETES or LUNGS DISEASES?(y/n)\nAns:- ");
 fflush(stdin);
 scanf("%c", &d);
if(d=='y' || d=='Y')
{
    count+=1;
}
printf("\n\n\tPlease let us know your body temperature(in C)\n Ans:-");
scanf("%d",&x);
if (x>=38)
{
    count+=1;
}
printf("\n\n\t If you are suffering from any one write y\n\t1) Dry cough \n\t2) Shortness of breath \n\t3) Headaches \n\t4) Aches and Pains \n\t5) Sore throat \n\t6) fatigue \n\t7) Diarrhea  \nAns:- ");
fflush(stdin);
scanf("%c",&e);
if(e=='y' || e=='Y')
{
    count+=1;
}
printf("\n\n\tAre you suffering from bp or suger problem?(y/n)\n Ans:- ");
fflush(stdin);
scanf("%c",&f);
if (f=='y'|| f=='Y')
{
    count+=1;
}
printf("\n\n\t\t RESULT \n\n");
printf("NAME :- ");
puts(name);
printf("AGE:- %d",age);
printf("\nSTATE:- ");
puts(state);
count=count*12.5;

printf("\n\n\t YOUR RATE OF BEING INFECTED IS %0.2f percent",count);


if (count<=30)
{
    printf("\n\n\t\t\t  CONGRATS! YOU ARE IN GREEN ZONE \n ");
}
 else if (count>30 && count<60)
{
    printf("\n\n\n\t HEY! YOU ARE IN ORANGE ZONE \n");    
}
else
{
    printf("\n\n\t\t\t ALERT! YOU ARE IN RED ZONE \n");   
}
printf("\n\n\t\t\t STAY HOME STAY SAFE \n");
 return 0;
}