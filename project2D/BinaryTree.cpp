#include "BinaryTree.h"

BinaryTree::BinaryTree()
{
}

BinaryTree::~BinaryTree()
{
}

bool BinaryTree::isEmpty() const
{
	if (m_pRoot == nullptr)
	return true;

	else
	{
		return false;
	}
}

void BinaryTree::insert(int a_nValue)
{
	if (m_pRoot == nullptr)
	{
		// the root shoud get the value
		m_pRoot == a_nValue;
	}
	else if (m_pRoot < a_nValue)
	{
		// move to the right
	}
	else if(m_pRoot > a_nValue)
	{
		// move to the left
	}
}

void BinaryTree::remove(int a_nValue)
{
	int* wheartheNumer;

	while (a_nValue != wheartheNumer )
	{
		if (wheartheNumer > a_nValue)
		{
			// move to the right
		}
		if (wheartheNumer < a_nValue)
		{
			// move to left
		}
		else
		{
			delete wheartheNumer-> /*whats its pointing to*/;
		}
	}
}

TreeNode * BinaryTree::find(int a_nValue)
{
	int* wheartheNumer;

	while (a_nValue != wheartheNumer)
	{
		if (wheartheNumer > a_nValue)
		{
			// move to the right
		}
		if (wheartheNumer < a_nValue)
		{
			// move to left
		}
	}

	return wheartheNumer-> /*whats iys pointing to*/;
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
