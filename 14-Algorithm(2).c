#include<stdio.h>

int main()
{
	int n, mL,max_mL;
	int empty, full_empty, full_full; 
	int empty1 = 0, full_empty1 = 0, full_full1 = 0;
	int i;
	
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%d", &mL);//mL����Ϊÿ���̲����
		
		if(full_empty1 > empty1)
		{
			
			empty = full_empty1;//���1�����ȣ����������̲�	
		}
		
		if(full_full1 >= empty1)
		{
			full_empty = mL + full_full1;//���2���ȸ��̲赫������һ��
		}
		else
		{
			full_empty = mL + empty1;//���3���ȸ��̲��Һ���һ�� 
		}
		
		full_full = mL + empty1;	
		
		empty1 = empty;
		full_empty1 = full_empty;
		full_full1 = full_full;
	}
	
	max_mL = (full_empty >= empty) ? full_empty : empty;//max_mLΪ���������̲��� 
	
	printf("%d", max_mL);
	
	return 0; 
}
