#include "item.h"
#include <stdio.h>

int item::itemMoney(int num)
{
	if (num == 1) {
		return 7000;
	}
	else if (num == 2) { return 4000; }
	else if (num == 3) { return 5000; }
	printf("%s", "1~3사이에 숫자를 넣어주세요");
	return 0;
}
