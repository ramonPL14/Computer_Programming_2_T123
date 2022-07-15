#include <stdio.h>
int addGrades(int s1, int s2, int s3, int s4, int s5) {
      int sum;
      sum = s1 + s2 + s3 + s4 + s5;
     
    return sum;
}
int main()
{    
    int math, science, english, filipino, history, avg;
     
    printf("Enter your grade in Math: ");
      scanf("%d", &math);
      printf("Enter your grade in Science: ");
     
    scanf("%d", &science);
     
    printf("Enter your grade in English: ");
      scanf("%d", &english);
     
    printf("Enter your grade in Filipino: ");
      scanf("%d", &filipino);
     
    printf("Enter your grade in Histroy: ");
      scanf("%d", &history);
      avg = addGrades(math, science, english, filipino, history);
      avg /= 5;
      printf("\nAVERAGE = %d\n", avg);
      if(avg > 0) 
      printf("\nGreat job!");
      printf(" Plus Ultra!");
      return 0;
}    