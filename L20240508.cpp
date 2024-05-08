#include <iostream> //표준 코드 가져오기

int main() // Entry Point 메인함수
{
	int Gold = 10;	//int는 메모리 공간 할당	 (변수선언) 제일 간단한 변수선언문 자료형(Primitive Data)
	std::cin >> Gold; //cin 입력
	std::cout << Gold;//cout 출력

	float X = 1.2f; // 소수점 까지 표현하는 자료형

	int Data =65;
	int Data2 = 23;
	
	std::cin >> Data;
	std::cin >> Data;

	std::cout << Data + Data2 << std::endl;
	std::cout << Data - Data2 << std::endl;
	std::cout << Data / Data2 << std::endl;
	std::cout << Data * Data2 << std::endl;// + - * % / 연산자(Operator)

	return 0;
}		