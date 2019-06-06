#include <stdlib.h>
#include <stdio.h>

void pod_wires(void)
{
 system("cls");
 struct wires
 {
   float sech;
   int wir2;
   int wir3;
   int wir4;
   float pow220;
   float pow380;
 };
 wires list[] =
   {
    {1, 16, 15, 14, 3.7, 6.4},
    {1.5, 19, 17, 16, 5, 8.7},
    {2, 24, 22, 20, 5.7, 9.8},
    {2.5, 27, 25, 25, 6.6, 11.0},
    {4, 38, 35, 30, 9.0, 15.0},
    {5, 42, 39, 34, 11.0, 19.0},
    {10, 70, 60, 50, 17.0, 30.0},
    {16, 85, 80, 75, 22.0, 38.0},
    {25, 115, 100, 90, 30.0, 53.0},
    {35, 135, 125, 115, 37.0, 64.0}
   };

 printf("______________________________________________________________________\n");
 printf("%71.100s\n","���������� ���,�       | ��������,���              |");
 printf("----------------------------------------------------------------------\n");
 printf("%s| %s| %s| %s| %s| %s|\n", " ������� ����,��2", "2 ����", "3 ����", "4 ���� ","�������� 220", "�������� 380");
 printf("----------------------------------------------------------------------\n");
 for (int i=0;i<sizeof(list)/sizeof(wires);++i)
 {
  printf("%16.1f |%6.2d |%6.2d |%7.2d |%12.2f |%13.2f|\n",list[i].sech,list[i].wir2,list[i].wir3,list[i].wir4,list[i].pow220,list[i].pow380);
  }
 system("pause");

}