/* 
** 任务名  任务02-1 体重指数
** 日期    2019年3月16日
*/



#include <stdio.h>

int main(void)
{
	float x,y,a;
	printf("请输入乘车距离x(x ≥ 3)：\n");
	scanf("%f" ,&a);
	x=10+(a-3)*1.3;
	y=8+(a-3)*1.6;
	printf("乘坐A型车的需要花 %.2f\n",x);
	printf("乘坐B型车的需要花 %.2f\n",y);
}
