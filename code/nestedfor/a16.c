#include<stdio.h>


 void main(){

    printf("Design Pattern \n \n");
    
   // char ch ='A';
 
     for(int i=1;i<=4;i++){ 
  
          char ch ='A';
     
        for(int j=5;j>=i;j--){

           printf("%c ",ch);
   
        ch++;
            
 
      }

      printf("\n");
      
   

  }

   
}

/*aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/code/nestedfor$ cc a16.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/code/nestedfor$ ./a.out
Design Pattern 
 
A B C D E 
A B C D 
A B C 
A B */
