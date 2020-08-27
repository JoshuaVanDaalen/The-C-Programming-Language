#include <stdio.h>
#include "orders.h"

// To build this file run the following
// cl orders.c main.c /Feorder_calc.exe

int main(int argc, char *argv[])
{
    double order_subtotal = 50.00;

    double grand_total = calculate_order_total(order_subtotal);

    printf("Grand total: %lf", grand_total);
}
