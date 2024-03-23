// a'dan z'ye kadar olan harflerin ascii değeri

#include <stdio.h>

int main() { 

char harf;

for (harf = 'A' ; harf <= 'Z' ; ++harf) {

    printf (" %c = %d\n" , harf, harf);
}


return 0; 

}
