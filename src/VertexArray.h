#pragma once

#include "GLUtils.h"
#include "VertexBuffer.h"
#include "VertexBufferLayout.h"

class VertexArray : IBindable
{
	int attributeIndex = 0;
public:
	VertexArray();
	~VertexArray();
	VertexArray(const VertexArray&) = delete;
	VertexArray(VertexArray&&) = delete;

	void Bind() const override;
	void Unbind() const override;

	void AddBuffer(const VertexBuffer& buffer, const VertexBufferLayout& layout);
	void AddInstancedBuffer(const VertexBuffer& buffer, const VertexBufferLayout& layout);
};