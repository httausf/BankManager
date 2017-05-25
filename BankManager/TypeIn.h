#pragma once
#include<string>
/* ������-�Ϸ��Լ�� */
class CTypeIn
{
public:
	//�������string���кϷ��Լ��
	std::string name(const std::string&);
	std::string id(const std::string&);
	std::string unit(const std::string&);
	std::string phone(const std::string&);
	std::string address(const std::string&);
	//
	CTypeIn();
	~CTypeIn();
private:
	//�ж�char�Ƿ�Ϊ����
	bool isNumber(const char&);
	//�ж�char�Ƿ�Ϊ��ĸ
	bool isCharacter(const char&);
};

