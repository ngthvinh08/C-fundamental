/*
Viet chuong trinh swap 2 so ma khong dung bien tam temp
*/

#include <stdio.h>

int swap (int *a, int *b){
    // Gia su a = 6, b = 10
    
    *a = *a + *b; // Luc nay a = 16
    *b = *a - *b; // Luc nay b = 16 - 10 = 6, chinh la a luc dau
    *a = *a - *b; // Luc nay a = 16 - 6 = 10, chinh la b luc dau

}
int main(){
    int x = 5, y = 10;
    swap (&x, &y);
    printf ("Sau khi swap: x = %d\n", x);
    printf ("Sau khi swap: y = %d\n", y);
    return 0;
}

// Day la cach so 1, con 1 cach nua la dung phep XOR