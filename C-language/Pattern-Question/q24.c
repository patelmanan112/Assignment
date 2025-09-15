#include <stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int count =0;
  for(int i=n; i>0; i--){
      for(int j=1; j<=n-i+1;j++){
       
          printf("%d",j);
      } ;
      for(int k=n-i; k>0;k--){
          printf("%d",k);
      }printf("\n");
  }

return 0;
}