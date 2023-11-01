#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#define MAXSIZE 100
typedef struct {
	char name[20];
	char sex;
}Person;
typedef struct {
	Person dancer[MAXSIZE];
	int front;
	int rear;
}SqQueue;
//初始化队列
void initqueue(SqQueue* b, SqQueue* g) {
	b->front = b->rear = 0;
	g->front = g->rear = 0;
}
//相应函数 
void solve(Person dancer[], SqQueue* b, SqQueue* g) {
	int i = 0;
	//放入男女队列 
	while (dancer[i].sex != '\0')
	{
		if (dancer[i].sex == 'm')
		{
			b->front++;
			b->dancer[b->front] = dancer[i];
		}
		if (dancer[i].sex == 'w')
		{
			g->front++;
			g->dancer[g->front] = dancer[i];
		}
		i++;
	}
	//输出舞伴
	while ((b->rear != b->front) && (g->rear != g->front))
	{
		(b->rear)++;
		(g->rear)++;
		printf("男舞：%s,女舞：%s\n", b->dancer[b->rear].name, g->dancer[g->rear].name);

	}
	//为空输出
	if (g->rear == g->front)
		printf("%s", b->dancer[b->rear + 1].name);
	else
		printf("%s", g->dancer[g->rear + 1].name);
}
main() {
	SqQueue  b, g;
	initqueue(&b, &g);
	int n;
	printf("请输入有多少名舞者:");
	scanf("%d", &n);
	Person dancer[n];
	int i;
	for (i = 0; i < n; i++) {
		printf("请输入第%d个舞者的姓名和性别（m表示男性，w表示女性，姓名和性别用逗号隔开):", i + 1);
		scanf("%s,%c", &dancer[i].name, &dancer[i].sex);
	}
	solve(dancer, &b, &g);
	for (i = 0; i < n; i++) {
		printf("请输入第%d个舞者的姓名和性别（m表示男性，w表示女性，姓名和性别用逗号隔开):", i + 1);
		printf("%s,%c", dancer[i].name, dancer[i].sex);
	}
}