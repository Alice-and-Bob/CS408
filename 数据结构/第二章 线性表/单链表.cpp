/*** 
 * @Author: Alice-and-Bob
 * @Date: 2020-03-31 22:03:34
 * @LastEditTime: 2020-04-02 09:30:54
 * @LastEditors: Alice-and-Bob
 * @Description: 线性表基本操作在链表上的cpp实现，代码实现不全，不能运行；用于演示算法步骤
 * @*******************************************
 * @*          全世界程序员，联合起来！         *
 * @*     Programmers of all lands, Unite!    *
 * @*   программист всех стран, соединяйтесь! *
 * @*******************************************
 */

/*------------------------单链表------------------------*/

#define END 1000000 //预先确定的结束值
typedef struct LNode
{
    int data;
    struct LNode *next;
} LNode, *LinkList;

//头插法建立链表
LinkList List_HeadInsert(Linklist &L)
{

    LNode *s;
    int x;
    L = (LinkList)malloc(sizeof(LNode));
    L.next = NULL;
    while (cin >> x)
    {
        if (x == END)
        {
            break;
        }
        else
        {
            s = (LinkList)malloc(sizeof(LNode));
            s.data = x;
            s.next = L.next;
            L.next = s;
        }
    }
    return L;
}
//尾插法建立链表
LinkList List_TailInsert(LinkList L)
{
    int x;
    L = (LinkList)malloc(sizeof(LNode));
    LNode *s, *t = L; //t是尾指针，总指向链表最后一个节点；s是临时节点
    while (cin >> x)
    {
        if (x == END)
        {
            break;
        }
        else
        {
            s = (LinkList)malloc(sizeof(LNode));
            s.data = x;
            s.next = NULL;
            r.next = s;
            r = r.next;
        }
    }
    //r.next = NULL;
    return L;
}
//按序号查找节点
LNode *GetElem(LinkList L, int i)
{
    LNode *s = L.next;
    int j = 1;
    if (i == 0)
    {
        return L
    }
    else if (i < 1)
    {
        return NULL;
    }

    while (s && j < i)
    {
        s = s.next;
        j++;
    }
    return s;
}
//按值查找节点
LNode *LocalteElem(LinkList L, int x)
{
    LNode *s = L.next;
    while (s.data != x && s.next != NULL)
    {
        s = s.next;
    }
    return s;
}
//在某个给定节点前插
{//前插操作
    p = GetElem(L, i - 1); //找到要插入的前驱节点
    s.next = p.next;
    p.next = s;
}
{//后插转前插
    s.next = p.next;
    p.next = s;
    temp = p.data;
    p.data = s.data;
    s.data = temp;
}
//删掉某个给定节点
{//前删操作
    p = GetElem(L, i-1);
    q = p.next;
    p.next = q.next;
    free(q);
}
{//后删转前删
    q = p.next;
    p.data = p.next.data;
    p.next = q.next;
    free(q);
}



/*------------------------改进链表----------------------*/
//双链表
typedef struct DNode
{
    ElemType data;
    struct DNode *prior,*next;//前驱指针，后继指针
};
//插入节点
{
    s.next = p.next;
    p.next.prior = s;
    s.prior = p;
    p.next = s;
}
//删除节点
{
    p.next = q.next;
    q.next.prior = p;
    free(q);
}
