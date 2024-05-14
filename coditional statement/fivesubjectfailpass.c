#include<stdio.h>
int main()
{
    float hi,eng,ch,mat,ph;
    printf("ENTER THE MARKS :: 1.HINDI 2.ENGLISH 3.CHEMISTRY 4.MATHS 5.PHYSICS \n");
    scanf("%f %f %f %f %f ",&hi,&eng,&ch,&mat,&ph);
    if(hi>=33&&hi<=100)
    printf("YO ARE PASS IN HINDI \n");
    else
    printf("YOU ARE FAIL IN HINDI\n");
    if(eng>=33&&eng<=100)
     printf("YO ARE PASS IN ENGLISH\n ");
     else
      printf("YO ARE FAIL IN ENGLISH \n");
      if(ch>=33&&ch<=100)
       printf("YO ARE PASS IN CHEMISTRY\n ");
       else
        printf("YO ARE FAIL IN CHEMISTRY \n");
        if(mat>=33&&mat<=100)
         printf("YO ARE PASS IN MATHS \n");
         else
          printf("YO ARE FAIL IN MATHS \n");
          if(ph>=33&&ph<=100)
           printf("YO ARE PASS IN PHYSICS\n ");
           else
            printf("YO ARE FAIL IN PHYSICS \n");

}