#include <stdio.h>
int main()
{
    int mt, che, phy, eng, com,per;
    
    printf("Maths = ");
    scanf(" %d", &mt);

    printf("Physics= ");
    scanf(" %d", &phy);

    printf("Chemistry = ");
    scanf(" %d", &che);

    printf("Computer= ");
    scanf(" %d", &com);

    printf("English = ");
    scanf(" %d", &eng);

     per = (mt + phy + che + com + eng)/ 5;

    if (per>=90) printf("Congratulations! Your Grade is A+");
        
        else if (per>=80) printf("Congratulations! Your Grade is A");
        
        else if (per>=70) printf("Congratulations! Your Grade is B");
        
        else if (per>=60) printf("Congratulations! Your Grade is C");
       
        else if (per>=40)  printf("Congratulations! Your Grade is D");
        
        else printf("Better Luck Next Time! You are Fail ");
return 0;
}