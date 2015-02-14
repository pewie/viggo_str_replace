# viggo_str_replace
A small C function to replace a substring in a string

## Usage
```C
char str[] = "S7$Program_AS400/_ExtrB_RegZon5"; // Orginal string.
char substr[] = "RegZon5";                      // Substring to replace.
char rplc[] = "Heat.Zon5";                      // String to replace with.
char *fixd_str;                                 // Pointer to fixed string.

printf("Orignal string\t: %s\n", str);
fixd_str = replace_str(str, substr, rplc);
printf("Fixed string\t: %s\n", fixd_str);
```
