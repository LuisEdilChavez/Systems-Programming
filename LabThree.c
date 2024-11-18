#include <stdio.h>
// LUIS CHAVEZ CSIT 231 LAB 3 , GRADE CALCULATOR USING ARRAYS AND WHAT NOT..
double calculateAverage(int grades[], int numGrades);
int countFailingGrades(int grades[], int numGrades);
// Func decs for functions.

// DRIVER FUNC
int main(void)
{
  int numGrades;
  // prompt for user to enter quantity of grades.
  printf("Enter the number of grades: ");
  scanf("%d", &numGrades);
  // ARRAY FOR GRADES
  int grades[numGrades];
  // NUM GRADES = quantity of grades...
  for (int i = 0; i < numGrades; i++)
  {
    printf("Enter grade #%d: ", i + 1);
    scanf("%d", &grades[i]);
  }
  // prints ave and quantity of failing grades.
  printf("Average grade: %.2lf\n", calculateAverage(grades, numGrades));
  printf("Number of failing grades: %d\n", countFailingGrades(grades, numGrades));

  return 0;
}

// func to calc average grades,
double calculateAverage(int grades[], int numGrades)
{
  int sum = 0;
  // sums up all of the grades stored in array
  for (int i = 0; i < numGrades; i++)
  {
    sum += grades[i];
  }
  // returns average ( sum / total),
  return (double)sum / numGrades;
}

// func for counting failing grades.
int countFailingGrades(int grades[], int numGrades)
{
  int count = 0;

  for (int i = 0; i < numGrades; i++)
  {
    if (grades[i] < 70)
    {
      count++;
      // Wasnt compiling because my dumbass forgot a semicolon.
    }
  }

  return count;
}
