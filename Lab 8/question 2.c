#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int arr1[3][3]={3,2,4,1,4,6,4,3,2};
    int arr2[3][3]={2,6,3,4,3,2,5,1,7};
    int arr3[3][3];

    for (i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
     {
         printf("%d ",arr1[i][j]);
     }
     printf("\t");
     for(j=0;j<3;j++)
     {
         printf("%d ",arr2[i][j]);
     }
     printf("\t");
     for(j=0;j<3;j++)
     {
         arr3[i][j]=arr1[i][j]+arr2[i][j];
         printf("%d ",arr3[i][j]);
     }
     printf("\n");
    }
    return 0;
}
