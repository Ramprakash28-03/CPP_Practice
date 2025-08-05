#include<stdio.h>
int main()
{
   if(a<=b && a<=c){
     for(int i=1; i<=a; i++){
         if(a%i==0 && b%i ==0  && c%i==0){
             ans = ans*i;
         }
     }
     printf("Ans : %d", ans);
   }    
     if(b<=a && b<=c){
         for(int i=1; i<=b; i++){
             if(a%i==0 && b%i ==0  && c%i==0){
                 ans_b = ans_b*i;
             }
         }
         printf("Ans : %d", ans_b);
     }
     if(c<=b && c<=a){
         for(int i=1; i<=c; i++){
             if(a%i==0 && b%i ==0  && c%i==0){
                 ans_c = ans_c*i;
             }
         }
         printf("Ans : %d", ans_c);
     }
}
