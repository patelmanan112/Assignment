#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i ; j++){
            printf(" ");
        }
        for(int k=0; k<2*i-1; k++){
            printf("*");
        } printf("\n");
    }
    for(int l=0; l<=n; l++){
        for(int m=0; m<l; m++){
            printf(" ");
        }
        for(int p=0; p<2*(n-l)-1; p++){
            printf("*");
        } printf("\n");
    }
    return 0;
}