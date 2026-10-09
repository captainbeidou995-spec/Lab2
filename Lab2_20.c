#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>   
#include <math.h>   

int main(void) {
    double x = 0, y = 0, z = 0;
    double x1 = 0, x2 = 0, x3 = 0;

    double res3 = 0;
    double res6 = 0;
    double res7 = 0.0;
    double res10 = 0.0;
    double res29 = 0.0;

    printf("Enter x, y, z :\n");
    scanf("%lf %lf %lf", &x, &y, &z);

    printf("Enter x1, x2, x3:\n");
    scanf("%lf %lf %lf", &x1, &x2, &x3);



    /* Task 3 */
    double denom31 = y + 1.0;
    double denom32 = 34.0 + x;

    if (denom31 == 0.0) {
        printf("Task 3: Error (y + 1 = 0)\n");
    }
    else if (denom32 == 0.0) {
        printf("Task 3: Error (34 + x = 0)\n");
    }
    else {
        res3 = (x + y) / denom31 - (x * y - 12.0) / denom32;
        printf("Task 3 (res3) = %.4f\n", res3);
    }

    /* Task 6 */
    double denom6 = x;
    if (denom6 < 1.0) {
        printf("Task 6: Error (impossible for x < 1)\n");
    }
    else {
        res6 = sin(sqrt(denom6 + 1.0)) - sin(sqrt(denom6 - 1.0));
        printf("Task 6 (res6) = %.4f\n", res6);
    }

    /* Task 7 */
    double denom71 = tan(x);
    double denom72 = cos(x);
    double denom73 = sin(x);

    if (denom71 = 0) {
        printf("Task 7: Error\n");
    }
    else if (denom72 = 0) {
        printf("Task 7: Error\n");
    }
    else  if (denom73 = 0) {
        printf("Task 7: Error\n");
    }
    else {
        res7 = pow(1.0 - tan(x), 1.0 / tan(x)) + cos(x - y);
        printf("Task 7 (res7) = %.4f\n", res7);
    }

    /* Task 10 */
    double denom10 = x;

    if (denom10 = 0) {
        printf("Task 10: Error\n");
    }
    else {
        res10 = pow(1.0 + 1.0 / (x * x), x) - 12.0 * x * x * y;
        printf("Task 10 (res10) = %.4f\n", res10);
    }

    /* Task 29 */
    double denom29 = x;

    if (denom29 = 0) {
        printf("Task 29: Error\n");
    }
    else {
        res10 = (x1 * x2 + x1 * x3 + x2 * x3) / x;
        printf("Task 29 (res29) = %.4f\n", res29);
    }

    return 0;
}