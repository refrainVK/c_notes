# comment
# 显示规则
# 目标文件：依赖文件
# [TAB] 指令
#
# 显式规则
# 第一个目标文件是最终目标
# 伪目标：没有目标，相当于linux中的一些处理 .PHONY:
#
# 变量 = += :=
#
# 隐式规则
# %.c %.o 任意的.c .o
# *.c *.o 所有的.c .o
# $^ 所有的目标文件
# $^ 所有的依赖文件
# $^ 所有的依赖文件中时间最早的

TAR = hello
OBJ = hello.o cube.o main.o
CC := gcc

#$(TAR):%.o
#	$(CC) $@ -o $^

#%.o:%.S
#	$(CC) -c $@ -o $^
#
#%.S:%.i
#	$(CC) -S $@ -o $^

all:$(subst .c,.o,$(wildcard *.c))

%.o:%.c
	gcc -o $@ $<

.PHONY:
create:
	touch Ok
clean:
	rm hello.i
