#include <stdio.h> //如果是引号的话， 则是从当前目录找头文件，尖括号则是从标准库找

int main(int argc, char const *argv[])
{	
	if (argc!=2) // 限定只能输入一个参数， 不能多也不能少
	{
		printf("usage: argc should == 1\n");
		return 1;
	}
	for (int i = 0; i < argc; i++) //将所有的参数打印出来
	{
		printf("%i: %s\n", i, argv[i]);
	}
	return 0;
}