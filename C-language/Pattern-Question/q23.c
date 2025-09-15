
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
        int count =0;
    for(int i=0;i<n; i++){
        for(int j=0;j<i;j++){ 
            printf(" ");
        }
    for(int k=0; k<n-i; k++){ // 
        printf("%c",'A'+count);
        // printf("  ");
        count ++;
    }printf("\n");
    count =0;
    }

    return 0;
}