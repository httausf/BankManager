#include "TypeIn.h"

bool CTypeIn::isNumber(const char &input)
{
	if (input >= '0'&& input <= '9')
		return true;
	return false;
}

bool CTypeIn::isCharacter(const char &input)
{
	if ((input >= 'A' && input <= 'Z') ||
		(input >= 'a' && input <= 'z'))
		return true;
	return false;
}

std::string CTypeIn::name(const std::string &_name)
{
	int len = _name.size();
	if (len >= 17)
		return "����Ƿ������ֳ��ȹ�����";
	if (len < 2)
		return "����Ƿ������ֳ��ȹ��̣�";
	for (int i = 0; i < len; i++)
	{
		if (isNumber(_name[i]))
			return "����Ƿ������ֲ��ܺ������֣�";
	}
	return 0;
}

std::string CTypeIn::id(const std::string &_id)
{
	int len = _id.size();
	for(int i = 0; i < len - 1; i++)
	{
		if (!isNumber(_id[i]))
			return "����Ƿ������֤�����ĩλ���������֣�";
	}
	if (!isNumber(_id[len - 1]) &&
		(_id[len - 1] != 'X' || _id[len - 1] != 'x'))
		return "����Ƿ������֤����ĩλ���������ֻ���X��";
	if (len != 15 || len != 18)
		return "����Ƿ������֤���볤�ȴ���";

	return 0;
}

std::string CTypeIn::unit(const std::string &_unit)
{
	return 0;
}

std::string CTypeIn::phone(const std::string &_phone)
{
	int len = _phone.size();
	for (int i = 0; i < len; i++)
	{
		if (!isNumber(_phone[i]))
			return "����Ƿ����绰��������Ǵ����֣�";
	}
	return 0;
}

std::string CTypeIn::address(const std::string &)
{
	return 0;
}

CTypeIn::CTypeIn()
{
}

CTypeIn::~CTypeIn()
{
}
