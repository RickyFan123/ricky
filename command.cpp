#include "stdafx.h"
#include "IGroup.h"
#include "CodeGroup.h"
#include "PageGroup.h"
#include "RequirementGroup.h"
#include "Invoker.h"
#include "AddRequirementCommand.h"
#include "DeletePageCommand.h"
#include <iostream>
using std::cout;
using std::endl;

void DoIt()
{
	cout << "----------����������һ������----------" << endl;
	IGroup *rg = new CRequirementGroup();
	rg->Find();
	rg->Add();
	rg->Plan();
	delete rg;
	cout << endl;

	cout << "----------���������޸�һ��ҳ��----------" << endl;
	IGroup *pg = new CPageGroup();
	pg->Find();
	pg->Add();
	pg->Plan();
	delete pg;
	cout << endl;

	cout << "----------��������ɾ��һ������----------" << endl;
	IGroup *cg = new CCodeGroup();
	cg->Find();
	cg->Add();
	cg->Plan();
	delete cg;
	cout << endl;
}

void DoNew()
{
	cout << "----------�������÷��ˣ�ϣ��ֻ��һ���ˣ���������Ҫ��ʲô----------" << endl;
	cout << "----------����Ҫ������һ������----------" << endl;
	CInvoker gary;
	ICommand *pcommand = new CAddRequirementCommand();
	gary.SetCommand(pcommand);
	gary.Action();
	delete pcommand;
	cout << endl;

	//�ͻ���Ҫ�Ķ�ֻ��Ҫ��CInvoker�Ϳ����ˡ�
	cout << "----------����Ҫ��ɾ��һ��ҳ��----------" << endl;
	CInvoker ricky;
	ICommand *pcommand2 = new CDeletePageCommand();
	ricky.SetCommand(pcommand2);
	ricky.Action();
	delete pcommand2;
	cout << endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
	//����ԭ������������
	DoIt();

	//���������鷳�ˣ�ÿ�θĶ���Ҫ�Ҳ�ͬ���飬̸��ͬ����
	//����ֻ����һ���ˣ�������Ҫ��ʲô�Ϳ��ԣ�����������ļ�������������ô��
	DoNew();



		return 0;
}