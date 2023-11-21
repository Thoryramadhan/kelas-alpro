#include <stdio.h>

// membuat fungsi say_hello()
void say_hello(){
    printf("Hello Selamat Datang!\n");
}

void main(){
    // memanggil fungsi say_hello()
    say_hello();
}


// Fungsi say_hello() dapat kita panggil berulang kali pada fungsi main(). Contoh :


#include <stdio.h>

// membuat fungsi say_hello()
void say_hello(){
    printf("Hello Selamat Datang!\n");
}

void main(){
    // memanggil fungsi say_hello()
    say_hello();
    say_hello();
    say_hello();
}