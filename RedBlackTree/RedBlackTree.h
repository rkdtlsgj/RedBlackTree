
enum NODE_COLOR
{
	BLACK = 0,
	RED
};

struct st_NODE
{
	struct st_NODE* stp_Parent;
	struct st_NODE* stp_Left;
	struct st_NODE* stp_Right;

	NODE_COLOR Color;

	int iData;
};

class RedBlackTree
{	
	public:
		RedBlackTree();
		~RedBlackTree();

		bool InsertNode(int iData);
		void DeleteNode(int iData);
		void Clear();

		void PreorderPrint();	//전위 순회
		void InorderPirnt();	//중위 순회
		void PostorderPrint();	//후위 순회


	private:
		void preorderPrint(st_NODE* node);
		void inorderPirnt(st_NODE* node);
		void postorderPrint(st_NODE* node);

		void clear(st_NODE* pNode);
		bool linkNode(st_NODE* pParent, st_NODE* pChild);
		st_NODE* findNode(st_NODE* pNode, int iData);
		void deleteNode(st_NODE* pNode, int iData);
		st_NODE* findDeleteNode(st_NODE* pNode, st_NODE* pParent);

		void LeftRotation(st_NODE* pNode);
		void RightRotation(st_NODE* pNode);

		void InsertBalanceTree(st_NODE* pNode);
		void DeleteBalanceTree(st_NODE* pNode);

		st_NODE Nil;
		st_NODE* m_pRoot;
		int m_iNodeCount;
	
};