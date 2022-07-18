#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{

  int num,i,a,id,math,science,english;
  float total;
  char fileName[100],name[100];
  float avrg;
  FILE *fptr;

  printf("Enter number of students: ");
  scanf("%d", &num);

   for(i = 0; i < num; i++)
  {
    printf("Student Name: ", i+1);
    scanf("%s",&name);
    
    printf("Student ID Number: ");
    scanf("%d", &id);

    printf("Math Grade: ");
    scanf("%d", &math);

    printf("Science Grade: ");
    scanf("%d", &science);

    printf("English Grade: ");
    scanf("%d", &english);
    
    total = math + science + english ;
    printf("Total Grade: %.2f\n",total);
    printf("Grade Average: %.2f\n",total/3);

    sprintf(fileName, "Student%d.txt", i+1);
    fptr = fopen(fileName, "w");
    fprintf(fptr,"Name: %s \n Student ID Number: %d \nMath Grade: %d \nScience Grade: %d \nEnglish Grade: %d \nTotal Grade: %.2f \nGrade Average: %.2f", name, id, math, science, english, total, total/3);

    }
    fclose(fptr);
    return 0;
}

