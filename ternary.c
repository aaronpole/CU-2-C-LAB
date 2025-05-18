#include <stdio.h>


int main(){
       int first_check,second_check;
       printf("Enter the first check (1 for fail, 0 for pass): ");
       scanf("%d",&first_check);
       printf("Enter the second check (1 for fail, 0 for pass): ");
       scanf("%d",&second_check);

       const char* result = (first_check) 
                            ? "Access Denied (First Check Failed)"
                            : ((second_check)
                            ? "Access Denied (Second Check Failed)"
                            : "Access Granted");
        printf("%s\n",result);
        return 0; 
}

    
 