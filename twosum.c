#include <stdio.h> //如果是引号的话， 则是从当前目录找头文件，尖括号则是从标准库找

int gi;

void usage(int argc){
	printf("argc should == 2, but you give argc: %d\n", argc);
}



int main(int argc, char const *argv[])
{	
	if (argc!=2) // 限定只能输入一个参数， 不能多也不能少
	{
		usage(argc);
		return 1;
	} 
	FILE* pfile;
	pfile=fopen("mandy.txt","w+");//note: 记得open了之后， 让文件句柄接住它哟！
	fprintf(pfile, "%s %f\n", argv[1], 3.14);//note: 字符串就是“”里面的东西
	fclose(pfile);
	return 0;
}
