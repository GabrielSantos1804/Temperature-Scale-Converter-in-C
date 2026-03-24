#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string temperature;
    do
    {
        temperature = get_string("Which scale do you want to input? ");
    }
    while (strcmp(temperature, "celcius") != 0 &&
           strcmp(temperature, "fahrenheit") != 0 &&
           strcmp(temperature, "kelvin") != 0);

    // CASO O VALOR SEJA EM CELCIUS
    if (strcmp(temperature, "celcius") == 0)
    {
        string conversion;
        do
        {
            conversion = get_string("Which scale do you want as output? ");
        }
        while (strcmp(conversion, "fahrenheit") != 0 &&
               strcmp(conversion, "kelvin") != 0);

        float value = get_float("Give the value in celcius: ");

        if (strcmp(conversion, "fahrenheit") == 0)
        {
            printf("%.2f\n", (value * 1.8) + 32);
        }
        else if (strcmp(conversion, "kelvin") == 0)
        {
            printf("%.2f\n", value + 273.15);
        }
    }

    if (strcmp(temperature,"fahrenheit") == 0)
    {
         string conversion;
        do
        {
            conversion = get_string("Which scale do you want as output? ");
        }
        while (strcmp(conversion, "celcius") != 0 &&
               strcmp(conversion, "kelvin") != 0);

        float value = get_float("Give the value in fahrenheit: ");

        if (strcmp(conversion, "celcius") == 0)
        {
            printf("%.2f\n", (value - 32)/1.8);
        }
        else if (strcmp(conversion, "kelvin") == 0)
        {
            printf("%.2f\n", (value - 273.15) * 9/5 + 32);
        }
    }

    if (strcmp(temperature,"kelvin") == 0)
    {
         string conversion;
        do
        {
            conversion = get_string("Which scale do you want as output? ");
        }
        while (strcmp(conversion, "celcius") != 0 &&
               strcmp(conversion, "fahrenheit") != 0);

        float value = get_float("Give the value in kelvin: ");

        if (strcmp(conversion, "celcius") == 0)
        {
            printf("%.2f\n", value + 273.15);
        }
        else if (strcmp(conversion, "fahrenheit") == 0)
        {
            printf("%.2f\n", (value - 32) * (5/9) + 273.15);
        }
    }
}
