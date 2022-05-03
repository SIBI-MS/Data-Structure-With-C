# include < stdio.h > 
  # define   MAX   10 
  int  stack[MAX]; 
  int  top=- 1 ; 
  
  void   push ( int  item) 
  { 
     if (top>=MAX) 
    { 
       printf ( " Stack Overflow!! " ); 
       return ; 
    } 
    top++; 
    stack[top]=item; 
  } 
  
  void   display () 
  { 
     printf ( " \n Printing Stack: \n " ); 
     for ( int  i=top;i>= 0 ;i--) 
    { 
       printf ( " %d \n " ,stack[i]); 
    } 
  } 
  int   pop () 
  { 
     int  item; 
     if (top == - 1 ) 
    { 
       printf ( " \n Stack is empty \n " ); 
       exit ( 1 ); 
    } 
     else 
    { 
      item=stack[top]; 
      top--; 
       return  item; 
    } 
  }  
  int   gettop () 
  { 
     return  stack[top]; 
  }
