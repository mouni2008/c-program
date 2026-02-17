#include <stdio.h>
#include <math.h>

int main() {
    int salary,absentdays,finalsalary;
    scanf("%d",&salary);
    scanf("%d",&absentdays);
    finalsalary = salary - (absentdays * 100);

    printf("final salary:$%d",finalsalary); 
    
    return 0;
}
