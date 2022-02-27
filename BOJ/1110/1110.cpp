#include <stdio.h>

int main()
{
   int input;
   int ten;
   int one;
   int count = 0;
   int result;
   
   scanf("%d",&input);
	
   result = input;
   while(input != result or count == 0){
   	
   		one = result%10 ;
 	    
 		if(result>=10)
	    	ten = result/10;
   
 	 	if(result<10)
    		ten = 0;
    	
    	result = (one+ten)%10 + one*10;
    	count += 1;
   }
   
   printf("%d",count);
   
   return 0;
   
}
