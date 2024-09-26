class Solution {
public:
    struct Node {
        int data = 0; 
        int prefixCount = 0; // Store the frequency of prefixes ending at this node
        Node* child[26];
        Node() {
            for (int i = 0; i < 26; i++) {
                child[i] = NULL;
            }
        }
    };

    void insert(Node*& root, string& key) {
        Node* curr = root;
        for (auto x : key) {
            if (curr->child[x - 'a'] == NULL) {
                curr->child[x - 'a'] = new Node();
            }
            curr = curr->child[x - 'a'];
            curr->prefixCount++; // Increment prefix count at each node
            curr->data++; 
        }
    }

    int search(Node* root, string key) {
        Node* curr = root;
        int cnt = 0;
        for (char x : key) {
            curr = curr->child[x - 'a'];
            cnt += curr->data; // Directly use the pre-calculated prefix count
        }
        return cnt;
    }

    vector<int> sumPrefixScores(vector<string>& words) {
        Node* root = new Node();
        for (auto word : words) {
            insert(root, word);
        }
        vector<int> ans;
        for (auto word : words) {
            int num = search(root, word);
            ans.push_back(num);
        }
        return ans;
    }
};