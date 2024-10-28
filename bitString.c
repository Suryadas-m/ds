#include<stdio.h>

void main(){

int setA[100],sub_1[100],sub_2[200];
int bit_array1[100],bit_array2[100];
int arr_OR[100],arr_AND[100];
int size,size1,size2,i,j,temp;
printf("Enter the size of parent set:\n");
scanf("%d",&size);

printf("Enter the elements of parent set:\n"); 
for(i = 0; i < size;i++){
scanf("%d",&setA[i]);
}


printf("Enter the size of 1st subset:\n");
scanf("%d",&size1); 

printf("Enter the elements of 1st subset:\n"); 
for(i = 0; i < size1;i++){
scanf("%d",&sub_1[i]);
}

printf("Enter the size of 2nd subset:\n");
scanf("%d",&size2); 

printf("Enter the elements of 2nd subset:\n"); 
for(i = 0; i < size2;i++){
scanf("%d",&sub_2[i]);
}

//bit array 1
for(i=0;i<size1; i++){
temp = sub_1[i];
for(j=0;j < size;j++){
if(temp == setA[j]){
if(bit_array1[j]==1){
continue;
} else{
bit_array1[j] = 1;
}
}else{
if(bit_array1[j]==1){
continue;
} else{
bit_array1[j] = 0;
}
}
}
}

//bit array 2
for(i=0;i<size2; i++){
temp = sub_2[i];
for(j=0;j < size;j++){
if(temp == setA[j]){
if(bit_array2[j]==1){
continue;
} else{
bit_array2[j] = 1;
}
}else{
if(bit_array2[j]==1){
continue;
} else{
bit_array2[j] = 0;
}
}
}
}

printf("elements of 1st bitarray :"); 
for(i = 0; i < size;i++){
printf("%d ",bit_array1[i]);
}

printf("\n");	

printf("elements of 2nd bitarray :"); 
for(i = 0; i < size;i++){
printf("%d ",bit_array2[i]);
}

//OR
for(i=0;i<size;i++){
arr_OR[i] = bit_array1[i] | bit_array2[i];
}
//AND
for(i=0;i<size;i++){
arr_AND[i] = bit_array1[i] & bit_array2[i];
}

printf("\n");

printf("Result Of OR :"); 
for(i = 0; i < size;i++){
printf("%d",arr_OR[i]);
}

printf("\n");

printf("Result Of AND :"); 
for(i = 0; i < size;i++){
printf("%d",arr_AND[i]);
}
}
