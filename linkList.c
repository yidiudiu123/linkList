#include <stdio.h>


typedef struct node{
	char name[8];
	struct node * next;
}Node,*PtNode;

PtNode g_ptNodeHead = NULL;

void insert_link(PtNode ptNode)
{
	//如果头指向为空，表明链表为空，用头指向此时的第一个链
	if(g_ptNodeHead == NULL)
	{
		g_ptNodeHead = ptNode;
	}
	else
	//如果链表不为空，则要把最后一个链找到，让最后一个链的下一个指针指向传进来要插入的，
	{
		PtNode pt_tmp = g_ptNodeHead;
		while(pt_tmp->next)
		{
			pt_tmp = pt_tmp->next;
		}
		pt_tmp->next = ptNode;
		ptNode->next = NULL;
	}
}

int main(void)
{
	insert_link(PtNode ptNode);
	printf("hello world!\n");
	return 0;
}
