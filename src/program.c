/**
 * program
 * Description: Defines a program and instantiates it with default
 * values upon creation.  Used by handleCommand.c when the user 
 * input is not a built-in but rather an executable.
 * STDIN_FILENO & STDOUT_FILENO are default standard input/output file descriptors
 */

#include <stddef.h> /* NULL */
#include "program.h"

Program * theProgram( ){

	Program * program = (Program * )malloc( sizeof( Program ) );

	program->name = NULL;
	for (int i = 0; i < 51; ++i ) {
	  program->argv[i] = (char *)malloc(sizeof(char)*50);
	}
	program->argc = 0;
	program->redirect = DEFAULT;
	program->next = NULL;
	
	return program;
}

