

#include <stdio.h>

int main()
{
  int n;
  scanf("%d",&n); // 4 
  for(int i=1; i<=n; i++){ // 1 
      for(int j=1; j<=n-i; j++){ // 1 2 3  
          printf(" "); // 
      } 
      
      for(int k=1; k<=2*i-1;  k=k+1){ // 1 
          printf("%d",k);
      }printf("\n");
  }

    return 0;
}