1、 int foo()
{
	if (L.length() <= 0)
	{ //空
		print("Error");
		exit;
	}
	int flag = 0;
	int temp;
	for (int i = 0; i < L.length(); i++)
	{ //找到最小值的地址
		if (L[i] > L[i + 1])
		{
			flag = i + 1;
		}
	}
	temp = L[flag];
	L[flag] = L[n - 1];
	return temp;
}

2、 void foo()
{
	/*
	一个临时变量t；开始时最后一位数组元素命名为p
	每次取p的前一位元素赋给t；
	p之后直到数组尾的元素全体左移一位；
	t赋给数组尾；
	循环直到L.length()次；
	*/
}

3、
	//不可能在时间复杂度O(n) 空间复杂度O(1)下完成删除线性表中n个值为x的元素
	/*
计数器k记录符合条件元素已有个数；
从数组头开始，如果有符合条件的数组元素，则把其后一个元素p，复制到p前k个元素位置
直到数组尾	
*/

	4、 void
	foo(int &L, int s, int l)
{
	if (s >= t || L.length() <= 0)
	{
		printf("Error");
		exit;
	}
	for (int i = 0; i < n; i++)
	{
		if (s < L[i] < t)
		{
			L.ListDelete(i)
		}
	}
	return;
}

5、 void foo(int &L, int s, int l)
{
	if (s >= t || L.length() <= 0)
	{
		printf("Error");
		exit;
	}
	for (int i = 0; i < n; i++)
	{
		if (s <= L[i] <= t)
		{
			L.ListDelete(i)
		}
	}
	return;
}

6、
	//临时变量temp，数组首指针，temp等于第一个数据元素，向后对比，遇到相同的就删除该节点，不同的则更新temp，重复向后遍历对比；直到数组尽头

	7、
	//有序顺序表A、B，指针a，b，从首元素开始对比，若a>b，则b进入新数组，b向后进一位再对比；谁小谁进入新数组并后进一位再对比；当到一个数组的尽头时，
	//另一个数组剩下的元素统一进入新数组

	8、
	//开个m+n的新数组，线性表b先入队，线性表a再入队，再把新数组覆盖回去

	9、
	//折半查找到x元素，最终得到唯一确定的数组下标i，若A[i]==x，则交换A[i]和A[i+1]；否则在A[i]后调用插入操作插入元素x

	10、
	//

	11、
	//1、按序对比，同时计次，达到次数的元素值即为两序列的中位数
	//2、
	int L;
int s1[L], int s2[L];
int s[L];
int foo()
{
	int t = 0;
	int ia = 0;
	int ib = 0;
	for (int i = 0; i < L; i++)
	{
		if (s1[ia] <= s2[ib])
		{
			s[t]=s1[ia];
			ia++;
		}
		else
		{
			s[t]=s2[ib];
			ib++;
		}
		t++;
	}
	return s[L-1];
}
	//3、时间复杂度O(n); 空间复杂度O(n)

12、
//1、众数，且等于众数的元素数要大于总元素数的一半
//2、
int temp[n];
for(int i = 0; i<n; i++){
	temp[a[i]]++;
}
int max_addr;int max=temp[0];
for (int i = 0; i < n; i++)
{
	if(temp[i]>max){
		max = temp[i];
		max_addr = i;
	}
}
if(i>n/2)
{
	return temp[i];
}
else
{
	return -1;
}

//3、空间n，时间n

13、
//1、
