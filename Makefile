all:
	clang -g twosum.c -o twosum.out
runptr:
	clang pointer_and_array.c && ./a.out # &&代表shell里面的and， ||代表c语言里面的or。
test:
	./twosum.out mandy