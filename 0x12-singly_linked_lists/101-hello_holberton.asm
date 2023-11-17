section .data
    hello db 'Hello, Holberton', 0

section .text
    global main

sec_main:
    mov rdi, hello
    call printf

    mov rdi, 0
    call exit
