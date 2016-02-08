
#include <iostream>
#include <GLFW/glfw3.h>

#include "font.h"


GLFWwindow* createWindow() {
	if (!glfwInit()) { return nullptr; }
	auto window = glfwCreateWindow(800, 600, "hoge window", nullptr, nullptr);
	if (!window) { glfwTerminate(); window = nullptr; }
	return window;
}

int main() {
	if (!glfwInit()) return 0;

	auto window = createWindow();
	if (!window) { return 0; }

	glfwMakeContextCurrent(window);

	Font font("../../assets/consolas.ttf");

	while (!glfwWindowShouldClose(window)) {
		glClearColor(0.3f, 0.3f, 0.3f, 1.0f);
		glClear(GL_COLOR_BUFFER_BIT);

		font.draw("Hello", 400, 300, 100,
			      Font::Hol::Center,
			      Font::Ver::Bottom);

		glfwSwapBuffers(window);
		glfwPollEvents();
	}

	glfwTerminate();
	return 0;
}
