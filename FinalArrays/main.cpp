#include<iostream>
#include<cstdlib>
#include<ctime>
#include<algorithm>


    int main() {
	setlocale(LC_ALL, "rus");
	int n=0,m,sum;
	std::cout << "Hello world\n\n";

	//������ 1 ���������� �������� �������
	
	
	/*
	std::cout << "Ex1 ����������� ������\n\n";
	const int size1 = 10;
	int arr1[size1];
	srand(time(NULL));

	for (int i = 0; i < size1; i++) {
		arr1[i] = rand() % (10 + 1 - 1) + 1;//1..10
		std::cout << arr1[i] << ' ';


	}
	std::cout << std::endl;

	//����������� ����������
	// for(int i=size1-1;i>0;i--)
		// for(int j=0;j<i;j++)
			// if(arr1[j]>arr1[j+1])
				// std::swap(arr1[j], arr1[j + 1]);

	//������� ���������� 1/2
	std::sort(arr1, arr1 + size1/2);


	
	//�����
	std::cout << std::endl;
	std::cout << "����� ������� ���������������" << std::endl;
	std::cout << std::endl;
	for (int i = 0; i < size1; i++)
		std::cout << arr1[i] << ' ';

*/

	//Ex2
	/*std::cout << "Ex2 ����������� �� ������(31 ����)";
	std::cout << std::endl;
	
	
	const int size2 = 31;
	int arr2[size2];
	srand(time(NULL));
	std::cout << std::endl;
	for (int i = 0; i < size2; i++) {
		arr2[i] = rand() % 30-30;//-30..-1
		
		std::cout << arr2[i] << ", ";

	}
	std::cout << "\b\b.\n";
	sum = 0; // �� ��������������
	int counter = 0; // ���-�� ���� ��� <n

	std::cout << "������� ������������ ������� ����������� (�� -30 �� -1 �������) -> ";
	std::cin >> n;

	for (int i = 0; i < size2; i++) {
		sum = sum + arr2[i];
		if (arr2[i] < n)
			counter++;

	}
	std::cout << "���-�� ���� ����� ����������� ���� ���� " << n << " ��������  " << counter << "\n";
	std::cout << "������� �������������� ���� ��������� = " << (double)sum / size2  << std::endl;
	
	
	*/



	//Ex3 ��������� � ��������
	/*
	std::cout << "Ex3\n������� ������ ��������� -> ";
	std::cin >> n;
	std::cout << "������� ����� ��������� -> ";
	std::cin >> m;
	const int size3 = 20;
	int arr3[size3];
	srand(time(NULL));
	
	std::cout << "����� \n";
	for (int i = 0; i < size3; i++) {
		arr3[i] = rand() % 101;//[1..100]
		
		if (arr3[i] > n && arr3[i] < m)
			std::cout << i + 1 << ". " << arr3[i] << " !\n";
		else
			std::cout << i + 1 << ". "  << arr3[i] << "\n";
	}
	*/
	std::cout << "Ex1 ����������� ������\n\n";
	const int size1 = 20;
	int arr1[size1];
	srand(time(NULL));

	for (int i = 0; i < size1; i++) {
		arr1[i] = rand() % 22;
		std::cout << arr1[i] << ' ';

	}
	std::cout << std::endl;
	for (int i = 0; i < size1-1; i++)

		if (arr1[i] < arr1[i + 1]) {
			
			std::cout << arr1[i + 1] << ' ';
		}

	std::cout << std::endl;
	return 0;
}