#include <stdio.h>

int main()
{
    double speed;
    int input;
    printf("1. Miles per hour\n");
    printf("2. Kilometre per hour \n");
    printf("3. Foot per second\n");
    printf("4. Metre per second\n");
    printf("5. Knots\n");
    printf("Choose any one in 1,2,3,4 & 5:");
    scanf("%d", &input);

    if (input == 1)
    {
        printf("Enter Speed = ");
        scanf("%lf", &speed);
        double km_h = speed * 1.609, f_s = speed * 1.467, mt_s = speed / 2.237, kn = speed / 1.151;
        printf("In %.1lfmi/h is = %.2lfkm/h\n", speed, km_h);
        printf("In %.1lfmi/h is = %.2lfft/s\n", speed, f_s);
        printf("In %.1lfmi/h is = %.2lfm/s\n", speed, mt_s);
        printf("In %.1lfmi/h is = %.2lfkn\n", speed, kn);
    }
    else if (input == 2)
    {
        printf("Enter Speed = ");
        scanf("%lf", &speed);
        double mi_h = speed / 1.609, f_s = speed / 1.097, mt_s = speed / 3.6, kn = speed / 1.852;
        printf("In %.1lfkm/h is = %.2lfmi/h\n", speed, mi_h);
        printf("In %.1lfkm/h is = %.2lfft/s\n", speed, f_s);
        printf("In %.1lfkm/h is = %.2lfm/s\n", speed, mt_s);
        printf("In %.1lfkm/h is = %.2lfkn\n", speed, kn);
    }
    else if (input == 3)
    {
        printf("Enter Speed = ");
        scanf("%lf", &speed);
        double mi_h = speed / 1.467, mt_s = speed / 3.281, kn = speed / 1.6888, km_h = speed * 1.097;
        printf("In %.1lfft/s is = %.2lfmi/h\n", speed, mi_h);
        printf("In %.1lfft/s is = %.2lfm/s\n", speed, mt_s);
        printf("In %.1lfft/s is = %.2lfkm/h\n", speed, km_h);
        printf("In %.1lfft/s is = %.2lfkn\n", speed, kn);
    }
    else if (input == 4)
    {
        printf("Enter Speed = ");
        scanf("%lf", &speed);
        double mi_h = speed * 2.237, ft_s = speed * 3.281, kn = speed * 1.944, km_h = speed * 3.6;
        printf("In %.1lfm/s is = %.2lfmi/h\n", speed, mi_h);
        printf("In %.1lfm/s is = %.2lfft/s\n", speed, ft_s);
        printf("In %.1lfm/s is = %.2lfkm/h\n", speed, km_h);
        printf("In %.1lfm/s is = %.2lfkn\n", speed, kn);
    }
    else if (input == 5)
    {
        printf("Enter Speed = ");
        scanf("%lf", &speed);
        double mi_h = speed * 1.15077, ft_s = speed * 1.68780, km_h = speed * 1.852, mt_s = speed * 0.5144;
        printf("In %.1lfkn is = %.2lfmi/h\n", speed, mi_h);
        printf("In %.1lfkn is = %.2lfft/s\n", speed, ft_s);
        printf("In %.1lfkn is = %.2lfkm/h\n", speed, km_h);
        printf("In %.1lfkn is = %.2lfkn\n", speed, mt_s);
    }
    return 0;
}