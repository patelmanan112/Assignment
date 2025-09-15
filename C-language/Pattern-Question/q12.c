#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
for(int i=1; i<=n; i++){ // 1
    for(int j=1;  j<=n-i;  j++){  // 1 2 
  printf(" ", n-i);  //  5 4 3 2 1 
    
    }  
    for(int j=0; j<i; j++ ){  // 0
        printf("%c", 'A'+j);
    }
    printf("\n");
}
return 0;
}