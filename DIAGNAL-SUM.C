#include<stdio.h>
main()
{
               int a[5][5]={{40,46,78},{90,37,95},{12,87,54}};
               int i,j,sum=0;
               for(i=0;i<3;i++)
               {
                              for(j=0;j<3;j++)
                              {
                                             if(i==j)
                                             {
                                                            sum=sum+a[i][j];
                                             }
                                             printf("%d\t",a[i][j]);
                              }
                              printf("\n");
               }
               printf("sum is = %d",sum);
              
}
