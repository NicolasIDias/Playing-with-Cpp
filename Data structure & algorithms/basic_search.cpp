#include <iostream>
#include <stdlib.h>

#include <stdio.h>
using namespace std;

int main(){
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    int search;
    int position;
    bool valueFound = false;

    cout << "Number to search: ";
    scanf("%i", &search);

    for(int i=0;i<sizeof(array)/4;i++){
        if(search == array[i]){
            valueFound = true;
            position = i;
        }
    }
    valueFound == 1 ? printf("Numero encontrado na posicao %i do array", position) : printf("Numero nao encontrado");
    return 0;
}
