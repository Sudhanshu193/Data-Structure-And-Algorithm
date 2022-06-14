#include<stdio.h>
int validation(char password[])
{
    for (int i = 0; password[i] != '\0'; i++)
    {
        if (!(password[i] >=65 && password[i] <=90) || !(password[i]>=97 && password[i]<=122) || !(password[i]>=48 && password[i]<=57))
        {
            return 0;
        }
        
    }
    return 1;
    
}
int main()
{
    char password[]="helboy123";
    
    if (validation(password))
    {
        printf("The password is correct.");
    }
    else
        printf("The password is wrong.");
    


}