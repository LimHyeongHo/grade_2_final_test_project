#include "item.h"

int item::itemMoney(int num)
{
	// 물건의 반환값을 리턴해주는 메서드 함수 제작 
	switch (num)
	{
	case 1:
		return 10000; // 피자 가격
	case 2:
		return 20000; // 치킨 가격
	case 3:
		return 5000; // 햄버거 가격
	default:
		return 0; // 잘못된 입력
	}
}