#include<stdio.h>
void main(){
   int mark;
    printf("enter the mark of cenosh:\n");
   scanf("%d",&mark);
   if(mark>30 && mark<=100){
   printf("pass!!!");
   }
   else if(mark>=0 && mark<30){
      printf("fail!!!!!");
   }
   else{
      printf("wrong marks");
   }
   mark<=30?printf("FAIL"):printf("pass");    //TERNARY OPERATORS is used!!!!!!!!!!!!!!!!!!!!!!!!!!
}