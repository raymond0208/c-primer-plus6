#include<stdio.h>/*函数头：输入输出头文件*/

int main()/*空类型：主函数*/

{

int a,b,c,t;/*定义变量的数据类型为整型*/

printf("输入3个数，中间用空格隔开：");/*输出文字提示*/

scanf("%d%d%d",&a,&b,&c);/*输入3个数字*/

if(a<b)/*判断a是否小于b*/

{t=a;a=b;b=t;}/*是，则a、b的值互换*/

if(a<c)/*判断a是否小于c*/

{t=a;a=c;c=t;}/*是，则a、c的值互换*/

if(b<c)/*判断b是否小于c*/

{t=b;b=c;c=t;}/*是，则b、c的值互换*/

printf("从小到大：%d,%d,%d\n",c,b,a);/*输出从小到大排列的数*/

printf("从大到小：%d,%d,%d\n",a,b,c);/*输出从大到小排列的数*/

return 0;

}