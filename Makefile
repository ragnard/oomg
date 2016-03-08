all: oomg

clean:
	rm oomg
.PHONY: clean

oomg: oomg.c
	gcc -std=c99 -static -Wall -g -o oomg oomg.c

image: oomg
	docker build -t ragge/oomg:latest .

push:
	docker push ragge/oomg
