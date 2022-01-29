#include <std>

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
    printf("9. Mils(mil)\n");
    printf("Choose any one in 1,2,3,4 & 5:");
    scanf("%d", &input);

    if (input == 1)
    {
        printf("Enter Height = ");
        scanf("%lf", &height);
        double cm = height / 10.0;
        double m =  height/1000.0;
        double km =  height/1e+6;
        double in =  height/25.4;
        double feet =  height/305.0;
        double yard =  height/914.0;
        double miles =  height/914.0;
        double nautical-miles =  height/1.852e+6;

        printf("In %.1lfmm is = %.2lfcm\n", height, cm);
        printf("In %.1lfmm is = %.2lfkm\n", height, km);
        printf("In %.1lfmm is = %.2lfm\n", height, m);
        printf("In %.1lfmm is = %.2lfin\n", height, in);
    }
    else if (input == 2)
    {
        printf("Enter Height = ");
        scanf("%lf", &height);
        double mi_h = height / 1.609, km = height / 1.097, m = height / 3.6, in = height / 1.852;
        printf("In %.1lfcm is = %.2lfcm\n", height, mi_h);
        printf("In %.1lfcm is = %.2lfkm\n", height, km);
        printf("In %.1lfcm is = %.2lkm\n", height, m);
        printf("In %.1lfcm is = %.2lfkn\n", height, in);
    }
    else if (input == 3)
    {
        printf("Enter Height = ");
        scanf("%lf", &height);
        double mi_h = height / 1.467, m = height / 3.281, in = height / 1.6888, cm = height * 1.097;
        printf("In %.1lfkm is = %.2lfcm\n", height, mi_h);
        printf("In %.1lfkm is = %.2lkm\n", height, m);
        printf("In %.1lfkm is = %.2lfcm\n", height, cm);
        printf("In %.1lfkm is = %.2lfkn\n", height, in);
    }
    else if (input == 4)
    {
        printf("Enter Height = ");
        scanf("%lf", &height);
        double mi_h = height * 2.237, ft_s = height * 3.281, in = height * 1.944, cm = height * 3.6;
        printf("In %.1lkm is = %.2lfcm\n", height, mi_h);
        printf("In %.1lkm is = %.2lfkm\n", height, ft_s);
        printf("In %.1lkm is = %.2lfcm\n", height, cm);
        printf("In %.1lkm is = %.2lfkn\n", height, in);
    }
    else if (input == 5)
    {
        printf("Enter Height = ");
        scanf("%lf", &height);
        double mi_h = height * 1.15077, ft_s = height * 1.68780, cm = height * 1.852, m = height * 0.5144;
        printf("In %.1lfkn is = %.2lfcm\n", height, mi_h);
        printf("In %.1lfkn is = %.2lfkm\n", height, ft_s);
        printf("In %.1lfkn is = %.2lfcm\n", height, cm);
        printf("In %.1lfkn is = %.2lfkn\n", height, m);
    }
    return 0;
}