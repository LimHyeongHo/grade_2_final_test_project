#include "exchange.h"

int exchange::exchangeMoney(int itemMoney, int M)
{	
	// 물건의 반환값을 리턴해주는 메서드 함수 제작 
	int 거스름돈 = itemMoney - M;
	return 거스름돈 ;
}