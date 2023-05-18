#define _CRT_SECURE_NO_WARNINGS
#include"Queue.h"


void TestQueue()
{
	Queue q;
	QueueInit(&q);
	QueuePush(&q, 1);
	QueuePush(&q, 2);
	printf("%d ", QueueFront(&q));
	QueuePop(&q);
	printf("%d ", QueueFront(&q));
	QueuePop(&q);

	QueuePush(&q, 3);
	QueuePush(&q, 4);

	while (!QueueEmpty(&q))
	{
		printf("%d ", QueueFront(&q));
		QueuePop(&q);
	}
	printf("\n");

	QueueDestory(&q);
}

int main()
{
	//TestStack();
	TestQueue();

	return 0;
}