#include<stdio.h>
#include<conio.h>
#define size 5
int x[size],tos=-1;
void add()
{
   if(tos<size-1)
   {
      tos++;
      printf("\n enter value:");
      scanf("%d",&x[tos]);
      printf("\nvalue inserted successfully..");
   }
   else
   {
     printf("\n stak is full..");
   }
}
void disp()
{
  if(tos==-1)
  {
    printf("\n record not found..");
  }
  else
  {
     int i;
     for(i=0;i<=tos;i++)
     {
       printf("\n%d:%d",i+1,x[i]);
     }
  }
}
void del()
{
  if(tos==-1)
  {
    printf("\n stak is empty..");
  }
  else
  {
     printf("\n value %d is removed",x[tos]);
     tos--;
  }
}
void srch()
{
  int src,i,flag=0;
  printf("\n enter search value:");
  scanf("%d",&src);
  for(i=0;i<size;i++)
  {
    printf("\n %d:%d",i+1,x[i]);
    if(x[i]==src)
    {
       printf("\n <==value found at here");
       flag=1;
    }
    if(flag==0)
    {
      printf("\n value not found..");
    }
  }
}
void main()
{
   int ch;
   while(1)
   {
      clrscr();
      printf("\n 1) add data");
      printf("\n 2) display data");
      printf("\n 3) remove data");
      printf("\n 4) search data");
      printf("\n 5) exit");
      printf("\n enter your choice:");
      scanf("%d",&ch);
      switch(ch)
      {
	 case 1:
		 add();
		 break;
	 case 2:
		 disp();
		 break;
	 case 3:
		 del();
		 break;
	 case 4:
		 srch();
		 break;
	 case 5:
		 exit();
	 default:
		  printf("invalid choice..");
      }
      getch();
   }
}