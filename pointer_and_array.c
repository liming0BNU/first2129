int main(int argc, char const *argv[])
{
	int arr[3][3]={{1,2,3},
					{4,5,6},
					{7,8,9}};
	int i;
	int *pi;

	i=arr[0][0];
	pi=&arr[0][0];
	printf("ptr: %i, &i:%i, i:%i\n", pi, &i, i);
	printf("*ptr: %i, &arr[0][0]:%i, i:%i\n", *pi, &arr[0][0], i);
	return 0;
}