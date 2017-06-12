#include <stdio.h> //如果是引号的话， 则是从当前目录找头文件，尖括号则是从标准库找

#define CIRCLE_SIZE 4

int gi;

void usage(int argc){
	printf("argc should == 2, but you give argc: %d\n", argc);
}


//复合声明的例子： 
// char const *argv[]，  这是什么意思呢？
// argv想要达到的效果？ 一个动态的二维数组。
// char* arr[]// 一个指针数组
// char* const arr[] // 一个常量字符串的指针数组
// 
int main(int argc, char const *argv[])
{	
	int friend_graph[CIRCLE_SIZE][CIRCLE_SIZE];
	// int ** friend_graph;
	if (argc!=2) // 限定只能输入一个参数， 不能多也不能少
	{
		usage(argc);
		return 1;
	}
	FILE* pfile;
	pfile=fopen("friend_circle.txt","r");//note: 记得open了之后， 让文件句柄接住它哟！
	
	//note: 如何读文件？？？ 一排一排的读文件呗
	for (int i = 0; i < CIRCLE_SIZE; ++i)
	{
		for(int j=0; j<CIRCLE_SIZE; j++){
		  	fscanf (pfile, "%d", &friend_graph[i][j]);
		}
	}

	for (int i = 0; i < CIRCLE_SIZE; ++i)
	{
		for (int j = 0; j < CIRCLE_SIZE; j++)
		{
			printf("%d ", friend_graph[i][j]);
		}
		printf("\n");
	}
	fclose(pfile);
	return 0;
}
