#include<stdio.h>
int input(){
  int a;
  printf("Enter a number: ");
  scanf("%d", &a);
  return a;
}
int sum_n(int n){
  int asn=0;
  for(int i=1; i<=n; i++){
}
return asn;
}
void output(int n, int sum){
  for(int i=1; i<n; i++){
    printf("%d+", i);
}
printf("%d is %d\n", n,sum);
}
int main(){
  int n, sum;
  sum = input();
  sum = sum_n(n);
  output(n, sum);
  return 0;
}