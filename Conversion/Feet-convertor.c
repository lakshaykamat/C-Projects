#include <stdio.h>
int main(int argc, char const *argv[])
{
    double feet,milimetres,centimetres,metres,kilometres,inch,yard,miles,nautical_miles,mils;
    printf("Enter Feet = ");
    scanf("%lf", &feet);

    milimetres = feet * 304.8;
    centimetres = feet * 30.48;
    metres = feet * 0.3048;
    kilometres = feet * 0.0003048;
    inch = feet * 12;
    yard = feet * 0.3333333333;
    miles = feet * 0.0001893939;
    nautical_miles = feet * 0.0001645788;
    mils = feet * 12000;

    printf("\nIn %.1lf feet Total Milimetres is = %.1lfmm\n\n", feet, milimetres);
    printf("In %.1lf feet Total Centimetres is = %.1lfcm\n\n", feet, centimetres);
    printf("In %.1lf feet Total Metres is = %.1lfm\n\n", feet, metres);
    printf("In %.1lf feet Total Kilometres is = %.1lfkm\n\n", feet, kilometres);
    printf("In %.1lf feet Total Inch is = %.1lfin\n\n", feet, inch);
    printf("In %.1lf feet Total Yard is = %.1lfy\n\n", feet, yard);
    printf("In %.1lf feet Total Miles is = %.1lfmi\n\n", feet, miles);
    printf("In %.1lf feet Total Nautical Miles is = %.1lfNM\n\n", feet, nautical_miles);
    printf("In %.1lf feet Total Mils is = %.1lfmil\n\n", feet, mils);

    return 0;
}
