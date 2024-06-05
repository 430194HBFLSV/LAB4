 .586
.XMM
.MODEL flat, C
.DATA
k dd 0
res dd ?
.CODE
extern cfunc:near
public asmfunc
asmfunc proc C x:dword, n:dword
    finit
asmloop:
    inc k
    push k
    push x
    call cfunc
    fld res
    fadd
    fstp res
    mov ecx, n
    cmp k, ecx
    jb asmloop
    fld res
    ret            
asmfunc endp       
End            
