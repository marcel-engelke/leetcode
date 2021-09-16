#include <math.h>
#include <stdio.h>
#include <stdlib.h>

struct ListNode {
	int val;
	struct ListNode *next;
};

int read_num(struct ListNode *node, int n, int pw)
{
	n += node->val * pow(10, pw);
	if (node->next != NULL) {
		return read_num(node->next, n, ++pw);
	}
	return n;
}

struct ListNode *make_list(int n)
{
	struct ListNode *node = (struct ListNode*) malloc(sizeof(struct ListNode));
	node->val = n % 10;
	if ((n -= node->val)) {
		node->next = make_list(n / 10);
	} else {
		node->next = NULL;
	}
	return node;
}

struct ListNode *addTwoNumbers(struct ListNode *a, struct ListNode *b)
{
	return make_list(read_num(a, 0, 0) + read_num(b, 0, 0));
}

int main()
{
	struct ListNode *a = make_list(342);
	printf("a:%d ", read_num(a, 0, 0));
	struct ListNode *b = make_list(465);
	printf("b:%d ", read_num(b, 0, 0));
	struct ListNode *sum = addTwoNumbers(a, b);
	printf("sum:%d\n", read_num(sum, 0, 0));
	free(a);
	free(b);
	free(sum);
}
