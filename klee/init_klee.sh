https://tutorcs.com
WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
#!/bin/sh

sudo docker run -v /home/cs6340/klee/:/home/klee/klee -ti --name=klee_container --ulimit='stack=-1:-1' klee/klee:1.4.0

