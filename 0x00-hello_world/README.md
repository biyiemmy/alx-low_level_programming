# 0x00. C - Hello, World

0. Preprocessor -> Write a script that runs a C file through the preprocessor and save the result into another file.
                    <br />The C file name will be saved in the variable $CFILE
                    <br />The output should be saved in the file c
		    
1. Compiler -> Write a script that compiles a C file but does not link.
		<br /> The C file name will be saved in the variable $CFILE
		<br /> The output file should be named the same as the C file, but with the extension .o instead of .c.
			<br /> Example: if the C file is main.c, the output file should be main.o
			
2. Assembler -> Write a script that generates the assembly code of a C code and save it in an output file.
		<br /> The C file name will be saved in the variable $CFILE
		<br /> The output file should be named the same as the C file, but with the extension .s instead of .c.
			<br /> Example: if the C file is main.c, the output file should be main.s
