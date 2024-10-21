#include<stdio.h>

int front=-1,rear=-1;
int maxsize,queue[100];
void enqueue();
void dequeue();
void display();
int main()
{
 int choice=1;

 printf("enter the size of the queue(max 100):"); 
 scanf("%d",&maxsize);
 printf("\nqueue operation using array");
 printf("\n\t1.enqueue\n\t2.dequeue\n\t3.display\n\t4.exit");

while(choice<4&&choice!=0) 
{
  printf("\nenter your choices:");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:
   {
    enqueue();
    break;
   } 
   case 2:
   {
    dequeue();
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

} 
   void enqueue()
   {
    int item;
    
    printf("Enter the element:");
    scanf("%d",&item);
    if(rear==(maxsize-1))
     { 
       printf("\n\tqueue is full ");
     }
     else if(front==-1&&rear==-1)
     {
       front=0;
       rear=0;
      }
      else
      {
       rear=rear+1;
      
      queue[rear]=item; 
  
      printf("\nvalue inserted");
      }
    }
    void dequeue()
    {
    int item;
    if(front==-1||front>rear)
     { 
       printf("\nempty ");
     }
     else
     { 
     item=queue[front];
     front=front+1;
     printf("value deleted");
     }
    }
     
     
     void display()
   int i;
      if(front<=rear)
      {
       printf("queue elment are given below:\n");
       for(i=front;i<=rear;i++)
       {
        printf("\n%d",queue[i]);
       }
      
     }
      else
      {
        printf("\n queue is empty\n"); 
    
       } 
     
   }
     
      
