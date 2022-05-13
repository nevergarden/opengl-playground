#include <glad/glad.h>
#include <GL/gl.h>
#include <stdio.h>
#include <GL/freeglut.h>
#include <GL/freeglut_std.h>

/**
 * Here we will get list of opengl strings.
 */

int main(int argc, char * argv[]) {
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGBA);
  glutCreateWindow("");
  gladLoadGL();
  printf("Using opengl version: %s\n", glGetString(GL_VERSION));

  glutMainLoop();
}
