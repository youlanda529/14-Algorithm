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
		scanf("%d", &mL);//mL数组为每杯奶茶的量
		
		if(full_empty1 > empty1)
		{
			
			empty = full_empty1;//情况1：不喝（跳过）该奶茶	
		}
		
		if(full_full1 >= empty1)
		{
			full_empty = mL + full_full1;//情况2：喝该奶茶但不喝下一杯
		}
		else
		{
			full_empty = mL + empty1;//情况3：喝该奶茶且喝下一杯 
		}
		
		full_full = mL + empty1;	
		
		empty1 = empty;
		full_empty1 = full_empty;
		full_full1 = full_full;
	}
	
	max_mL = (full_empty >= empty) ? full_empty : empty;//max_mL为最终最大的奶茶量 
	
	printf("%d", max_mL);
	
	return 0; 
}
