#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int     *ft_range(int start, int end){

   int size;
   int *ptr1;
   int *ptr2;

   size =(end -start);

   if (size)
   {
        ptr2=(int *)malloc(sizeof(int)*size);
        if (ptr2)
        {
            ptr1=ptr2;
            while (start<=end)
            {
                *ptr2=start;
                ptr2++;
                start++;
            }
            return ptr1;
        }
        
   }
   return NULL;
}
