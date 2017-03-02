#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;


int main(){

	srand (time(NULL));
    int numerolancamentos, i, continuar, face = 0;
    float um = 0, dois = 0, tres = 0, quatro = 0, cinco = 0, seis = 0;

    cout<< "Digite o numero de lancamentos a ser efetuado:" <<endl;
    cin>> numerolancamentos;

    do{
        for(i=0; i < numerolancamentos; i++){
            face = (rand() %6) + 1;

            if (face == 1){
                um++;
            }
            if (face == 2){
                dois++;
            }
            if (face == 3){
                tres++;
            }
            if (face == 4){
                quatro++;
            }
            if (face == 5){
                cinco++;
            }
            if (face == 6){
                seis++;
            }
    }
    cout << "\nO percentual do lado um foi de " << (um/6)*100 <<" por cento\n";
    cout << "O percentual do lado dois foi de " << (dois/6)*100 <<" por cento\n";
    cout << "O percentual do lado tres foi de " << (tres/6)*100 <<" por cento\n";
    cout << "O percentual do lado quatro foi de " << (quatro/6)*100 <<" por cento\n";
    cout << "O percentual do lado cinco foi de " << (cinco/6)*100 <<" por cento\n";
    cout << "O percentual do lado seis foi de " << (seis/6)*100 <<" por cento\n\n";

    cout << "Digite zero se deseja parar e qualquer outro numero se deseja continuar.";
    cin >> continuar;
    } while (continuar != 0);
    }
