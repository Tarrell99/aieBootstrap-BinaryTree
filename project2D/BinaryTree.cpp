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
	TreeNode* currentNode = m_pRoot;
	TreeNode* ParentNode = m_pRoot;
	if (isEmpty() == true)
	{
		TreeNode* first = new TreeNode(a_nValue);
		m_pRoot = first;
		return;
	}
	while (currentNode != nullptr)
	{
		if (a_nValue < currentNode->getData())
		{
			TreeNode* newNode = new TreeNode(a_nValue);

			ParentNode = currentNode;

			currentNode = currentNode->getLeft();
		}
		if (a_nValue > currentNode->getData())
		{
			TreeNode* newNode = new TreeNode(a_nValue);

			ParentNode = currentNode;

			currentNode = currentNode->getRight();
		}
		if (a_nValue == currentNode->getData())
		{
			break;
		}
	}
	if (a_nValue < ParentNode->getData())

	{
		TreeNode* test = new TreeNode(a_nValue);
		ParentNode->setLeft(test);
	}

	if (a_nValue > ParentNode->getData())
	{
		TreeNode* test = new TreeNode(a_nValue);

		ParentNode->setRight(test);
	}
}

void BinaryTree::remove(int a_nValue)
{
	TreeNode* currentNode = m_pRoot;

	TreeNode* parentNode = m_pRoot;

	TreeNode** ptrCurrentNode = &currentNode;

	TreeNode** ptrParentNode = &parentNode;

	if (findNode(a_nValue, ptrCurrentNode, ptrParentNode))

	{
		if (currentNode->hasRight())

		{
			TreeNode* IterCurrent = (*ptrCurrentNode);

			TreeNode* IterParent = (*ptrParentNode);

			if (IterCurrent->hasRight())

			{
				IterParent = IterCurrent;

				IterCurrent = IterCurrent->getRight();

			}

			while (IterCurrent->hasLeft())

			{

				IterParent = IterCurrent;

				IterCurrent = IterCurrent->getLeft();

			}
			currentNode->setData(IterCurrent->getData());

			if (IterParent->getLeft() == IterCurrent)
			{

				IterParent->setLeft(IterCurrent->getRight());

			}
			else if (IterParent->getRight() == IterCurrent)
			{
				IterParent->setRight(IterCurrent->getRight());
			}

			delete IterCurrent;

		}
		else

		{
			if (parentNode->getLeft() == currentNode)

			{
				parentNode->setLeft(currentNode->getLeft());
			}
			else if (parentNode->getRight() == currentNode)
			{
				parentNode->setRight(currentNode->getLeft());
			}

			else if (m_pRoot == currentNode)

			{
				m_pRoot = currentNode->getLeft();
			}

			delete currentNode;
		}
	}
}

TreeNode * BinaryTree::find(int a_nValue)
{
	
	TreeNode* currentNode = m_pRoot;

	while (currentNode != nullptr)

	{

		if (a_nValue < currentNode->getData())

		{
			currentNode = currentNode->getLeft();
		}

		if (a_nValue > currentNode->getData())

		{
			currentNode = currentNode->getRight();
		}

		if (a_nValue == currentNode->getData())

		{
			return currentNode;

		}
	}

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
