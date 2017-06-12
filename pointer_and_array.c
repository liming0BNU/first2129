#include <stdio.h>

void print_array(int len,int *one_dim_array) {
	for (int i = 0; i < len; ++i)
	{
		printf("%i ", one_dim_array[i]);
	}
	printf("\n");
}


int main(int argc, char const *argv[])
{
	int arr[3][3]={{1,2,3},
					{4,5,6},
					{7,8,9}};
	int i;
	int *pi; //note: 一维指针, 可以指向一维数组。
	int **ppi; //note: 二维指针， 可以指向二维数组
 
	// // 简单理解： 数组名字就是地址
	// i=arr[0][0];
	// pi=&arr[0][0];
	// printf("ptr: %i, &i:%i, i:%i\n", pi, &i, i);
	// printf("*ptr: %i, &arr[0][0]:%i, i:%i\n", *pi, &arr[0][0], i);
	// printf("arr:%i, &arr%i\n", arr, &arr);//数组名就是地址！！！

	//note: 一维指针, 可以指向一维数组
	print_array(3, arr[0]);

	
	// //note: 二维指针， 可以指向二维数组
	// ppi=arr;//so。。。能拿吗了呢？
	// printf("ppi[0][1], ppi[0][1]\n", ppi[0][1], );
	// return 0;
}