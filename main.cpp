#include <stdlib.h>
#include <stdio.h>
//#include <pod_wires.cpp>
//#include <drivers.cpp>
int menu(void);
void menu_select(void);
void pod_wires(void);
//pod_fuse(void);
void drivers(void);
//test(void);

int main(void)
 {
   menu_select();
   system("pause");
 }
 
 int menu(void)
 {
   system("chcp 1251");
   system("cls");
   char m[80];
   int c;
   printf("Программное обеспечение для выполнения электромонтажа по ПУЭ\n");
   printf("1-Таблица допустимых нагрузок для сечения проводов\n");
   printf("2-Справочные данные по асинхронным двигателям и авт.выкл.\n");
   printf("3-Выход\n");
    do
      {
       printf("Выберете пункт\n");
       gets(m);
       c = atoi(m);
      }
    while(c<0 || c>3);
    return c;
 }
 //----------------
 void menu_select(void)
   {
    char choice;
    while(true)
       {
         choice = menu();
         switch(choice)
         {
           case 1: pod_wires();break;
           case 2: drivers();break;
           case 3: exit(0);
         }
       }
   system("pause");
 }



