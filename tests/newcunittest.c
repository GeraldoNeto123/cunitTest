/*
 * File:   newcunittest.c
 * Author: aluno
 *
 * Created on 16/10/2019, 09:38:03
 */

#include <stdio.h>
#include <stdlib.h>
#include <CUnit/Basic.h>

/*
 * CUnit Test Suite
 */

int init_suite(void) {
    return 0;
}

int clean_suite(void) {
    return 0;
}

void mictorio1() {
    int n = 1;
    int qtdMictorio[n];
    for(int i=0; i<n; i++)
        qtdMictorio[i]=0;
    int retorno = verificaMictorio(qtdMictorio, n);
    CU_ASSERT_EQUAL(retorno, 1);
}

void mictorioOcupado1() {
    
    int n = 1;
    int qtdMictorio[n];
    for(int i=0; i<n; i++)
        qtdMictorio[i]=0;
    qtdMictorio[0]=1;
    int retorno = verificaMictorio(qtdMictorio, n);
    CU_ASSERT_EQUAL(retorno, 0);
}

void mictorio2() {
    int n = 2;
    int qtdMictorio[n];
    for(int i=0; i<n; i++)
        qtdMictorio[i]=0;
    int retorno = verificaMictorio(qtdMictorio, n);
    CU_ASSERT_EQUAL(retorno, 1);
}
void mictorioOcupado2() {
    int n = 2;
    int qtdMictorio[n];
    for(int i=0; i<n; i++)
        qtdMictorio[i]=0;
    qtdMictorio[0]=1;
    int retorno = verificaMictorio(qtdMictorio, n);
    CU_ASSERT_EQUAL(retorno, 0);
}

void mictorio3() {
    int n = 3;
    int qtdMictorio[n];
    for(int i=0; i<n; i++)
        qtdMictorio[i]=0;
    int retorno = verificaMictorio(qtdMictorio, n);
    CU_ASSERT_EQUAL(retorno, 2);
}

void mictorioOcupado3() {
    int n = 3;
    int qtdMictorio[n];
    for(int i=0; i<n; i++)
        qtdMictorio[i]=0;
    qtdMictorio[0]=1;
    int retorno = verificaMictorio(qtdMictorio, n);
    CU_ASSERT_EQUAL(retorno, 1);
}
void mictorio4() {
    int n = 4;
    int qtdMictorio[n];
    for(int i=0; i<n; i++)
        qtdMictorio[i]=0;
    qtdMictorio[0]=1;
    qtdMictorio[3]=1;
    int retorno = verificaMictorio(qtdMictorio, n);
    CU_ASSERT_EQUAL(retorno, 0);
}
void mictorio6() {
    int n = 6;
    int qtdMictorio[n];
    for(int i=0; i<n; i++)
        qtdMictorio[i]=0;
    int retorno = verificaMictorio(qtdMictorio, n);
    CU_ASSERT_EQUAL(retorno, 3);
}

void mictorioOcupado6() {
    int n = 6;
    int qtdMictorio[n];
    for(int i=0; i<n; i++)
        qtdMictorio[i]=0;
    qtdMictorio[0]=1;
    int retorno = verificaMictorio(qtdMictorio, n);
    CU_ASSERT_EQUAL(retorno, 2);
}

void mictorio6Vagas2() {
    int n = 6;
    int qtdMictorio[n];
    for(int i=0; i<n; i++)
        qtdMictorio[i]=0;
    qtdMictorio[0]=1;
    qtdMictorio[1]=1;
    int retorno = verificaMictorio(qtdMictorio, n);
    CU_ASSERT_EQUAL(retorno, 2);
}

void mictorio6Vagas3() {
    int n = 6;
    int qtdMictorio[n];
    for(int i=0; i<n; i++)
        qtdMictorio[i]=0;
    qtdMictorio[0]=1;
    qtdMictorio[1]=1;
    qtdMictorio[2]=1;
    int retorno = verificaMictorio(qtdMictorio, n);
    CU_ASSERT_EQUAL(retorno, 1);
}
int main() {
    CU_pSuite pSuite = NULL;

    /* Initialize the CUnit test registry */
    if (CUE_SUCCESS != CU_initialize_registry())
        return CU_get_error();

    /* Add a suite to the registry */
    pSuite = CU_add_suite("newcunittest", init_suite, clean_suite);
    if (NULL == pSuite) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Add the tests to the suite */
    if ((NULL == CU_add_test(pSuite, "mictorio1", mictorio1))||
            (NULL == CU_add_test(pSuite, "mictorioOcupado1", mictorioOcupado1))||
            (NULL == CU_add_test(pSuite, "mictorio2", mictorio2))||
            (NULL == CU_add_test(pSuite, "mictorioOcupado2", mictorioOcupado2))||
            (NULL == CU_add_test(pSuite, "mictorio3", mictorio3))||
            (NULL == CU_add_test(pSuite, "mictorioOcupado3", mictorioOcupado3))||
            (NULL == CU_add_test(pSuite, "mictorio6", mictorio6))||
            (NULL == CU_add_test(pSuite, "mictorioOcupado6", mictorioOcupado6))||
            (NULL == CU_add_test(pSuite, "mictorio6Vagas2", mictorio6Vagas2))||
            (NULL == CU_add_test(pSuite, "mictorio6Vagas3", mictorio6Vagas3))||
            (NULL == CU_add_test(pSuite, "mictorio4", mictorio4))) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Run all tests using the CUnit Basic interface */
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();
    return CU_get_error();
}
