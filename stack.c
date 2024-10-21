#include<stdio.h>

int stack[100],choice,n,top,x,i;
void push();
void pop();
void display();
int main()
{
 top=-1;
 printf("Enter the stack size:");
 { 
 scanf("%d",&n);
 }
 printf("\nstack operation using array:");
 printf("\n\t1.push\n\t2.pop\n\t3.display\n\t4.exit");
 do
 {
  printf("\nenter your choices:");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:
   {
    push();
    break;
   } 
   case 2:
   {
    pop();
    break;
   }
   case 3:
   {
    display();
    break;
   }
   case 4:
   {
    printf("exit");
    break;
   }
   default:
   {
    printf("\n\tenter a valid choice(1/2/3/4/)");
   }
  }
 }
  while(choice!=4);
  return 0;
} 
   void push()
   {
    if(top==n-1)
     { 
       printf("\n\tstack is overflow ");
     }
     else
     {
      printf("\n\tenter a value to be pushed:");
      scanf("%d",&x);
      top++;
      stack[top]=x;
     }
    } 
    void pop()
    {
    if(top==-1)
     { 
       printf("\nstack is underflow ");
     }
     else
     { 
      printf("\n\t the popped element is %d",stack[top]);
       stack[top];
       top--;
      }
     }
     void display()
     {
      if(top==-1)
      {
       printf("stack empty\n");
      }
      else
      {
        printf("\n the elment in stack\n"); 
        for(i=0;i<=top;i++)
        {
         printf("\n%d",stack[i]);
        }
       } 
     }
      
   

 

