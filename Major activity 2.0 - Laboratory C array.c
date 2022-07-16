//Re-uploaded

#include <stdio.h>
int profile(int num[3][2],int id, int pin) {
    int flag = 0;
    for(int i = 0; i<3; i++)
    {
        if(id == num[i][0] && pin == num[i][1])
        {
            flag = 1;
        }
    }
    return flag;
}
int main()
{   int num[3][2] = {{1234,0000},{2345,0000},{3456,0000}};
    int id,pin;
    printf("Enter ID Number: ");
    scanf("%d",&id);
    printf("Enter PIN: ");
    scanf("%d",&pin);
    if(profile(num,id,pin))
    {
        printf("You have successfully logged in\nID#:%d",id);
    }
    else
    {   printf("Invalid ID/PIN!");
    }
    return 0;
}
