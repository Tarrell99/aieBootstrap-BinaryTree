#pragma once
#include "Font.h"
#include"BinaryTree.h"
#include"Application.h"
class TreeApplication : public aie::Application
{
public:
	TreeApplication();
	virtual ~TreeApplication();

	virtual bool startup();
	virtual void shutdown();

	virtual void update(float deltaTime);
	virtual void draw();

protected:

	aie::Renderer2D*	m_2dRenderer;
	BinaryTree m_binaryTree;
	TreeNode* m_selectedNode;
	aie::Font*			m_font;

};
