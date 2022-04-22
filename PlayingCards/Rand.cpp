#include <iostream>
#include <random>

namespace Random {
	int RandomRange(int front, int back) {
		int result;
		// �õ尪�� ��� ���� random_device ����.
		std::random_device rd;

		// random_device �� ���� ���� ���� ������ �ʱ�ȭ �Ѵ�.
		std::mt19937 gen(rd());

		// 0 ���� 99 ���� �յ��ϰ� ��Ÿ���� �������� �����ϱ� ���� �յ� ���� ����.
		std::uniform_int_distribution<int> dis(front, back);
		result = dis(gen);
		return result;
	}
}