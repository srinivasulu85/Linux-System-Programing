#include<string.h>
#include<unistd.h>

int main(){

        int fd[2];

        if(pipe(fd)<0)
        {
                perror("Pipe error");
                return;

        }
        printf("fd[0]=%d  fd[1]=%d\n",fd[0],fd[1]);


                if(fork()==0){
                        char a[10];
                        read(fd[0], a,sizeof (a));
                        printf("In chiled oriocess=%s\n",a);
                }

                        else {

                                        char b[10];
                                        printf("Enetr the string in parent side in pipe\n");
                                        scanf("%s",b);
                                        write(fd[1],b,strlen(b)+1);
                                        sleep(1);
                                }
                        }



