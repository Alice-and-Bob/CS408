/*** 
 * @Author: Alice-and-Bob
 * @Date: 2020-03-26 23:45:49
 * @LastEditTime: 2020-03-27 12:05:27
 * @LastEditors: Alice-and-Bob
 * @Description: 顺序表的基本操作cpp实现
 * @
 * @全世界无产者，联合起来！
 * @Workers of all lands, Unite!
 * @Пролетарии всех стран, соединяйтесь!
 */

bool ListInsert(SqList &L, int i, Elemtype e)
{
    /*** 
 * @description:实现把元素e插入到顺序表L的第i个位置 
 * @param {type} 
 * @return: 
 */
    if (i < 0 || i > L.length + 1)
    {
        return false;
    }
    if (L.length >= MaxSize)
    {
        return false;
    }
    for (int j = L.length; j >= i; j--)
    {
        L.data[j] = L.data[j - 1];
    }
    L.data[i - 1] = e;
    L.length++;
    return true;
}

bool ListDelete(SqList &L, int i, Elemtype &e)
{
    /*** 
 * @description:实现删除顺序表L的第i个元素，使用e返回被删除的元素 
 * @param {type} 
 * @return: 
 */
    if (i < 0 || i > L.length + 1)
    {
        return false;
    }
    e = L.data[i - 1];
    for (int j = i; j < L.length; j++)
    {
        L.data[j - 1] = L.data[j];
    }
    L.length--;
    return true
}

int LocateElem(SqList L, ElemType e)
{
    /*** 
 * @description: 实现在顺序表里按序查找第一个值为e的元素
 * @param {type} 
 * @return: 
 */
    for (int i = 0; i < L.length; i++)
    {
        if (L.data[i] == e)
        {
            return i + 1;
        }
    }
    return 0;
}