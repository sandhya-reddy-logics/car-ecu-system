#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>

#define ECU_COUNT 5

int main()
{
	int i;
	const char *ecu_names[ECU_COUNT]={"ENGINE ECU","BRAKE ECU","BODY ECU","HVAC ECU","INFOTAINMENT ECU"};
	pid_t child_pids[ECU_COUNT];

	printf("parent PID : %d\n", (int)getpid());
	printf("Parent PPID : %d\n", (int)getppid());

	for(i=0;i<ECU_COUNT;i++)
	{
		child_pids[i]=fork();

		if(child_pids[i]<0)
		{
			perror("fork failed");
			return 1;
		}
		if(child_pids[i]==0)
		{
			printf("%s\n",ecu_names[i]);
			printf("PID : %d\n",(int)getpid());
			printf("PPID : %d\n",(int)getppid());

			printf("ECU Process is performing its task..\n");
			sleep(5);
			printf("%s Process Completed..\n",ecu_names[i]);
				
			return 0;
		}
	}
	printf("Parent waiting for all ECU Processes..\n");
	for(i=0;i<ECU_COUNT;i++)
	{
		if(waitpid(child_pids[i], NULL,0)==-1)
		{
			perror("waitpid failed");
			return 1;
		}
	}
	printf("All ECU Processes are completed..\n");
		return 0;

}


