# include < stdio.h > 
  # include " polyop.c " 
  void   createPolynomial ( struct  node **p); 
  int   main () 
  { 
     struct  node *p1= NULL ,*p2= NULL ,*p3= NULL ; 
     createPolynomial (&p1); 
     createPolynomial (&p2); 
     printf ( " Addition \n " ); 
     display (p1); 
     display (p2); 
    p3= add (p1,p2); 
     display (p3); 
  
     printf ( " Multiplication \n " ); 
    p3= multiply (p1,p2); 
     display (p1); 
     display (p2); 
     display (p3); 
  } 
  
  void   createPolynomial ( struct  node **p) 
  { 
     int  n,e,i; 
     float  c; 
     printf ( " \n Enter the number of terms in the polynomial:  " ); 
     scanf ( " %d " ,&n); 
     for (i= 0 ;i<n;i++) 
    { 
       printf ( " Enter the coefficient for term  %d :  " ,i+ 1 ); 
       scanf ( " %f " ,&c); 
       printf ( " Enter the exponent for term  %d :  " ,i+ 1 ); 
       scanf ( " %d " ,&e); 
       addterm (p,c,e); 
    } 
  }
