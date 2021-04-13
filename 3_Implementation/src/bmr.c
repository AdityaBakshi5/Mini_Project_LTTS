#include <stdio.h>
#include "../inc/bmi_bmr_fatPercent.h"

float bmr(float *weight_in_kg, float *height_in_m, int *age, char *Gender)
{
    switch (*Gender)
    {
    case 'M':
        printf("The amount of calories needed for normal functioning of body:\t");
        return (66 + (13.75 * (*weight_in_kg)) + (500 * (*height_in_m)) - (6.8 * (*age)));
        break;
    case 'F':
        printf("The amount of calories needed for normal functioning of body:\t");
        return (655.1 + (9.563 * (*weight_in_kg)) + (1.85 * (*height_in_m)) - (4.676 * (*age)));
        break;
    default:
        printf("Invalid Entry\n");
        break;
    }
}