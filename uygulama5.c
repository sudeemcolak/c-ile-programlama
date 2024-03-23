// ilk 10 fibonacci değerini yazdır 

#include <stdio.h>
int main () {

int limit = 10, ilk = 0, ikinci = 1, sonraki;

for (int i = 1; i<= limit; i++) {

printf ("%d\n" , ilk);

sonraki = ilk + ikinci;
ilk = ikinci;
ikinci = sonraki;

}
    return 0;
}