section .data
    hello db 'Hello, Holberton', 0
    newline db 10

section .text
    global main

extern printf
extern exit

main:
    sub rsp, 8
    mov rdi, hello
    call printf

    mov rdi, newline
    call printf

    add rsp, 8

    mov rdi, 0
    call exit
