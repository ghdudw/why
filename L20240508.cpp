#include <iostream> //ǥ�� �ڵ� ��������

int main() // Entry Point �����Լ�
{
	int Gold = 10;	//int�� �޸� ���� �Ҵ�	 (��������) ���� ������ �������� �ڷ���(Primitive Data)
	std::cin >> Gold; //cin �Է�
	std::cout << Gold;//cout ���

	float X = 1.2f; // �Ҽ��� ���� ǥ���ϴ� �ڷ���

	int Data =65;
	int Data2 = 23;
	
	std::cin >> Data;
	std::cin >> Data;

	std::cout << Data + Data2 << std::endl;
	std::cout << Data - Data2 << std::endl;
	std::cout << Data / Data2 << std::endl;
	std::cout << Data * Data2 << std::endl;// + - * % / ������(Operator)

	return 0;
}		