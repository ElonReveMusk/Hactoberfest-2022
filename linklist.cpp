
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node* next;
};

void push(Node** head_ref, int data)
{
	
	Node* new_node =new Node();
	new_node->data = data;
	new_node->next = (*head_ref);

	(*head_ref) = new_node;
}



int countValuesWithSameFreq(Node* start)
{
	map<int, int> mpp;
	Node* current = start;
	int count = 0;
	while (current != NULL) {
		mpp[current->data] += 1;
		current = current->next;
	}
	int ans = 0;
	for (auto x : mpp) {
		int value = x.first;
		int freq = x.second;

		if (value == freq) {
			ans++;
		}
	}
	return ans;
}

int main()
{
	Node* head = NULL;
	push(&head, 3);
	push(&head, 4);
	push(&head, 3);
	push(&head, 2);
	push(&head, 2);
	push(&head, 3);

	cout << countValuesWithSameFreq(head);
	return 0;
}
