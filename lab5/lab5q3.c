#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int count =0 ;
int x;
 typedef enum
 { available,
   notavailable,
   borrowed

 }bookstatus;

typedef enum
 { comedy,
   history,
   sciencefiction
}bookcategory;









typedef struct
{ char title[50];
  char author[50];
  int price ;
  bookstatus status;
  bookcategory category;

}book;

void addbook (book b[],book neww)
{

  b[count]=neww;

    count++;
}
void search (book b[],char s [])
{ for (int i=0 ;i<count;i++)
  {
      if (strcmp(s,b[i].title)==0||strcmp(s,b[i].author)==0)
      { printf( "title : %s \n author :%s \n price: %d \n status : %d \n category :%d \n", b[i].title , b[i].author, b[i].price,b[i].status, b[i].category);


      }
  }

}
void categorycount (book b[])
{
    int comcount=0;
    int hiscount=0;
    int ficcount=0;
    for (int i =0 ; i<count ; i++)
    {
        if (b[i].category==comedy )
            comcount++;
        if ( b[i].category==history)
            hiscount++;
        if(b[i].category==sciencefiction)
            ficcount++;
    }
    printf ("number of comedy books :%d\n number of history books :%d\n number of science fiction books %d \n",comcount ,hiscount,ficcount);
}
void changestatus (book b[], char titlee[], bookstatus s)
{
     for (int i =0;i< count ;i++)
     {
         if (strcmp(b[i].title,titlee) ==0)
           {

            b[i].status=s;
           }

     }
}



int main()
{   book books[100];
book b1 = { "hi" ,"nadeen",100,available,comedy};
book b2 ={ "hello" ,"kareem",200,borrowed,history};
book b3={ "bye" ,"rahaf" ,300 , notavailable ,sciencefiction};
addbook(books,b1);
addbook(books,b2);
addbook(books,b3);
categorycount(books);
search(books,"nadeen");
changestatus(books,"hi",borrowed);
printf( "status : %d \n" , books[0].status);

    printf("Hello world!\n");
    return 0;
}
