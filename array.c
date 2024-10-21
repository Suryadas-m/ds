#include<stdio.h>
int main()
{
 int arr1[50],arr2[50],i,j,n,m,temp,mergArr[50],k=0;
  printf("Enter the size of frist array:");
  scanf("%d",&n);
  printf("Enter the first array elemets:");
  for(i=0;i<n;i++)
  {
   scanf("%d",&arr1[i]);
  }
  printf("Enter the size of second array:"); 
  scanf("%d",&m);
  printf("Enter the second array elemets:");
  for(j=0;j<m;j++)
  {
   scanf("%d",&arr2[i]);
  } 
 
 
  for(i=0;i<n;i++)
  {
  for(j=0;j<n;j++)
  {
   if(arr1[i]<arr1[j])
   {
    temp=arr1[j];
    arr1[j]=arr1[i];
    arr1[i]=temp;
   }
  }
  }
   printf("sorted array'\n");
   for(i=0;i<n;i++)
   printf("%d",arr1[i]);
   }
   
  for(i=0;i<n;i++)
  {
  for(j=0;j<n;j++)
  {
   if(arr2[i]<arr2[j])
   {
    temp=arr2[j];
    arr2[j]=arr2[i];
    arr2[i]=temp;
    }
  }
 }
 printf("sorted array\n");
  for(i=0;i<n;i++)
  {
   printf("%d",arr2[i]);
  }
  for(i=0;i<n;i++)
  {
   mergeArr[i]=arr1[i];
  }
  k=i;
  for(i=0;i<n;i++)
  {
   mergeArr[k]=arr2[i];
   k++;
   }
   for(i=0;i<2*n:i++)
   {
    for(j=0;j<2*n;j++)
    { 
     if(mergeArr[i]<mergeArr[i];
     {
      temp=mergeArr[j];
      mergeArr[i]=mergeArry[i];
      mergeArry[i]=temp;
      }
     }
    } 
    printf("sorted array\n");
    for(i=o;i<2*n;i++)
    {
     printf("%d",mergeArr[i]);
     }
     } 
 return 0;
}
 
 
  


