#ifndef KEYBOARD_HPP
#define KEYBOARD_HPP

#include <3ds.h>
#include <string>

namespace Input {
	void DrawHex();
	void DrawNumpad();
	void drawKeyboard();
	std::string Numpad(std::string Text);
	std::string Numpad(uint maxLength, std::string Text);
	// -1 if invaild text entered
	int getUint(int max, std::string Text);
	std::string getHex(int max, std::string Text);

	std::string getString(std::string Text);
	std::string getStringLong(std::string Text); // For longer text.
	std::string getString(uint maxLength, std::string Text, float inputTextSize = 0.6f);
}

#endif