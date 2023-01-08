#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    int ary[num];
    for(int y=num-1;y>-1;y--){
        ary[y]=arr[num-y-1];
    }
    for(int k=0;k<num;k++){
        arr[k]=ary[k];
    }
    


    /* Write the logic to reverse the array. */

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
