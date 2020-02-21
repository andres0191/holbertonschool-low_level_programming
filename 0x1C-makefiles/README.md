# MakeFiles

![picture makefile](https://www.it.uc3m.es/~pedmume/asignaturas/2005/LAO/Lab2/index.1.gif)


GNU makes a utility available on Linux that speeds up the task of compiling code from the terminal. It avoids us having to write the compilation commands by hand, which are usually very long, and instead allows us to write something much shorter than in the end it does the same. In addition, you can do many other things that will make preparing the practices to send them sewing and singing.


Makefiles are files that are included in the root folder of a project that tell a program, make, that runs from the terminal, what to do with each of the code files to compile them. In order to use the compilation recipes that we write in a Makefile, it is necessary to have the make program installed.


To install the make program, which usually comes by default you can do the following if you are in Ubuntu or one of its cousins (Debian, Xubuntu, etc.):

	```
	sudo apt-get install make
	```

# How to use make

Suppose your main.c file includes other files such as stack.h, since you have implemented a stack and need to use it in your main file. On this occasion, if you simply do make main, the make program will not be able to infer that you want to link your stack with the main one and the compilation will probably fail. Here the Makefiles come into play, which contain compilation instructions so you don't have to write them every time you want to compile a file. For example, suppose you have a stack.o object file that you have already compiled, and you want to make it link to main every time you compile main.c, an example of Makefile that would do this would be the following:

```
main: main.c stack.o
	gcc -Wall -g -o main main.c stack.o
```

Let's see step by step what is happening:


In the first line we have the name of the objective (target in this case). When we execute make something, the make program will look for a target called something. Behind the colon we put the names of the files that are used to generate this target, in this case the source code itself (main.c) and the stack.o object (no matter the order). In this way we are telling make that every time we tell you to compile what is necessary to get the main executable, make sure that main.c and stack.o exist. In fact, if they don't already exist, make will look for ways to compile them (here is the power of make). Note: the name of the target and the executable we generate with the compiler do not have to match (what goes behind the -o, but if not, make will not be as efficient as it can be).

Second line. The first thing is to say that under the first line that defines the objective, all the lines that we want with the commands that we want to execute when we write make target in the terminal go. In this case, when we write make main, only one command will be executed, that of the compiler, which occupies the entire second line. One very important thing is that the lines that contain instructions, like the second one, must be indented by a tab, not by four spaces or similar, otherwise make will fail.

If this example existed, running make main in the terminal would actually be running gcc -Wall -g -o main main.c stack.o. As you can see we have saved some characters to write and memorize.
