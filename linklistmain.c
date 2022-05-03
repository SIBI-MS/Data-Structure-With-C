# include < stdio.h > 
  # include " linklistds.c " 
  void   main () 
  { 
  struct  node *head; 
  head= NULL ; 
  insertatfront (&head, 10 ); 
  insertatfront (&head, 20 ); 
  insertatfront (&head, 30 ); 
  traverse (head); 
  printf ( " \n " ); 
  insertatfront (&head, 100 ); 
  insertatfront (&head, 90 ); 
  insertatfront (&head, 80 ); 
  traverse (head); 
  printf ( " \n " ); 
  insertafter (head, 30 , 13 ); 
  traverse (head); 
  printf ( " \n " ); 
  
  }
