#include <stdio.h>
#include <math.h>
#define pi 3.1415926535898

int main()
{
	int M,N;                                          //��M��N�е�����
	scanf("%d %d",&M,&N);
	double shi[M][N],xu[M][N];                          //�����ά���ݵ�ʵ�����鲿 
	for(int i=0;i<M;i++)                            //�������� 
	{
		for(int j=0;j<N;j++)
		scanf("%lf %lf",&shi[i][j],&xu[i][j]);
	}
	int h,l;
	
	
	for(h=0;h<M;h++)//��ÿһ�����б任 
	{
		double sumshibu[N],sumxubu[N];
		for(int i=0;i<N;i++)
		{
			sumshibu[i]=0;
			sumxubu[i]=0;
		}
		for(int h1=0;h1<N;h1++)//��Ӧ��ÿһ���� 
		{			
			for(l=0;l<N;l++)//����������Ҷ�任 
			{
				double hudu,shibu,xubu;
				hudu=(2*pi/N)*h1*l;
				shibu=cos(hudu);
				xubu=sin(hudu)*(-1);
				sumshibu[h1]=sumshibu[h1]+(shi[h][l]*shibu-xu[h][l]*xubu);
				sumxubu[h1] =sumxubu[h1]+(xu[h][l]*shibu+shi[h][l]*xubu);
			}
		}
		for(int i=0;i<N;i++) 
		{
			shi[h][i]=sumshibu[i];
			xu[h][i]=sumxubu[i];
		 } 
	}
	
		
	for(l=0;l<N;l++)//��ÿһ�����б任 
	{
		double sumshibu[M],sumxubu[M];
		for(int i=0;i<M;i++)
		{
			sumshibu[i]=0;
			sumxubu[i]=0;
		}
		for(int l1=0;l1<M;l1++)//��Ӧ��ÿһ���� 
		{			
			for(h=0;h<M;h++)//����������Ҷ�任 
			{
				double hudu,shibu,xubu;
				hudu=(2*pi/M)*l1*h;
				shibu=cos(hudu);
				xubu=sin(hudu)*(-1);
				sumshibu[l1]=sumshibu[l1]+(shi[l][h]*shibu-xu[l][h]*xubu);
				sumxubu[l1] =sumxubu[l1]+(xu[l][h]*shibu+shi[l][h]*xubu);
			}
		}
		for(int i=0;i<M;i++) 
		{
			shi[i][l]=sumshibu[i];
			xu[i][l]=sumxubu[i];
		 } 
	}
	
		
	for(int i=0;i<M;i++)//��� 
	{
		for(int j=0;j<N;j++)
		{
			if(xu[i][j]<0)		
			printf("F[%d][%d]=%lf%lfj",i,j,shi[i][j],xu[i][j]);
			else
			printf("F[%d][%d]=%lf+%lfj",i,j,shi[i][j],xu[i][j]);
			printf(" / ");		
		}
		printf("\n");
	 } 
 } 
