#include <stdio.h>

int main() {

  int type;
  int a,b,c;

  while(1){

    scanf("%d %d %d", &a, &b, &c);
    if(a==0 && b==0 && c==0) break;
    if(b-a == c-b) type = 1;
    else if(b/a == c/b) type =2;
    else type = 0;

    if(type == 1){
      int d = c + (c-b);
      printf("AP %d\n", d);
    }else if(type == 2){
      int d = c * (c/b);
      printf("GP %d\n", d);
    }

  }

  return 0;
}