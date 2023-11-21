#include <stdio.h>

// membuat variabel global
int nilai = 9;

void main(){
    // membuat variabel lokal
    int nilai = 7;

    // mencetak variabel
    printf("Nilai: %d\n", nilai);
}


// Sekarang coba hapus variabel lokal yang ada di dalam main, sehingga akan menjadi seperti ini:


#include <stdio.h>

// membuat variabel global
int nilai = 9;

void main(){
    // mencetak variabel
    printf("Nilai: %d\n", nilai);
}