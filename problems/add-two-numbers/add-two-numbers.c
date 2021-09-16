#include <math.h>
#include <stdio.h>
#include <stdlib.h>

struct ListNode {
	int val;
	struct ListNode *next;
};

// Add and init child, return pointer to child
struct ListNode *addchild(struct ListNode *node)
{
	node->next = (struct ListNode*) malloc(sizeof(struct ListNode));
	node->next->next = NULL;
	node->next->val = 0;
	return node->next;
}

// Add n to sum->val, return carryover
int add(struct ListNode *sum, int n)
{
	int co;
	sum->val += n;
	co = sum->val / 10;
	sum->val %= 10;
	return co;
}

// Add n to sum->val
void addnum(struct ListNode *sum, int n)
{
	int co;
	if ((co = add(sum, n))) {
		addnum(addchild(sum), co);
	}
}

// Add a->val + n to sum->val
void add1node(struct ListNode *sum, struct ListNode *a, int n)
{
	int co;
	n += a->val;
	co = add(sum, n);
	if (a->next != NULL) {
		add1node(addchild(sum), a->next, co);
	} else if (co) {
		addnum(addchild(sum), co);
	}
}

// Add a->val + b->val + n to sum->val
void add2node(struct ListNode *sum, struct ListNode *a, struct ListNode *b, int n)
{
	int co;
	n += (a->val + b->val);
	co = add(sum, n);
	if (a->next != NULL) {
		if (b->next != NULL) {
			add2node(addchild(sum), a->next, b->next, co);
		} else {
			add1node(addchild(sum), a->next, co);
		}
	} else if (b->next != NULL) {
		add1node(addchild(sum), b->next, co);
	} else if (co) {
		addnum(addchild(sum), co);
	}
}

struct ListNode *addTwoNumbers(struct ListNode *a, struct ListNode *b)
{
	struct ListNode *sum = (struct ListNode*) malloc(sizeof(struct ListNode));
	sum->next = NULL;
	sum->val = 0;
	add2node(sum, a, b, 0);
	return sum;
}
