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
	cout << "�ҵ������..." << endl;
}
void CPageGroup::Add()
{
	cout << "����Ҫ������һ��ҳ��..." << endl;
}
void CPageGroup::Delete()
{
	cout << "����Ҫ��ɾ��һ��ҳ��..." << endl;
}
void CPageGroup::Change()
{
	cout << "����Ҫ���޸�һ��ҳ��..." << endl;
}
void CPageGroup::Plan()
{
	cout << "����Ҫ��ҳ�����ƻ�..." << endl;
}