#include <stdio.h>
#include <stdlib.h>

int main(){
	char *time = malloc(11 * sizeof(char));
	scanf("%10s", time);
	if (time[8] == 'A' || time[8] == 'P')
	{
		
		if (time[8] == 'A')
		{
            time[8] = '\0';
            time[9] = '\0';
			time = realloc(time, (9 * sizeof(char)));
            
            char stra[3];
            sprintf(stra, "%c%c", time[0], time[1]);
            int hoursa = atoi(stra);

            if(hoursa == 12){
                hoursa = 0;
                char milstra[3];
                sprintf(milstra, "%02d", hoursa);
                time[0] = milstra[0];
                time[1] = milstra[1];
            }
            
            
            printf("%s\n", time);
		}
		else
		{
			time[8] = '\0';
            time[9] = '\0';
            time = realloc(time, (9 * sizeof(char)));
            
            char str[3];
			sprintf(str, "%c%c", time[0], time[1]);
			int hours;
			hours = atoi(str);
			int milhours;
			milhours = hours + 12;
            if(milhours == 24)
            {
                milhours = 12;
            }
			char milstr[3];
			sprintf(milstr, "%02d", milhours);
			time[0] = milstr[0];
			time[1] = milstr[1];
			printf("%s\n", time);
		}	
	}
	else
	{
		printf("give a standard format\n");
		return 0;
	}
	return 0;
}