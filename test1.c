#include <stdio.h>



//µİ¹é´òÓ¡
int print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d\n", n % 10);


	return 0;
}



int main()
{
	unsigned int num = 0;
	scanf("%d", &num); //1234

	print(num);







	return 0;
}