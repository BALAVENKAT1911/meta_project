#include<stdio.h>
int main(){
int arr[5],i,sum;
 for(i=0;i<6;i++){
 scanf("%d",&arr[i]);
sum=sum+i;
  sum++;
  }
  for(i=0;i<6;i++){
  printf("%d",arr[i]);
  sum=sum+i;
  sum++;
 }

return 0;
}
