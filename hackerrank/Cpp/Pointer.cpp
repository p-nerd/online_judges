#include <stdio.h>
#include <iostream>
using namespace std;

void update(int *a,int *b) {
    int tmp = *a;
    *a += *b;
    *b = *b-tmp;
    if (*b < 0) *b *= -1;  
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
