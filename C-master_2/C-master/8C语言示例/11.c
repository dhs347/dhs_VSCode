#include <stdio.h>
int main(int argc, char *argv[])
{
  long f1,f2;
  int i;
  f1=f2=1;
  for (i=1; i<=20; i++)
    {
      printf ("%12ld%12ld",f1,f2); 
      /*\t也是有局限性的，只能作用8个字符，当需要更多的
	字符时就需要给定字符长度了*/
      if(i%2==0)
	printf ("\n");
      /*每行只打印四个数，变量两个，除以2，当然是四个数了
	这样的技巧我还是第一次见呀。*/
      f1=f1+f2;
      f2=f1+f2;
      /*这里用了递归的方法，并且是加法的，通常为了抽象将递归部分
	封装成函数，乘法的递归就不用声明两个变量，一个就够了。*/
    }
  return 0;
}
