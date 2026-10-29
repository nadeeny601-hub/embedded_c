#include <stdio.h>




int strlen (char str [])
{
    int i =0;
    while (str[i]!='\0')
    {
        i++;
    }
    return i;
}


char* strchr(char str[], char c)
{ char*ptr=NULL;
  for ( int i=0;i<strlen(str);i++)
    {
        if (str[i]==c)
           { ptr=&str[i];
             break;

           }
    }
return ptr ;
}



char* strrchr(char str[],char c)
{
    char*ptr=NULL;
  for ( int i=(strlen(str))-1;i>=0;i--)
    {
        if (str[i]==c)
           {
            ptr=&str[i];
            break; }
    }
return ptr ;
}

void  strcpy(char des[], char src[] )
{   int i =0;
    while (src[i]!='\0')
    {
        des[i]=src[i];
        i++;
    }
    des[i]='\0';


}
void strncpy(char des[],char src[], int n)
{
    int i=0;
    while (i!=n && src[i]!='\0')
    {
       des[i]=src[i];
       i++;
    }
    des[i]='\0';
}
char*strstr(char string[], char word[])
{
    for (int i=0 ; i< strlen(string);i++)
    {
        int j=0;
        int k=i;;


        for ( j;j<strlen (word);j++)
        {
            if (string[i+j]==word[j])

                continue;
            else break;
        }
        if (j==strlen(word))
            return &string[k] ;

    }
    return NULL;
}
void strcatt( char str1[], char str2[])
{
    int x= strlen(str1);

    int i=0;
    while (str2[i]!='\0')
    { str1[x]=str2[i];
    i++;
    x++;

    }
    x++;
    str1[x]='\0';

}




void * memchr(void*ptr,int c,int n)
{ unsigned char * str= (unsigned char*)ptr;
unsigned char character = (unsigned char)c;
void* pointer =NULL;
for (int i =0; i< n ; i++)
{ if (str[i]==character)
 {
     pointer=&str[i];
     break;
 }}
 return pointer;
}






 int strcmp (char str1[],char str2[])
 {  int n;
    int i=0;
     while(str1[i]!='\0'&&str2[i]!='\0')
    {
        if (str1[i]>str2[i])
    { n=1;
    break;
    }
    else if (str1[i]<str2[i])
    {n=-1;
    break;
    }
    else
     n=0;
     i++;



    }
    if (strlen(str1)>strlen(str2)&&n==0)
    {
        n=1;
    }

   else if( strlen(str1)<strlen(str2)&&n==0)
   { n=-1;

   }
   return n;
 }



 int memcmp(void*str1,void*str2,int n)
 { unsigned char * ptr1 =(unsigned char *)str1;
  unsigned char * ptr2 = (unsigned char *) str2;
  int result ;
  for (int i =0;i<n;i++)
  { if ( ptr1[i] >ptr2[i])
    { result =1;
    break;

    }
    else if (ptr1[i]<ptr2[i])
  { result=-1;
  break;

  }
  else
      result=0;
  }
  return result ;


 }
 void * memcpy(void* str1,void*str2,int n)
 {
    unsigned char * string1=(unsigned char *)str1;
    unsigned char * string2=(unsigned char *) str2;
    for (int i=0 ; i< n;i++)
    { string1[i]=string2[i];

    }
    return string2;
 }

 void*memset(void*str,int value ,int n)
 {
     unsigned char * string = (unsigned char *) str;
     char v = (char )value;
     for ( int i =0 ;i<n; i++)
     {
      string[i]=v;
     }
     return str;
 }
 int strcspn(char str1[],char str2[])
 {
     for (int i =0; i<strlen(str1);i++)
     {
       for (int j=0;j<strlen(str2);j++)
       {
           if ( str1[i]==str2[j])
           { return i;

           }
       }
     }
     return strlen(str1);
 }

































int main()
{
    printf("Hello world!\n");
    char string1[10] = "aaan";
    char string2[10]="n";

    char s[15];
    char character = 'a';
    int x =97;
int f=strcspn(string1,string2);
printf("%d",f);








    return 0;
}
