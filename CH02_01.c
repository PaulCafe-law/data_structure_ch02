#include <stdio.h>
#include <stdlib.h>

int main()
{
     int Score[5]={ 87,66,90,65,70 };    
      /* �w�q��ư}�C Score[5],�ó]�w5�����Z */
     int count, Total_Score=0;
     for (count=0; count < 5; count++)   /* ���� for �j��Ū���ǥͦ��Z */
     {
       printf("�� %d ��ǥͪ�����:%d\n", count+1,Score[count]);  
       Total_Score+=Score[count];  /* �Ѱ}�C��Ū�����ƭp���`�X */
      }
      printf("-------------------------\n");
      printf("5��ǥͪ��`��:%d\n", Total_Score);  
     /* ��X���Z�`�� */
     
     system("pause");
     return 0;
}
