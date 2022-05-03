# include < stdio.h > 
  # include < stdlib.h > 
  # include " stackop.c " 
  void   main () 
  { 
     int  choice,item,t; 
     while ( 1 ) 
    { 
       printf ( " \n Stack operations \n " ); 
       printf ( " 1. Push  \n " ); 
       printf ( " 2. Pop  \n " ); 
       printf ( " 3. Top  \n " ); 
       printf ( " 4. Display  \n " ); 
       printf ( " 5. Exit  \n " ); 
       printf ( " Enter Your Choice:  \n " ); 
       scanf ( " %d " ,&choice); 
       switch (choice) 
      { 
         case   1 : 
                 printf ( " \n Enter The  Item to be pushed: " ); 
                 scanf ( " %d " ,&item); 
                 push (item); 
                 break ; 
         case   2 : 
                item= pop (); 
                 printf ( " Item popped from stack :  %d " ,item); 
                 break ; 
         case   3 : 
                t= gettop (); 
                 printf ( " Item at the top of the stack: %d " ,t); 
                 break ; 
         case   4 : 
                 display (); 
                 break ; 
         case   5 : 
                 exit ( 1 ); 
         default : 
                 printf ( " Wrong Choice \n " ); 
      } 
    } 
  
  }
