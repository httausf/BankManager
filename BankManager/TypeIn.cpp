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
		return "输入非法：名字长度过长！";
	if (len < 2)
		return "输入非法：名字长度过短！";
	for (int i = 0; i < len; i++)
	{
		if (isNumber(_name[i]))
			return "输入非法：名字不能含有数字！";
	}
	return 0;
}

std::string CTypeIn::id(const std::string &_id)
{
	int len = _id.size();
	for(int i = 0; i < len - 1; i++)
	{
		if (!isNumber(_id[i]))
			return "输入非法：身份证号码非末位必须是数字！";
	}
	if (!isNumber(_id[len - 1]) &&
		(_id[len - 1] != 'X' || _id[len - 1] != 'x'))
		return "输入非法：身份证号码末位必须是数字或者X！";
	if (len != 15 || len != 18)
		return "输入非法：身份证号码长度错误！";

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
			return "输入非法：电话号码必须是纯数字！";
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
