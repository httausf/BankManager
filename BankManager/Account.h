#pragma once
#include<string>
class CAccount
{
public:

	CAccount();
	~CAccount();
private:
	//�˺�
	int account[10];
	//���֣����֤���룬��λ���绰����ַ
	std::string name,
		id,
		unit,
		phone,
		address;
	//�˻����
	double balance;
};