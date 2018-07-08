del .obj
del .exe
cl /c /W2 signinpro.c
link signinpro.obj
signinpro.exe
