#include<stdio.h>
#define SLEN 40
#define LTM 5
void main()
{
	const char *mytalents[LTM] = {
		"Adding numbers swiftly",
		"Multiplying accurately",
		"Stashing data",
		"Following instructions to the letter",
		"Understanding the C language"
	};
	mytalents[0] = "sdgh";//修改数组中的元素即修改指针重新指向为“sdgh”所在地址，允许
	mytalents[0][2]='p';//第一个指针无法修改指向数组中的第三个元素，被const修饰，不允许
	char yourtalents[LTM][SLEN] = {
		"Walking in a straight line",
		"Sleeping",
		"Watching television",
		"Mailing letters",
		"Reading email"
	};
	int i;

	puts("Let's compare talents.");
	printf("%-36s %-25s\n", "My Talents", "Your Talents");
	for (i = 0; i < LTM; i++)
	{
		printf("%-36s %-25s\n", mytalents[i], yourtalents[i]);
	}
	printf("\nsizeof mytalents: %zd, sizeof yourtalents:%zd\n", sizeof(mytalents), 
		sizeof(yourtalents));
	
}