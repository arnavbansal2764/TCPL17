#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "head.h"
int add(STUDENTS stu[])  
{  int i,x;  
   for(i=0;i<1000;i++)  
   {  
    system("cls");    
    printf("\n\n  录入图书信息  (最多%d本)\n",MAX);  
    printf(" \n");  
     
        printf("\n  第%d本图书",k+1);  
        printf("\n 请输入图书的ISBN:");  
        scanf("%d",&stu[k].num);  
        printf("\n 请输入图书的书名:");  
        scanf("%s",stu[k].name);   
        printf("\n 请输入图书的作者:");  
        scanf("%s",stu[k].author);  
        printf("\n 请输入图书的价格:");  
        scanf("%f",&stu[k++].price);  
        printf("\n 请按1键返回菜单或按0键继续创建");  
        scanf("%d",&x);  
    if(x)  
      break;  
   }  
        
       return k;  
}  
