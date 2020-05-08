#include <stdio.h>

int main(){
    int i,num;

    scanf("%d",&num);

    for(i=1;i<=num;i++)
        printf("%d ",((7*(i*i)-(11*i) + 12)/2));

    return 0;
}
