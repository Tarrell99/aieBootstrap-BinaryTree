#include "BinaryTree.h"

BinaryTree::BinaryTree()
{
}

BinaryTree::~BinaryTree()
{
}

bool BinaryTree::isEmpty() const
{
	if ( m_pRoot == nullptr)
	return true;

	else
	{
		return false;
	}
}

void BinaryTree::insert(int a_nValue)
{
	
}

void BinaryTree::remove(int a_nValue)
{
	BinaryTree* pointer1;
	BinaryTree* pointer2;
	BinaryTree* pointer3;
	BinaryTree* pointer4;
	BinaryTree* pointer5;
	BinaryTree* pointer6;



}

TreeNode * BinaryTree::find(int a_nValue)
{
	

	return m_pRoot;
}

void BinaryTree::draw(aie::Renderer2D * renderer, TreeNode * selected)
{
	draw(renderer, m_pRoot, 640, 680, 640, selected);
}

bool BinaryTree::findNode(int a_nSearchValue, TreeNode ** ppOutNode, TreeNode ** ppOutParent)
{
	
		return false;
}

void BinaryTree::draw(aie::Renderer2D * renderer, TreeNode * pNode, int x, int y, 
	int horizontalSpacing, TreeNode * selected)
{
	horizontalSpacing /= 2;
	if (pNode) 
	{
		if (pNode->hasLeft()) 
		{
			renderer->setRenderColour(1, 0, 0);
			renderer->drawLine(x, y, x - horizontalSpacing, y - 80);
			draw(renderer, pNode->getLeft(), x - horizontalSpacing,
				y - 80, horizontalSpacing, selected);
		}
		if (pNode->hasRight())
		{
			renderer->setRenderColour(1, 0, 0);
			renderer->drawLine(x, y, x + horizontalSpacing, y - 80);
			draw(renderer, pNode->getRight(), x + horizontalSpacing,
				y - 80, horizontalSpacing, selected);
		}
		pNode->draw(renderer, x, y, (selected == pNode));
	}
}
