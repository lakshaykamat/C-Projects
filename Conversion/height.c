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
        printf("Enter Height = ");
        scanf("%lf", &height);
        double mm = height * 10.0;
        double m = height / 100.0;
        double km = height / 100000.0;
        double in = height * 0.393700;
        double feet = height / 30.48;
        double yard = height / 91.44;
        double miles = height / 160934.0;
        double nautical_miles = height / 185200.0;

        printf("In %.1lfcm is = %.2lfmm\n", height, mm);
        printf("In %.1lfcm is = %.2lfm\n", height, m);
        printf("In %.1lfcm is = %lfkm\n", height, km);
        printf("In %.1lfcm is = %.2lfin\n", height, in);
        printf("In %.1lfcm is = %.2lfft\n", height, feet);
        printf("In %.1lfcm is = %.2lfyd\n", height, yard);
        printf("In %.1lfcm is = %lfmi\n", height, miles);
        printf("In %.1lfcm is = %lfNM\n", height, nautical_miles);
    }
    else if (input == 3)
    {
        printf("Enter Height = ");
        scanf("%lf", &height);
        double mm = height * 1000.0;
        double cm = height * 100.0;
        double km = height / 1000.0;
        double in = height * 39.370078;
        double feet = height * 3.281;
        double yard = height * 1.094;
        double miles = height / 1609.0;
        double nautical_miles = height / 1852.0;

        printf("In %.1lfm is = %.2lfmm\n", height, mm);
        printf("In %.1lfm is = %.2lfcm\n", height, cm);
        printf("In %.1lfm is = %.2lfkm\n", height, km);
        printf("In %.1lfm is = %.2lfin\n", height, in);
        printf("In %.1lfm is = %.2lfft\n", height, feet);
        printf("In %.1lfm is = %.2lfyd\n", height, yard);
        printf("In %.1lfm is = %lfmi\n", height, miles);
        printf("In %.1lfm is = %lfNM\n", height, nautical_miles);
    }
    else if (input == 4)
    {
        printf("Enter Height = ");
        scanf("%lf", &height);
        double mm = height * 1e+6;
        double cm = height * 100000.0;
        double m = height * 1000.0;
        double in = height * 39370.0;
        double feet = height * 3281.0;
        double yard = height * 1094.0;
        double miles = height * 0.6213711;
        double nautical_miles = height / 1.852;

        printf("In %.1lfkm is = %.2lfmm\n", height, mm);
        printf("In %.1lfkm is = %.2lfcm\n", height, cm);
        printf("In %.1lfkm is = %.2lfm\n", height, m);
        printf("In %.1lfkm is = %.2lfin\n", height, in);
        printf("In %.1lfkm is = %.2lfft\n", height, feet);
        printf("In %.1lfkm is = %.2lfyd\n", height, yard);
        printf("In %.1lfkm is = %.2lfmi\n", height, miles);
        printf("In %.1lfkm is = %.2lfNM\n", height, nautical_miles);
    }
    else if (input == 5)
    {
        printf("Enter Height = ");
        scanf("%lf", &height);
        double mm = height * 305.0;
        double cm = height * 30.48;
        double m = height * 0.3048;
        double in = height * 12.0;
        double km = height * 0.0003048;
        double yard = height / 3.0;
        double miles = height * 0.0001893939;
        double nautical_miles = height * 0.0001645788;
        printf("In %.1lfft is = %.2lfmm\n", height, mm);
        printf("In %.1lfft is = %.2lfcm\n", height, cm);
        printf("In %.1lfft is = %.2lfm\n", height, m);
        printf("In %.1lfft is = %.2lfin\n", height, in);
        printf("In %.1lfft is = %.2lfkm\n", height, km);
        printf("In %.1lfft is = %.2lfyd\n", height, yard);
        printf("In %.1lfft is = %.2lfmi\n", height, miles);
        printf("In %.1lfft is = %.2lfNM\n", height, nautical_miles);
    }
    else if (input == 6)
    {
        printf("Enter Height = ");
        scanf("%lf", &height);
        double mm = height * 914.0;
        double cm = height * 91.44;
        double m = height / 1.094;
        double in = height * 36.0;
        double km = height / 1094.0;
        double feet = height * 3.0;
        double miles = height / 1760.0;
        double nautical_miles = height / 2025.0;

        printf("In %.1lfyd is = %.2lfmm\n", height, mm);
        printf("In %.1lfyd is = %.2lfcm\n", height, cm);
        printf("In %.1lfyd is = %.2lfm\n", height, m);
        printf("In %.1lfyd is = %.2lfin\n", height, in);
        printf("In %.1lfyd is = %.2lfkm\n", height, km);
        printf("In %.1lfyd is = %.2lfft\n", height, feet);
        printf("In %.1lfyd is = %.2lfmi\n", height, miles);
        printf("In %.1lfyd is = %.2lfNM\n", height, nautical_miles);
    }
    else if (input == 7)
    {
        printf("Enter Height = ");
        scanf("%lf", &height);
        double mm = height * 1609344.0;
        double cm = height * 160934.0;
        double m = height * 1609.344;
        double in = height * 63360.0;
        double km = height * 1.609;
        double yard = height * 1760.0;
        double feet = height * 5280.0;
        double nautical_miles = height / 1.151;

        printf("In %.1lfmi is = %.2lfmm\n", height, mm);
        printf("In %.1lfmi is = %.2lfcm\n", height, cm);
        printf("In %.1lfmi is = %.2lfm\n", height, m);
        printf("In %.1lfmi is = %.2lfin\n", height, in);
        printf("In %.1lfmi is = %.2lfkm\n", height, km);
        printf("In %.1lfmi is = %.2lfyd\n", height, yard);
        printf("In %.1lfmi is = %.2lfft\n", height, feet);
        printf("In %.1lfmi is = %.2lfNM\n", height, nautical_miles);
    }
    else if (input == 8)
    {
        printf("Enter Height = ");
        scanf("%lf", &height);
        double mm = height * 1.852e+6;
        double cm = height * 185200.0;
        double m = height * 1.852;
        double in = height * 72913.385;
        double km = height * 1.852;
        double yard = height * 2025.0;
        double miles = height * 1.151;
        double feet = height * 6076.1154855;

        printf("In %.1lfNM is = %.2lfmm\n", height, mm);
        printf("In %.1lfNM is = %.2lfcm\n", height, cm);
        printf("In %.1lfNM is = %.2lfkm\n", height, m);
        printf("In %.1lfNM is = %.2lfin\n", height, in);
        printf("In %.1lfNM is = %.2lfkm\n", height, km);
        printf("In %.1lfNM is = %.2lfyd\n", height, yard);
        printf("In %.1lfNM is = %.2lfmi\n", height, miles);
        printf("In %.1lfNM is = %.2lfft\n", height, feet);
    }
    else{
        printf("Invaild Input ! :(");
    }
    return 0;
}