#include<stdio.h>
float celsiusToFahrenheit(float c);
float celsiusToKelvin(float c);
float fahrenheitToCelsius(float f);
float fahrenheitToKelvin(float f);
float kelvinToCelsius(float k);
float kelvinToFahrenheit(float k);

int main(){
    printf("Welcome to Temperature Converter!\n");
    while(1){
        printf("\n1. Input Temperature in Celsius Scale\n");
        printf("2. Input Temperature in Fahrenheit Scale\n");
        printf("3. Input Temperature in Kelvin Scale\n");
        printf("4. Exit\n");
        int choice;
        printf("\nPlease enter your choice: ");
        scanf("%d",&choice);
        if(choice==4){
            printf("\nThanks for using our converter. Have a great day!\n");
            break;
        }
        else if(choice==1){
            float temp;
            printf("\nPlease enter the temperature: ");
            scanf("%f",&temp);
            if (temp<-273.15){
                printf("\nInvalid input! Please try again.\n");
            continue;
            }
            float f=celsiusToFahrenheit(temp);
            float k=celsiusToKelvin(temp);
            printf("\nTemperature in Celsius is %0.2f.",temp);
            printf("\nTemperature in Fahrenheit is %0.2f.",f);
            printf("\nTemperature in Kelvin is %0.2f.\n",k);
            printf("\nThanks for using our converter. Convert again or select \'Exit\'.\n");
        }
        else if(choice==2){
            float temp;
            printf("\nPlease enter the temperature: ");
            scanf("%f",&temp);
            if (temp<-459.67){
                printf("\nInvalid input! Please try again.\n");
            continue;
            }
            float c=fahrenheitToCelsius(temp);
            float k=fahrenheitToKelvin(temp);
            printf("\nTemperature in Celsius is %0.2f.",c);
            printf("\nTemperature in Fahrenheit is %0.2f.",temp);
            printf("\nTemperature in Kelvin is %0.2f.\n",k);
            printf("\nThanks for using our converter. Convert again or select \'Exit\'.\n");
        }
        else if(choice==3){
            float temp;
            printf("\nPlease enter the temperature: ");
            scanf("%f",&temp);
            if (temp<0){
                printf("\nInvalid input! Please try again.\n");
            continue;
            }
            float c=kelvinToCelsius(temp);
            float f=kelvinToFahrenheit(temp);
            printf("\nTemperature in Celsius is %0.2f.",c);
            printf("\nTemperature in Fahrenheit is %0.2f.",f);
            printf("\nTemperature in Kelvin is %0.2f.\n",temp);
            printf("\nThanks for using our converter. Convert again or select \'Exit\'.\n");
        }
        else{
            printf("\nInvalid choice! Please select again.\n");
            continue;
        }
    }
return 0;
}

float celsiusToFahrenheit(float c){
    return (c*9/5)+32;
}
float celsiusToKelvin(float c){
    return c+273.15;
}
float fahrenheitToCelsius(float f){
    return (f-32)*5/9;
}
float fahrenheitToKelvin(float f){
    return (f-32)*5/9+273.15;
}
float kelvinToCelsius(float k){
    return k-273.15;
}
float kelvinToFahrenheit(float k){
    return (k-273.15)*9/5+32;
}
