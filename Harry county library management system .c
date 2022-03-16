/* county library management system
By harry ngeno
08 Feb 2022
MIT license 
c89 compiler
*/


#include<stdio.h>
#include<stdlib.h>
int menu()
{
int action;
          printf("select an action below\n");
          printf("1. Add new patron\n");
          printf("2. View all patrons\n");
          printf("3. View all books\n");
          printf("4. Add new book\n");
          printf("Your action\n");
          scanf("%d", & action);
          return action ;    
        
        
}
int main()
{ 
      printf("COUNTY LIBRARY MANAGEMENT SYSTEM/\n");
      printf("WELCOME MR HARRY\n"); 
      printf("You selected action%d", menu());
      return 0;
}