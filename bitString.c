#include<stdio.h>

void main(){

int setA[100],sub_1[100],sub_2[200];
int bit_array1[100],bit_array2[100];
int size,size1,size2,i,j;
printf("Enter the size of parent set : \n ");
scanf("%d",&size);

printf("Enter the elements of parent set : \n "); 
for(i = 0; i < size;i++){
scanf("%d",&setA[i]);
}


printf("Enter the size of 1st subset : \n");
scanf("%d",&size1); 

printf("Enter the elements of 1st subset :\n"); 
for(i = 0; i < size1;i++){
scanf("%d",&sub_1[i]);
}

printf("Enter the size of 2nd subset : \n ");
scanf("%d",&size2); 

printf("Enter the elements of 2nd subset : \n "); 
for(i = 0; i < size2;i++){
scanf("%d",&sub_2[i]);
}

//bit array 1
for(i=0;i < size1; i++){
for(j=0;j < size; j++){
if(sub_1[i] == setA[j]){
bit_array1[j] = 1;
} else {
bit_array1[j] = 0;
}
}
}

//bit array 2
for(i=0;i < size2; i++){
for(j=0;j < size; j++){
if(sub_2[i] == setA[j]){
bit_array2[j] = 1;
} else {
bit_array2[j] = 0;
}
}
}

printf("elements of 1st bitarray :"); 
for(i = 0; i < size1;i++){
printf("%d",bit_array1[i]);
}

printf("elements of 2nd bitarray : "); 
for(i = 0; i < size2;i++){
printf("%d",bit_array2[i]);
}
}
