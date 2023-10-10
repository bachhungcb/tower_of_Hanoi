#include <stdio.h>
#include <stdlib.h>

void giai_thap (int n, char from_rod, char to_rod, char sup_rod){
    if( n == 0) return;
    else{
        giai_thap(n-1, from_rod, sup_rod, to_rod);
        printf("%c -> %c\n", from_rod, to_rod );
        giai_thap(n - 1, sup_rod, to_rod, from_rod);
    }
}

int main(){
    giai_thap(3, 'A', 'C', 'B');
    return 0;
}