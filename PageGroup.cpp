#include "StdAfx.h"
#include "PageGroup.h"
#include <iostream>
using std::cout;
using std::endl;
CPageGroup::CPageGroup(void)
{
}
CPageGroup::~CPageGroup(void)
{
}
void CPageGroup::Find()
{
	cout << "找到设计组..." << endl;
}
void CPageGroup::Add()
{
	cout << "部长要求增加一个页面..." << endl;
}
void CPageGroup::Delete()
{
	cout << "部长要求删除一个页面..." << endl;
}
void CPageGroup::Change()
{
	cout << "部长要求修改一个页面..." << endl;
}
void CPageGroup::Plan()
{
	cout << "部长要求页面变更计划..." << endl;
}