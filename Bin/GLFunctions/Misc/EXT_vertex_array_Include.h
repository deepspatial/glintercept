#define GLI_INCLUDE_GL_EXT_VERTEX_ARRAY

enum Main {

  //GL_VERTEX_ARRAY_EXT                      = 0x8074,
  //GL_NORMAL_ARRAY_EXT                      = 0x8075,
  //GL_COLOR_ARRAY_EXT                       = 0x8076,
  //GL_INDEX_ARRAY_EXT                       = 0x8077,
  //GL_TEXTURE_COORD_ARRAY_EXT               = 0x8078,
  //GL_EDGE_FLAG_ARRAY_EXT                   = 0x8079,
  //GL_VERTEX_ARRAY_SIZE_EXT                 = 0x807A,
  //GL_VERTEX_ARRAY_TYPE_EXT                 = 0x807B,
  //GL_VERTEX_ARRAY_STRIDE_EXT               = 0x807C,
  GL_VERTEX_ARRAY_COUNT_EXT                = 0x807D,
  //GL_NORMAL_ARRAY_TYPE_EXT                 = 0x807E,
  //GL_NORMAL_ARRAY_STRIDE_EXT               = 0x807F,
  //GL_NORMAL_ARRAY_COUNT_EXT                = 0x8080,
  //GL_COLOR_ARRAY_SIZE_EXT                  = 0x8081,
  //GL_COLOR_ARRAY_TYPE_EXT                  = 0x8082,
  //GL_COLOR_ARRAY_STRIDE_EXT                = 0x8083,
  GL_COLOR_ARRAY_COUNT_EXT                 = 0x8084,
  //GL_INDEX_ARRAY_TYPE_EXT                  = 0x8085,
  //GL_INDEX_ARRAY_STRIDE_EXT                = 0x8086,
  GL_INDEX_ARRAY_COUNT_EXT                 = 0x8087,
  //GL_TEXTURE_COORD_ARRAY_SIZE_EXT          = 0x8088,
  //GL_TEXTURE_COORD_ARRAY_TYPE_EXT          = 0x8089,
  //GL_TEXTURE_COORD_ARRAY_STRIDE_EXT        = 0x808A,
  GL_TEXTURE_COORD_ARRAY_COUNT_EXT         = 0x808B,
  //GL_EDGE_FLAG_ARRAY_STRIDE_EXT            = 0x808C,
  GL_EDGE_FLAG_ARRAY_COUNT_EXT             = 0x808D,
  //GL_VERTEX_ARRAY_POINTER_EXT              = 0x808E,
  //GL_NORMAL_ARRAY_POINTER_EXT              = 0x808F,
  //GL_COLOR_ARRAY_POINTER_EXT               = 0x8090,
  //GL_INDEX_ARRAY_POINTER_EXT               = 0x8091,
  //GL_TEXTURE_COORD_ARRAY_POINTER_EXT       = 0x8092,
  //GL_EDGE_FLAG_ARRAY_POINTER_EXT           = 0x8093,

};

void glArrayElementEXT( GLint i );
void glColorPointerEXT(GLint size, GLenum[Main] type, GLsizei stride, GLsizei count, const GLvoid * pointer);
void glDrawArraysEXT(GLenum[Primitives] mode, GLint first, GLsizei count);
void glEdgeFlagPointerEXT(GLsizei stride, GLsizei count, const GLboolean * pointer);
void glGetPointervEXT(GLenum[Main] pname, GLvoid **params );
void glIndexPointerEXT(GLenum[Main] type, GLsizei stride, GLsizei count, const GLvoid * pointer);
void glNormalPointerEXT(GLenum[Main] type, GLsizei stride, GLsizei count, const GLvoid * pointer);
void glTexCoordPointerEXT(GLint size, GLenum[Main] type, GLsizei stride, GLsizei count, const GLvoid * pointer);
void glVertexPointerEXT(GLint size, GLenum[Main] type, GLsizei stride, GLsizei count, const GLvoid * pointer);