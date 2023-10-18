#include <stdio.h>
#include <string.h>

int main(){

    int option;
    float man_bmi, man_height, man_weight, woman_bmi, woman_height, woman_weight;

    printf("KALKULATOR BODY MASS INDEX\n");
    printf("Pilih Jenis Kelamin Anda!\n 1.) Pria\n 2.) Wanita\n");
    printf("Pilih\t: "); scanf("%d", &option);
    
    switch(option){
        case 1:
        printf("Tinggi Badan Anda\t: ");
        scanf("%f", &man_height);
        printf("Berat Badan Anda\t: ");
        scanf("%f", &man_weight);

        man_bmi=man_weight/((man_height/100)*(man_height/100));

        printf("Nilai Body Mass Index Anda : %f\n", man_bmi);

        if(17<=man_bmi<=23){
            printf("Selamat, Berat Badan Anda Ideal.\n");
        }else{
            printf("Maaf, Berat Badan Anda Kurang Ideal.\n");
        }
        break;

        case 2:
        printf("Tinggi Badan Anda\t: ");
        scanf("%f", &woman_height);
        printf("Berat Badan Anda\t: ");
        scanf("%f", &woman_weight);
    
        woman_bmi=woman_weight/((woman_height/100)*(woman_height/100));

        printf("Nilai Body Mass Index Anda : %f\n", woman_bmi);

        if(18<=woman_bmi<=25){
            printf("Selamat, Berat Badan Anda Ideal.\n");
        }else{
            printf("Maaf, Berat Badan Anda Kurang Ideal.\n");
        }
        break;
    }
}
