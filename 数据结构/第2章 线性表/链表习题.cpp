/*** 
 * @Author: Alice-and-Bob
 * @Date: 2020-04-17 22:54:59
 * @LastEditTime: 2020-07-05 15:59:35
 * @LastEditors: Alice-and-Bob
 * @Description: 
 * @*******************************************
 * @*          全世界程序员，联合起来！         *
 * @*     Programmers of all lands, Unite!    *
 * @*   программист всех стран, соединяйтесь! *
 * @*******************************************
 */
21、
    //1、遍历单链表统计元素个数为n；从头指针所指向的节点开始从0遍历到n-k的位置；
    //2、从list指向的第一个节点开始遍历链表，同时用一个变量n记录元素个数；获得元素个数n后，n与k比较，若n<k则说明k越界，返回0；否则，
    //倒数k个元素即是正数n-k个元素（从0开始对节点编号），从0号节点开始遍历到n-k个节点，并输出该节点的data域，返回1
    //3、
    int
    foo(Linklist &list)
{
    int n = 0;
    LNode *p = list;
    while (p != NULL)
    {
        n++;
    }
    if (n < k)
    {
        return 0;
    }
    else
    {
        p = list;
        for (int i = 0; i < n - k; i++)
        {
            p = p->next;
        }
        cout << p->data;
        return 1;
    }
}

22、
    //1、求链表长度m，n。对pq进行对齐，使其到链表尾的距离相等；同时前进，当p=q时，即取得位置
    typedef struct Node
{
    char data;
    struct Node *next;
} SNode;

int listlen(SNode *head)
{
    int len = 0;
    while (head->next != NULL)
    {
        len++;
        head = head->next;
    }
    return len;
}

SNode *find_addr(SNode *str1, SNode *str2)
{
    int m, n;
    SNode *p = str1, *q = str2;
    m = listlen(str1);
    n = listlen(str2);

    if (m > n)
    {
        for (int i = 0; i < m - n + 1; i++)
        {
            p = p->next;
        }
    }
    else
    {
        for (int i = 0; i < n - m + 1; i++)
        {
            q = q->next;
        }
    }
    while (p->next != NULL && q->next != p->next)
    {
        p = p->next;
        q = q->next;
    }
    return p - next;
} //O(len1+len2)

23、
    //1、新建一个大小为n+1的辅助数组q默认值全为0，从头开始扫描源链表，对某个链表元素的data，访问q[|data|]，如果为0，则改为1；如果为1，则删除当前链表节点
    typedef struct Node
{
    int data;
    struct Node *next;
} SNode;

void func(SNode *p, int n)
{
    int q[n + 1] = {0};
    SNode t;
    while (p->next != NULL)
    {
        if (q[abs(p->next->data)] == 0)
        {
            q[abs(p->next->data)] = 1;
        }
        else
        {
            t = p->next;
            p->next = p->next->next;
            free(t);
        }
        p = p->next;
    } //处理了前m-1个
    //对于最后一个链表元素
    if (q[abs(p->data)] == 1)
        free(p);

} //Ot(m),Os(n)

25、
    //1、找到链表中间节点，后半段原地逆序，再按要求从头和中间位置每次去一个节点连接成新链表
    typedef struct node
{
    int data;
    struct node *next;
} Node;

void func(NODE *h)
{
    Node *p, *q, *r, *s;
    p=h;q=h;
    while(q->next!=NULL){
        p=p->next;
        q=q->next;
        if(q->next!=NULL) q=q->next;
    }//p在链表中间位置
    q=p->next;
    p->next=NULL;
    //断开前后两段链表连接
    while(q!=NULL){
        r=q->next;
        q->next=p->next;
        p->next=q;
        q=r;
    }
    //后半段逆序
    while(q!=NULL){
        r=q->next;
        q->next=s->next;
        s->next=q;
        s=q->next;
        q=r;
    }
    //按要求重组
}//O(n)