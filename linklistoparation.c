# include < stdio.h > 
  # include < stdlib.h > 
  struct  node 
  { 
     int  data; 
     struct  node *next; 
  }; 
  
  void   insertatfront ( struct  node **q, int  k) 
  { 
     struct  node *new; 
    new =  malloc ( sizeof ( struct  node)); 
    new-> data =k; 
    new-> next =*q; 
    *q=new; 
  } 
  
  void   insertatend ( struct  node **q, int  k) 
  { 
     struct  node *new,*temp; 
    temp=*q; 
  
     if (temp== NULL ) 
    { 
      new =  malloc ( sizeof ( struct  node)); 
      new-> data =k; 
      new-> next = NULL ; 
      *q=new; 
    } 
     else 
    { 
       while (temp-> next != NULL ) 
      { 
        temp=temp-> next ; 
      } 
      new =  malloc ( sizeof ( struct  node)); 
      new-> data =k; 
      new-> next = NULL ; 
      temp-> next =new; 
    } 
  } 
  
  void   insertafter ( struct  node *q, int  k, int  d) 
  { 
     struct  node *new,*temp; 
    temp=q; 
     while (temp!= NULL ) 
    { 
       if (temp-> data ==k) 
      { 
        new =  malloc ( sizeof ( struct  node)); 
        new-> data =d; 
        new-> next =temp-> next ; 
        temp-> next =new; 
         return ; 
      } 
      temp=temp-> next ; 
    } 
     printf ( " \n Node with data  %d  does not exist in the list \n " ,k); 
  } 
  
  
  void   traverse ( struct  node *q) 
  { 
     while (q!= NULL ) 
    { 
       printf ( " %d   " ,q-> data ); 
      q=q-> next ; 
    } 
  }
