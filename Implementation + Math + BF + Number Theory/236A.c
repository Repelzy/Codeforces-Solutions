#include <stdio.h>
#include <string.h>
int main()
{
	int i;
	char s[101];
	scanf("%s", s);
	int alphabet[26]={0};
	int num_alphabet_dis = 0;
	
	for(i=0; i<strlen(s); i++){
		alphabet[s[i]-'a']=1;			
	}
	for (i=0; i<26;i++){
		num_alphabet_dis += alphabet[i] 	;	
	}
	 if (num_alphabet_dis % 2 == 0) {
        printf("CHAT WITH HER!\n");
    } else {
        printf("IGNORE HIM!\n");
    }

    return 0;
}
	
