#include <stdio.h>

int main()
{
    int choose, ans;
    float convt, unit;
    printf("Types of UNIT Conversion\n");
    printf("========================\n");
    printf("1.Kilometers to Miles\n");
    printf("2.Inches to Feet\n");
    printf("3.Centimeter to Inches\n");
    printf("4.Pounds to Kilograms\n");
    printf("5.Inches to Meter\n");
    printf("========================\n");
    printf("Which conversion do you want to choose ");
    scanf("%d", &choose);
    if (choose == 1)
    {
        printf("Enter Kilometer ");
        scanf("%f", &unit);
        convt = unit / 1.609344;
        printf("%f Kilometers is equal to %f Miles\n", unit, convt);
    }
    else if (choose == 2)
    {
        printf("Enter Inches ");
        scanf("%f", &unit);
        convt = unit * 0.0833333;
        printf("%f Inches is equal to %f Feet\n", unit, convt);
    }
    else if (choose == 3)
    {
        printf("Enter Centimeter ");
        scanf("%f", &unit);
        convt = unit * 0.393701;
        printf("%f Centimeter is equal to %f Inches\n", unit, convt);
    }
    else if (choose == 4)
    {
        printf("Enter Pounds ");
        scanf("%f", &unit);
        convt = unit * 0.453592;
        printf("%f Pounds is equal to %f Kilograms\n", unit, convt);
    }
    else if (choose == 5)
    {
        printf("Enter Inches ");
        scanf("%f", &unit);
        convt = unit * 0.0254;
        printf("%f Inches is equal to %f Meter\n", unit, convt);
    }
    else
    {
        printf("You had entered wrong choice!!!\n");
        printf("Choose again\n");
        main();
    }
    printf("Do you want to do Conversion again \n");
    printf("If YES press 0\n");
    printf("If NO press 1\n");
    printf("Enter your answer ");
    scanf("%d", &ans);
    if (ans == 0)
        main();
    else
        return 0;
}