  #include<stdio.h>
void alphabet(int height)
{
   int row,col,width=(height-2);
   
  for(row=0;row<height;row++)
  {
      for(col=0; col<=width;col++)
      
      {
          if((col==0||col==width)&&!(row>=4)) 
          {
              printf("*");
          }
          else
          if((col==3)&&(row==height-1)) 
          {
              printf("*");
          }
          
         
          else 
           if((col==2||col==width-2)&&(row==height-3)) 
          {
              printf("*");
          }
          else
           printf(" ");
         
      }
              printf("\n");
  }  
}
int main(){
    int alp;
    printf("enter the height");
    scanf("%d",&alp);
    alphabet(alp);
    return 0;
}