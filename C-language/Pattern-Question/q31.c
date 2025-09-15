#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
  for(int i=1; i<=n; i++){
    printf("*");
      for(int j=1; j==n || j==1; j++){
          printf("*");
      }
         for(int k=1; k<n; k++){
          printf(" ");
      
    }
  }
    return 0;
}


#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
  for(int i=1; i<=n; i++){
      for(int j=1; j<=n; j++){
          printf("*");
        for(int k=1; k==n || k==1; k++){
          printf("*");
     } printf("\n");
         for(int k=1; k<n; k++){
          printf(" ");
      }
    }
  }
    return 0;
}