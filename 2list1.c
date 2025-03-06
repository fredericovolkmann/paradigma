#include <stdio.h>
 int F;
 int a;
int main() {
 scanf("%d",&a);
 for (F=1;a>1; a= a-1)
 {
    F = F*a;
 }
printf("\n%d",F);
return 0;
}


