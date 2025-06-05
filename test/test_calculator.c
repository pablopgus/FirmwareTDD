// en test/test_calculator.c

#include "unity.h"
#include "calculator.h" // <-- ¡Esto dará un error de compilación!

void setUp(void) {
    // Código de inicialización (si es necesario)
}

void tearDown(void) {
    // Código de limpieza (si es necesario)
}

// Nuestra primera prueba
void test_calculator_add_should_returnTheSumOfTwoPositiveNumbers(void) {
    // Comprueba si 2 + 3 = 5
    TEST_ASSERT_EQUAL_INT(5, calculator_add(2, 3));
}