#include <stdio.h>

int main(void) {
    int a[4],k=0;
    for(int i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<4;i++)
    {
        if(a[i]>=10)
        {
            k++;
        }
    }
      printf("%d",k);
	return 0;
}


