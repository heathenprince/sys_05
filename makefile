dirinfo: dirinfo.c
	gcc dirinfo.c -o dirinfo

run: dirinfo
	./dirinfo

clean:
	rm dirinfo
	rm *~
