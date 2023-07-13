/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution
{
    public:
    Node* allNode[10000];
    bool visited[10000];
    void cloneGraphTra(Node* node, Node* answer)
    {
        if (visited[node->val]) return;

        visited[node->val] = true;

        for (int i = 0; i < node->neighbors.size(); i++)
        {
            if (allNode[node->neighbors[i]->val] == nullptr)
            {
                vector<Node*> vcurr;
                Node* curr = new Node(node->neighbors[i]->val, vcurr);
                answer->neighbors.push_back(curr);
                allNode[node->neighbors[i]->val] = curr;
            }
            else
            {
                answer->neighbors.push_back(allNode[node->neighbors[i]->val]);
            }
            cloneGraphTra(node->neighbors[i], answer->neighbors[i]);
        }

    }

    Node* cloneGraph(Node* node)
    {
        if (node == NULL) return node;
        Node* answer = new Node();
        Node* head = answer;
        answer->val = node->val;
        allNode[answer->val] = answer;
        memset(visited, false, sizeof(visited));
        cloneGraphTra(node, answer);
        return head;
    }
};
