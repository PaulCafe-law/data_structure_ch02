#include <stdio.h>
#include <stdlib.h>

int main ()
{  
	int i,j,NONZERO=0;
	int temp=1;
	int Sparse[6][6]={ 15,0,0,22,0,-15,0,11,3,0,0,0,
                       0,0,0,-6,0,0,0,0,0,0,0,0,91,0
                       ,0,0,0,0,0,0,28,0,0,0};		/*�ŧi�}���x�},�}���x�}���Ҧ������]��0*/
	int Compress[9][3];		/*�ŧi���Y�x�}*/
    
    
	printf("[�}���x�}���U�Ӥ���]\n"); /*�L�X�}���x�}���U�Ӥ���*/
	for (i=0;i<6;i++)
	{  
		for (j=0;j<6;j++)
		{
			printf("[%d]\t ",Sparse[i][j]);
			if (Sparse[i][j] !=0) NONZERO++;
        }
		printf("\n");
	}
	/*�}�l���Y�}���x�}*/
	Compress[0][0] = 6;
	Compress[0][1] = 6;
	Compress[0][2] = NONZERO;
	for (i=0;i<6;i++)
		for (j=0;j<6;j++)
			if (Sparse[i][j] != 0)
			{  
				Compress[temp][0]=i;
				Compress[temp][1]=j;
				Compress[temp][2]=Sparse[i][j];
				temp++;
			}
	printf("[�}���x�}���Y�᪺���e]\n"); /*�L�X���Y�x�}���U�Ӥ���*/
	for (i=0;i<NONZERO+1;i++)
	{  
		for (j=0;j<3;j++)
			printf("[%d] ",Compress[i][j]);
		printf("\n");
	}
	system("pause");
}
