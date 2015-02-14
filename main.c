#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* 
 * Try to find str in src, if found, str is replaced with rplc.
 * Returns a pointer to the new string, NULL if str not found.
 * NOTE: everything after str is dropped in src.
 */
char *replace_str(char* src, char* str, char* rplc);

int main()
{
	// 			  S7$Program_AS400/_ExtrB_Heat.Zon5
	char str[] = "S7$Program_AS400/_ExtrB_RegZon5";
	char substr[] = "RegZon5";
	char rplc[] = "Heat.Zon5";
	char *fixd_str;

	printf("Orignal string\t: %s\n", str);	

	fixd_str = replace_str(str, substr, rplc);
	printf("Fixed string\t: %s\n", fixd_str);

	fixd_str = replace_str(str, "_ExtrB_", "HEJ_VIGGO!");
	printf("Fixed string\t: %s\n", fixd_str);
}

char *replace_str(char *str, char *substr, char *rplc)
{
	char *pos;

	int str_len;
	int sub_len;
	int rplc_len;
	int len_diff;

	if ( ! (pos = strstr(str, substr)))
		return NULL;

	sub_len = strlen(pos);
	str_len = strlen(str);
	sub_len = strlen(pos);
	len_diff = str_len - sub_len;

	char *buffer = malloc(str_len * sizeof(char));

	strncpy(buffer, str, len_diff);
	strncat(buffer, rplc, rplc_len);

	return buffer;
}