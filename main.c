/* 
 * File:   main.c
 * Author: aluno
 *
 * Created on 16 de Outubro de 2019, 09:37
 */

#include <stdio.h>
#include <stdlib.h>

int verificaMictorio(int *qtdMictorio, int n){
    int cont = 0;
    for(int i=0; i<n; i++){
        if(i>0 && i!=n-1){
            if(qtdMictorio[i] == 0){
                if(qtdMictorio[i+1] == 0 && qtdMictorio[i-1] == 0){
                    qtdMictorio[i]=1;
                    cont++;
                }
            }
        }else if(i==n-1){
            if(qtdMictorio[i] == 0 && qtdMictorio[i-1] == 0){
                qtdMictorio[i]=1;
                cont++;
            }
        }else if(i==0){
            if(qtdMictorio[i] == 0 && qtdMictorio[i+1] == 0){
                qtdMictorio[i]=1;
                cont++;
            }
        }
            
            
    }   
    
    return cont;
}
/*
 * 
 */
int main(int argc, char** argv) {

    return (EXIT_SUCCESS);
}

