#define _CRT_SECURE_NO_WARNINGS
#include"Queue.h"
#include"Heap.h"
//int main()
//{
//	HP hp;
//	HeapInit(&hp);
//	int a[] = { 65,100,70,32,50,60 };
//	for (int i = 0; i < sizeof(a) / sizeof(int); ++i)
//	{
//		HeapPush(&hp, a[i]);
//	}
//	for (int i = 0; i < sizeof(a) / sizeof(int); ++i)
//	{
//		printf("%d ", hp.a[i]);
//	}
//
//	return 0;
//}
//过于繁琐的方法
//void HeapSort(int* a, int n)
//{
//	HP hp;
//	HeapInit(&hp);
//	for (int i = 0; i < n; ++i)
//	{
//		HeapPush(&hp, a[i]);
//	}
//
//	
//	int i = 0;
//	while (!HeapEmpty(&hp))
//	{
//		int top = HeapTop(&hp);
//		a[i++] = top;
//		HeapPop(&hp);
//	}
//}
//降序
void HeapASort(int* a, int n)
{
	//建堆
	for (int i = 0; i < n; i++)
	{
		AdjustUp(a, i);
	}
	int end = n - 1;
	while (end>0)
	{
		Swap(&a[0], &a[end]);
		AdjustDown(a, end, 0);

		end--;
    }

}

void HeapDSort(int* a, int n)
{
	// 建堆--向下调整建堆
	for (int i = (n - 1) / 2; i >= 0; --i)
	{
		AdjustDown(a, n, i);
	}

	int end = n - 1;
	while (end > 0)
	{
		Swap(&a[0], &a[end]);
		AdjustDown(a, end, 0);
		--end;
	}
}
//int main()
//{
//	HP hp;
//	HeapInit(&hp);
//	int a[] = { 65,100,70,32,50,60 };
//	for (int i = 0; i < sizeof(a) / sizeof(int); ++i)
//	{
//		HeapPush(&hp, a[i]);
//	}
//
//	// 10:42继续
//	while (!HeapEmpty(&hp))
//	{
//		int top = HeapTop(&hp);
//		printf("%d\n", top);
//		HeapPop(&hp);
//	}
//
//	return 0;
//}
void PrintTopK(const char* file, int k)
{
	// 1. 建堆--用a中前k个元素建小堆
	int* topk = (int*)malloc(sizeof(int) * k);
	assert(topk);

	FILE* fout = fopen(file, "r");
	if (fout == NULL)
	{
		perror("fopen error");
		return;
	}

	// 读出前k个数据建小堆
	for (int i = 0; i < k; ++i)
	{
		fscanf(fout, "%d", &topk[i]);
	}

	for (int i = (k - 2) / 2; i >= 0; --i)
	{
		AdjustDown(topk, k, i);
	}

	// 2. 将剩余n-k个元素依次与堆顶元素交换，不满则则替换
	int val = 0;
	int ret = fscanf(fout, "%d", &val);
	while (ret != EOF)
	{
		if (val > topk[0])
		{
			topk[0] = val;
			AdjustDown(topk, k, 0);
		}

		ret = fscanf(fout, "%d", &val);
	}

	for (int i = 0; i < k; i++)
	{
		printf("%d ", topk[i]);
	}
	printf("\n");

	free(topk);
	fclose(fout);
}

void CreateNDate()
{
	// 造数据
	int n = 10000000;
	srand(time(0));
	const char* file = "data.txt";
	FILE* fin = fopen(file, "w");
	if (fin == NULL)
	{
		perror("fopen error");
		return;
	}

	for (size_t i = 0; i< n; ++i)
	{
		int x = rand() % 10000;
		fprintf(fin, "%d\n", x);
	}

	fclose(fin);
}

//int main()
//{
//	//int a[10] = { 2, 1, 5, 7, 6, 8, 0, 9, 4, 3}; // 对数组排序
//	//HeapSort(a, 10);
//
//	//CreateNDate();
//	PrintTopK("data.txt", 10);

//int main()
//{
//	int a[] = { 65,100,70,32,50,60 };
//	HeapDSort(a, sizeof(a) / sizeof(a[0]));
//	int i = 0;
//	for (i = 0; i < sizeof(a) / sizeof(a[0]); i++)
//	{
//		printf("%d ", a[i]);
//	}
//}
//}



typedef int BTDataType;
typedef struct BinaryTreeNode
{
	BTDataType data;
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
}BTNode;

BTNode* BuyNode(BTDataType x)
{
	BTNode* newnode = (BTNode*)malloc(sizeof(BTNode));
	if (newnode == NULL)
	{
		perror("malloc fail");
		return NULL;
	}
	newnode->data = x;
	newnode->left = NULL;
	newnode->right = NULL;
	return newnode;

}



BTNode* CreatTree()
{
	BTNode* node1 = BuyNode(1);
	BTNode* node2 = BuyNode(2);
	BTNode* node3 = BuyNode(3);
	BTNode* node4 = BuyNode(4);
	BTNode* node5 = BuyNode(5);
	BTNode* node6 = BuyNode(6);
	

	node1->left = node2;
	node1->right = node4;
	node2->left = node3;
	node4->left = node5;
	node4->right = node6;
	

	return node1;
}
void PreOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("N ");
		return;
	}
	printf("%d ", root->data);
	PreOrder( root->left);
	PreOrder(root->right);
}
void InOrder(BTNode* root) {
	if (root == NULL) {
		printf("N ");
		return;
	}

	InOrder(root->left);
	printf("%d ", root->data);
	InOrder(root->right);
}
void PostOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("N ");
		return;
	}

	PostOrder(root->left);
	PostOrder(root->right);
	printf("%d ", root->data);
}

//void BTreesize(BTNode*root)
//{
//	
//	if (root == NULL)
//	{
//		return;
//	}
//	sz++;
//	BTreesize(root->left);
//	BTreesize(root->right);
//
//
//}
int BTreeSize(BTNode* root)
{
	return root == NULL ? 0 : BTreeSize(root->left) + BTreeSize(root->right) + 1;
}
int BTreeLeafSize(BTNode* root)
{
	if (root==NULL)
	{
		return 0;
	}
	if (root->left == NULL && root->right == NULL)
	{
		return 1;
	}
	return BTreeLeafSize(root->left) + BTreeLeafSize(root->right);
}
int BTreeHigh(BTNode*root)
{
	if (root == NULL)
	{
		return 0;
	}
	int lefthigh = BTreeHigh(root->left);
	int righthigh = BTreeHigh(root->right);
	return lefthigh > righthigh ? lefthigh + 1 : righthigh + 1;
}
int BinaryTreeLevelKSize(BTNode* root, int k)
{
	assert(k > 0);
	if (root == NULL)
	{
		return 0;
	}
	if (k == 1)
	{
		return 1;
	}
	return BinaryTreeLevelKSize(root->left,k-1) 
		+ BinaryTreeLevelKSize(root->right,k-1);


}

BTNode* BinaryTreeFind(BTNode* root, BTDataType x)
{
	if (root == NULL)
	{
		return NULL;
	}
	if (root->data == x)
	{
		return root;
	}
	BTNode* lefttree = BinaryTreeFind(root->left, x);
	if (lefttree != NULL)
	{
		return lefttree;
	}
	BTNode* righttree = BinaryTreeFind(root->right, x);
	return righttree;
}
// 层序遍历
void BinaryTreeLevelOrder(BTNode* root)
{
	Queue q;
	QueueInit(&q);
	if (root)
	{
		QueuePush(&q,root);
	}
	while (!QueueEmpty(&q))
	{
		BTNode* Front = QueueFront(&q);
		QueuePop(&q);
		printf("%d ", Front->data);
		if (Front->left)
		{
			QueuePush(&q, Front->left);
		}
		if (Front->right)
		{
			QueuePush(&q, Front->right);
		}
	}

	QueueDestory(&q);
}
// 判断二叉树是否是完全二叉树
bool isComplete(BTNode* node) {
	if (node == NULL)
		return true;

	bool isLeftComplete = isComplete(node->left);
	bool isRightComplete = isComplete(node->right);

	if (!isLeftComplete || !isRightComplete)
		return false;

	return true;
}

int BinaryTreeComplete(BTNode* root) {
	if (isComplete(root))
		return 1;
	else
		return 0;
}
void BinaryDestory(BTNode* root)
{
	if (root == NULL)
	{
		return;
	}
	BinaryDestory(root->left);
	BinaryDestory(root->right);
	free(root);

}
int main()
{
	
		BTNode* root = CreatTree();
		/*PreOrder(root);
		printf("\n");
		InOrder(root);
		printf("\n");
		PostOrder(root);
		printf("\n");
	int sz=BTreeSize(root);
		printf("%d\n", sz);
		 sz = BTreeLeafSize(root);
		printf("%d\n",sz);
		sz = BTreeHigh(root);
		printf("%d\n", sz);
		sz=BinaryTreeLevelKSize(root, 2);
		printf("%d\n", sz);*/
		//int targetValue = 3;
		//struct BTNode* result = BinaryTreeFind(root, targetValue);

		//// 检查结果
		//if (result != NULL) {
		//	printf("Found node with value %d\n", targetValue);
		//}
		//else {
		//	printf("Node with value %d not found\n", targetValue);
		//}
	/*	BinaryTreeLevelOrder(root);*/

		int a=BinaryTreeComplete(root);
		printf("%d", a);


}