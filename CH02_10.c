/*
[�ܽd]:�N��ӳ̰�����۵����h�����ۥ[���X���G
*/
#include <stdio.h>
#define ITEMS 6
void PrintPoly(int Poly[],int items);
void PolySum(int Poly1[ITEMS],int Poly2[ITEMS]);
int main()
{  
	int PolyA[ITEMS]={4,3,7,0,6,2};		/*�ŧi�h����A*/
	int PolyB[ITEMS]={4,1,5,2,0,9};		/*�ŧi�h����B*/
	printf("�h����A=> ");
	PrintPoly(PolyA,ITEMS);				/*�L�X�h����A*/
	printf("�h����B=> ");
	PrintPoly(PolyB,ITEMS);				/*�L�X�h����B*/
	printf("A+B => ");
	PolySum(PolyA,PolyB);				/*�h����A+�h����B*/
	system("pause");
}
void PrintPoly(int Poly[],int items)
{  
	int i,MaxExp;
	MaxExp=Poly[0];
	for(i=1;i<=Poly[0]+1;i++)
	{  
		MaxExp--;
		if(Poly[i]!=0)					/*�p�G�Ӷ���0�N���L*/
		{  
			if((MaxExp+1)!=0)
				printf(" %dX^%d ",Poly[i],MaxExp+1);
			else
				printf(" %d",Poly[i]);
			if(MaxExp>=0)
				printf("%c",'+');      
		}
	}
	printf("\n");
}
void PolySum(int Poly1[ITEMS],int Poly2[ITEMS])
{  
	int i;
	int result[ITEMS];
	result[0] = Poly1[0];
	for(i=1;i<=Poly1[0]+1;i++)
		result[i]=Poly1[i]+Poly2[i];	/*��򻪺�Y�Ƭۥ[*/
	PrintPoly(result,ITEMS);
}
