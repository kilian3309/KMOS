#ifndef _KERNEL_H_GUARD
#define _KERNEL_H_GUARD
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include "terminal.h"

#if defined(_WIN32) || defined(__linux__)
#error This file is create to and only to KMOS operating system and must not be used on another operating system
#endif

#define KMOS
#define KMOS_VER 00001
#define KMOS_VER_STR "0.0.01"

//#ifdef UNICODE
//using char_t = wchar_t;
//#else
using char_t = char;
//#endif

namespace Core {
	class Kernel {
		Terminal<char_t> m_Terminal;
	public:
		int init() {
			m_Terminal.init(vga_utils::VGA_WIDTH, vga_utils::VGA_HEIGHT);
			return 0;
		}

		void write(const char_t* ch) {
			m_Terminal.write(ch);

		}




	};
}

#endif