#include<stdio.h>
void main()
{
    int number,position,a[50],size;
    int add_pos;
    int add_number;
    int i;
    //adding a value
    printf("Please Enter array size?\n");
    scanf("%d",&size);
    printf("Please enter the element?\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    int op;
    printf("Please choose an option\n");
    printf("1.add a number\n");
    printf("2.delete a numebr\n");
    printf("3.search a number\n");
    printf("4.Want to see position number\n");
    
    scanf("%d",&op);
    if(op==1)
    {
        printf("Please enter which position you want to add?\n");
        scanf("%d",&add_pos);
        printf("Please enter which element you want to add?\n");
        scanf("%d",&add_number);
        for(i=size-1;i>=add_pos-1;i--)
        {
            a[i+1]=a[i];
        }
        a[add_pos-1]=add_number;
         size++;
         int watch;
        printf("Please enter choice\n");
        printf("1.SEE THE ARRAY!\n");
        printf("2.exit!\n");
        scanf("%d",&watch);
        if(watch==1)
        {
            for(i=0;i<size;i++)
            {
                printf("%d ",a[i]);
            }
            
        }
        
        
    }
    //deleting the value
    else if(op==2)
    {
        int del_pos;
        printf("Please Enter which position you want to delete?");
        scanf("%d",&del_pos);
        for(i=del_pos-1;i<=size-1;i++)
        {
            a[i]=a[i+1];
        }
        size--;
        int watch;
        
           printf("Please enter choice");
        printf("1.SEE THE ARRAY!");
        printf("2.exit!");
        scanf("%d",&watch);
        if(watch==1)
        {
            for(i=0;i<size;i++)
            {
                printf("%d ",a[i]);
            }
            
        }
        
      
        
    }
    
    //search a number
  else if(op==3)
  {
      int search_number;
      int pos_search=0;
      printf("Please enter which element you want to search?\n");
      scanf("%d",&search_number);
      for(i=0;i<size;i++)
      {
          if(search_number==a[i])
          {
              pos_search=pos_search+1+i;
          }
          
          
      }
      printf("The number is in %d position",pos_search);
         
  }
  
  //find a number by its position
  else if(op==4)
  {
  int *p;
  int *q;
  p=&a;
  int pos_elem;
  printf("Please enter which position number you want to search?\n");
  scanf("%d",&pos_elem);
  for(i=0;i<size;i++)
  {
      if(i==pos_elem)
      {
      q=p+(i-1);
      }
  }
  printf("\nThe %d position numebr is %d",pos_elem,*q);
  }
  
    
    
}
