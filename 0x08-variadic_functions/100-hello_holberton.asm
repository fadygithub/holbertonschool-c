section .text
	global   main	

main:				; Entry point

	mov     edx,len	;message length
	mov     ecx,msg	;message to write
	mov     ebx,1	;file descriptor
	mov     eax,4	;system call number
	int     0x80	;call kernel

	section     .data

	msg     db  'Hello, Holberton',0xa	;our dear string
	len     equ $ - msg

