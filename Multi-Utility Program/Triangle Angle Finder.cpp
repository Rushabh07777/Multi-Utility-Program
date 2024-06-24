#include<stdio.h>
int main(){
  int agl1,agl2,agl3;
  printf("Write a program to find the third angle of a right triangle when two other angles are given.\n");
  printf("First angle :- ");
  scanf("%d",&agl1);
  printf("Second angle :- ");
  scanf("%d",&agl2);
  agl3=180-(agl1+agl2);
  printf("Thrid  Angle = %d",agl3);

}