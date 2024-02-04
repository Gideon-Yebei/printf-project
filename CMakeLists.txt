cmake_minimum_required(VERSION 3.27)
project(printf C)

set(CMAKE_C_STANDARD 99)

add_executable(printf
		_printf.c
		_printf.h
		main.c
		main.h
		get_flags.c
		get_flags.h
		get_precision.c
		get_precision.h
		get_size.c
		get_size.h
		get_width.c
		get_width.h
		is_digit.c
		is_digit.h
		print_buffer.c
		print_buffer.h
		handle_print.c
		handle_print.h)
