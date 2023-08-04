#include"player.h"

class Node{
	player p;
	Node* next;
	
	public:
		Node(player&);
		void setplayer(player&);
		void setnext(Node*);
		player getplayer();
		Node* getnext();
};


