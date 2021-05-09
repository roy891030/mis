#include <stdio.h>
#include <stdlib.h>

struct data
{
    char name[10]; //人名
    char class;    //班級
    int eng;       //英文成績
    int math;      //數學成績
};

void WhoBest(struct data *); //看誰的英文考最高
void average(struct data *); //計算班級的數學平均函數

int main()
{

    struct data student[6] =
        {//六人之資訊
         {"roy", 'A', 0, 100},
         {"Astrid", 'B', 60, 80},
         {"Bob", 'A', 20, 80},
         {"Cat", 'B', 20, 50},
         {"Dog", 'A', 30, 20},
         {"Dug", 'B', 20, 100}};
    WhoBest(student);
    average(student);
}
void WhoBest(struct data *student)
{
    int i;
    int max = 0;
    int idi = 0;
    for (i = 0; i < 6; i++)
    {
        if (student[i].eng > max)
        {
            max = student[i].eng;
            idi = i;
        }
    }
    printf("\"%s\" get the heighest score: %d\n", student[idi].name, student[idi].eng);
}
void average(struct data *student)
{
    int i;
    int sumA, sumB;
    int countA = 0;
    int countB = 0;
    for (i = 0; i < 6; i++)
    {
        switch (student[i].class)
        {
        case 'A':
            sumA += student[i].math;
            countA++;
            break;
        case 'B':
            sumB += student[i].math;
            countB++;
            break;
        }
    }
    printf("Class A is :%d\nClass B is :%d\n", sumA / countA, sumB / countB);
}