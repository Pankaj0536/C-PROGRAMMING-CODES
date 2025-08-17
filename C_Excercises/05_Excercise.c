// program to convert differnt units 

#include <stdio.h>
#include <stdlib.h>
 
void km_to_miles();
void Inches_to_Feets();
void Pounds_to_kg();
void Inches_to_Meters();

int main()
{
    int ch;
    while (1)
    {
        printf("1 :: Km to miles\n");
        printf("2 :: inches to feet\n");
        printf("3 :: pounds to kg\n");
        printf("4 :: iches to meters\n");
        printf("5 :: Exit\n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                printf("\t{Km to Miles}\t\n");
                km_to_miles();
                break;

            case 2:
                printf("\t{Inches to Feet}\t\n");
                Inches_to_Feets();
                break;

            case 3:
                printf("\t{Pounds to Kg}\t\n");
                Pounds_to_kg();
                break;

            case 4:
                printf("\t{Inches to Meters}\t\n");
                Inches_to_Meters();
                break;

            case 5 : 
                exit(0);    

            default : 
                printf("Error :: Invalid Choice\n");
        }
    }
    
    return 0;
}

void km_to_miles()
{
    float km , miles;

    printf("Enter The Km : \n");
    scanf("%f",&km);

    miles = km * 0.621;     // 1km=0.621miles

    printf("%0.2f km = %0.2f miles\n\n",km,miles);
}

void Inches_to_Feets()
{
    float Inches , Feets;

    printf("Enter The Inches : \n");
    scanf("%f",&Inches);

    Feets = Inches * 0.0833;     // 1 inches=0.0833feets

    printf("%0.2f Feets = %0.2f Inches\n\n",Inches,Feets);
}

void Pounds_to_kg()
{
    float Pounds , kg;

    printf("Enter The Inches : \n");
    scanf("%f",&Pounds);

    kg = Pounds * 0.454;     // 1 pounds=0.454kg

    printf("%0.2f pounds = %0.2f kg\n\n",Pounds,kg);
}

void Inches_to_Meters()
{
    float Inches , Meters;

    printf("Enter The Inches : \n");
    scanf("%f",&Inches);

    Meters = Inches * 0.0254;     // 1 inches=0.0254meters

    printf("%0.2f Inches = %0.2f Meters\n\n",Inches,Meters);
}