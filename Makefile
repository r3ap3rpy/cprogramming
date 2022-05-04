CFLAGS='-Wall'
all:
	cc ./source/hello_world.c -o ./bin/hello_world
	cc ./source/mainer.c -o ./bin/mainer
	cc ./source/flow.c -o ./bin/flow
	cc ./source/sw.c -o ./bin/sw
	cc ./source/var_types.c -o ./bin/var_types
	cc ./source/ar_str.c -o ./bin/ar_str
	cc ./source/function.c -o ./bin/function
	cc ./source/ptrs.c -o ./bin/ptrs
	cc ./source/structs.c -o ./bin/structs
	cc ./source/heapstack.c -o ./bin/heapstack
	cc ./source/scopeglob.c -o ./bin/scopeglob
	cc ./source/io.c -o ./bin/io
	cc ./source/dynarray.c -o ./bin/dynarray
	cc ./source/hmap.c -o ./bin/hmap
	cc ./source/queue.c -o ./bin/queue
	cc ./source/stack.c -o ./bin/stack
clean:
	rm -f ./bin/hello_world
	rm -f ./bin/mainer
	rm -f ./bin/flow
	rm -f ./bin/sw
	rm -f ./bin/var_types
	rm -f ./bin/ar_str
	rm -f ./bin/function
	rm -f ./bin/ptrs
	rm -f ./bin/structs
	rm -f ./bin/heapstack
	rm -f ./bin/scopeglob
	rm -f ./bin/io
	rm -f ./bin/dynarray
	rm -f ./bin/hmap
	rm -f ./bin/queue
	rm -f ./bin/stack
