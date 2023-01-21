#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv ,char **env){
	/*char *env_variable = getenv("API_KEY");
	if (env_variable == NULL) {
		printf("No environment variable was found\n");
		return 1;
	}
	printf("The value of our environmental value is %s\n\n", env_variable);*/
	int i = 0;
	char *env_var1 = env[i];
	while (env_var1 != NULL) {
		printf("%s\n",env_var1);
		i++;
		env_var1 = env[i];
	}
	return 0;
}

