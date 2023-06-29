#include <stdio.h>
#include <stdbool.h>

int main()
{
    float jason = 23.223;
    double jason2 = 5.88987868709e+11;
    bool boolVariable = true;

    short int shortInt = 1;
    long int longInt = 11111;

    printf("Jason: %f\n", jason);

    enum primaryColor
    {
        red,
        blue,
        yellow
    };

    enum primaryColor myColor, yourColor, hisColor, herColor;

    myColor = red;
    yourColor = blue;
    hisColor = yellow;
    herColor = red;

    bool isSameColor = (myColor == herColor);

    printf("isSameColor = %d\n", isSameColor);

    return 0;
}
