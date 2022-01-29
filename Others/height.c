#include <stdio.h>

int main()
{
    double height;
    int input;
    printf("1. Milimetre (mm)\n");
    printf("2. Centimetre(cm)\n");
    printf("3. Metre(m)\n");
    printf("4. Kilometres(km)\n");
    printf("5. Feet(ft)\n");
    printf("6. Yard(yd)\n");
    printf("7. Miles(mi)\n");
    printf("8. Nautical Miles(NM)\n");
    printf("Choose any one in 1,2,3,4 5,6,7 & 8:");
    scanf("%d", &input);

    if (input == 1)
    {
        printf("Enter Height = ");
        scanf("%lf", &height);
        double cm = height / 10.0;
        double m = height / 1000.0;
        double km = height / 1e+6;
        double in = height / 25.4;
        double feet = height / 305.0;
        double yard = height / 914.0;
        double miles = height / 914.0;
        double nautical_miles = height / 1.852e+6;

        printf("In %.1lfmm is = %.2lfcm\n", height, cm);
        printf("In %.1lfmm is = %lfkm\n", height, km);
        printf("In %.1lfmm is = %.2lfm\n", height, m);
        printf("In %.1lfmm is = %.2lfin\n", height, in);
        printf("In %.1lfmm is = %.2lfft\n", height, feet);
        printf("In %.1lfmm is = %.2lfyd\n", height, yard);
        printf("In %.1lfmm is = %.2lfmi\n", height, miles);
        printf("In %.1lfmm is = %lfNM\n", height, nautical_miles);
    }
    else if (input == 2)
    {
        double mm = height * 10.0;
        double m = height / 100.0;
        double km = height / 100000.0;
        double in = height / 25.4;
        double feet = height / 30.48;
        double yard = height / 91.44;
        double miles = height / 160934.0;
        double nautical_miles = height / 185200.0;
        printf("Enter Height = ");
        scanf("%lf", &height);

        printf("In %.2lfcm is = %.2lfmm\n", height, mm);
        printf("In %.1lfcm is = %.2lfm\n", height, m);
        printf("In %.1lfcm is = %.2lfkm\n", height, km);
        printf("In %.1lfcm is = %.2lfin\n", height, in);
        printf("In %.1lfcm is = %.2lfft\n", height, feet);
        printf("In %.1lfcm is = %.2lfyd\n", height, yard);
        printf("In %.1lfcm is = %.2lfmil\n", height, miles);
        printf("In %.1lfcm is = %.2lfNM\n", height, nautical_miles);
    }
    else if (input == 3)
    {
        double mm = height * 1000.0;
        double cm = height * 100.0;
        double km = height / 1000.0;
        double in = height / 39.37;
        double feet = height / 3.281;
        double yard = height / 1.094;
        double miles = height / 1609.0;
        double nautical_miles = height / 1852.0;
        printf("Enter Height = ");
        scanf("%lf", &height);

        printf("In %.1lfcm is = %.2lfmm\n", height, mm);
        printf("In %.1lfcm is = %.2lfcm\n", height, cm);
        printf("In %.1lfcm is = %.2lfkm\n", height, km);
        printf("In %.1lfcm is = %.2lfin\n", height, in);
        printf("In %.1lfcm is = %.2lfft\n", height, feet);
        printf("In %.1lfcm is = %.2lfyd\n", height, yard);
        printf("In %.1lfcm is = %.2lfmil\n", height, miles);
        printf("In %.1lfcm is = %.2lfNM\n", height, nautical_miles);
    }
    else if (input == 4)
    {
        double mm = height * 1e+6;
        double cm = height * 100000.0;
        double m = height * 1000.0;
        double in = height / 39370.0;
        double feet = height / 3281.0;
        double yard = height / 1094.0;
        double miles = height / 1609.0;
        double nautical_miles = height / 1.852;
        printf("Enter Height = ");
        scanf("%lf", &height);

        printf("In %.1lfcm is = %.2lfmm\n", height, mm);
        printf("In %.1lfcm is = %.2lfcm\n", height, cm);
        printf("In %.1lfcm is = %.2lfkm\n", height, m);
        printf("In %.1lfcm is = %.2lfin\n", height, in);
        printf("In %.1lfcm is = %.2lfft\n", height, feet);
        printf("In %.1lfcm is = %.2lfyd\n", height, yard);
        printf("In %.1lfcm is = %.2lfmil\n", height, miles);
        printf("In %.1lfcm is = %.2lfNM\n", height, nautical_miles);
    }
    else if (input == 5)
    {
        double mm = height * 305.0;
        double cm = height * 30.48;
        double m = height * 3.281;
        double in = height * 12.0;
        double km = height / 3281.0;
        double yard = height / 3.0;
        double miles = height / 5280.0;
        double nautical_miles = height / 6076.0;
        printf("Enter Height = ");
        scanf("%lf", &height);

        printf("In %.1lfcm is = %.2lfmm\n", height, mm);
        printf("In %.1lfcm is = %.2lfcm\n", height, cm);
        printf("In %.1lfcm is = %.2lfkm\n", height, m);
        printf("In %.1lfcm is = %.2lfin\n", height, in);
        printf("In %.1lfcm is = %.2lfft\n", height, km);
        printf("In %.1lfcm is = %.2lfyd\n", height, yard);
        printf("In %.1lfcm is = %.2lfmil\n", height, miles);
        printf("In %.1lfcm is = %.2lfNM\n", height, nautical_miles);
    }
    else if (input == 6)
    {
        double mm = height * 914.0;
        double cm = height * 91.44;
        double m = height / 1.094;
        double in = height * 36.0;
        double km = height / 1094.0;
        double feet = height * 3.0;
        double miles = height / 1760.0;
        double nautical_miles = height / 2025.0;
        printf("Enter Height = ");
        scanf("%lf", &height);

        printf("In %.1lfcm is = %.2lfmm\n", height, mm);
        printf("In %.1lfcm is = %.2lfcm\n", height, cm);
        printf("In %.1lfcm is = %.2lfkm\n", height, m);
        printf("In %.1lfcm is = %.2lfin\n", height, in);
        printf("In %.1lfcm is = %.2lfft\n", height, km);
        printf("In %.1lfcm is = %.2lfyd\n", height, feet);
        printf("In %.1lfcm is = %.2lfmil\n", height, miles);
        printf("In %.1lfcm is = %.2lfNM\n", height, nautical_miles);
    }
    else if (input == 7)
    {
        double mm = height * 1.609e+6;
        double cm = height * 160934.0;
        double m = height / 1609.0;
        double in = height * 63360.0;
        double km = height / 1.609;
        double yard = height * 1760.0;
        double miles = height / 1760.0;
        double nautical_miles = height / 1.151;
        printf("Enter Height = ");
        scanf("%lf", &height);

        printf("In %.1lfcm is = %.2lfmm\n", height, mm);
        printf("In %.1lfcm is = %.2lfcm\n", height, cm);
        printf("In %.1lfcm is = %.2lfkm\n", height, m);
        printf("In %.1lfcm is = %.2lfin\n", height, in);
        printf("In %.1lfcm is = %.2lfft\n", height, km);
        printf("In %.1lfcm is = %.2lfyd\n", height, yard);
        printf("In %.1lfcm is = %.2lfmil\n", height, miles);
        printf("In %.1lfcm is = %.2lfNM\n", height, nautical_miles);
    }
    else if (input == 8)
    {
        double mm = height * 1.852e+6;
        double cm = height * 185200.0;
        double m = height * 1852.0;
        double in = height * 72913.0;
        double km = height * 1.852;
        double yard = height * 2025.0;
        double miles = height * 1.151;
        double feet = height * 6076.0;
        printf("Enter Height = ");
        scanf("%lf", &height);

        printf("In %.1lfcm is = %.2lfmm\n", height, mm);
        printf("In %.1lfcm is = %.2lfcm\n", height, cm);
        printf("In %.1lfcm is = %.2lfkm\n", height, m);
        printf("In %.1lfcm is = %.2lfin\n", height, in);
        printf("In %.1lfcm is = %.2lfft\n", height, km);
        printf("In %.1lfcm is = %.2lfyd\n", height, yard);
        printf("In %.1lfcm is = %.2lfmil\n", height, miles);
        printf("In %.1lfcm is = %.2lfNM\n", height, feet);
    }
    return 0;
}