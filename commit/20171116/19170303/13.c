#include<stdio.h>

struct student
{
    char num[100];
    char name[100];
    int score;
};

int main()
{
    struct student stu[100],min,max;
    int n,i;
    scanf("%d",&n);
    for (i=0; i<n; i++)
        scanf("%s %s %d",stu[i].name,stu[i].num,&stu[i].score);
    min=stu[0];
    max=stu[0];
    for (i=0; i<n; i++)
    {
        if(stu[i].score > max.score)
            max=stu[i];
        if(stu[i].score < min.score)
            min=stu[i];
    }
    printf("%s %s\n",max.name,max.num);
    printf("%s %s\n",min.name,min.num);
    return 0;
}
