#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    char name [50];
    int age;
    int totalmarks;
}student;



void display(student s [] , int size )
{    for ( int i=1;i<=size;i++)
{
    printf("the data of the student %d\n",i);
    printf("%s\n",s[i-1].name);
    printf("%d\n",s[i-1].age);
    printf("%d\n",s[i-1].totalmarks);
}

}
void input( student s[] , int size )
{  for (int i=1;i<=size ;i++)
    {  printf("enter the data of the student %d \n",i);

       printf("enter the name\n");
       scanf("%s",s[i-1].name);

       printf("enter the age\n");
       scanf("%d",&s[i-1].age);

       printf("enter the totalmarks\n");
       scanf("%d",&s[i-1].totalmarks);


    }
}
void maxmark(student s[], int size)
{ int max= s[0].totalmarks;
    for (int i =1;i<size;i++)
    {
        if ( s[i].totalmarks>max )
            max=s[i].totalmarks;
    }
    printf("max%d\n",max);
}

void average ( student s[] ,int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    { sum =sum + s[i].totalmarks;}
    printf("average%d\n", sum/size);

}

void top3( student s[],int size)
{
    student temp[10];
    for(int i=0;i<size;i++)
    {
      temp [i]=s[i];

    }
    for (int j=0 ;j<size-1;j++)
    {
        for (int k=0;k<size-1;k++)
        { if (temp[k].totalmarks<temp[k+1].totalmarks)
          {
              student t=temp[k];

              temp[k]=temp[k+1];
              temp[k+1]=t;

          }


          }


        }
        for (int i=0;i<3;i++)
        {
            printf ("student %s with grade %d \n",temp[i].name,temp[i].totalmarks);
        }
    }







int main()
{   student s[5];
    input(s,5);
    display(s,5);

    maxmark(s,5);
    average(s,5);

    top3(s,5);



    return 0;
}
