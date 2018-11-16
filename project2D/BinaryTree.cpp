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
	if (m_pRoot->getData == m_pRoot)
	{
		m_pRoot == nullptr;
	}

	if (m_pRoot->getData < m_pRoot)
	{
		m_pRoot->setLeft;
	}

	if (m_pRoot->getData > m_pRoot)
	{
		m_pRoot->setRight;
	}
}

void BinaryTree::remove(int a_nValue)
{

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
