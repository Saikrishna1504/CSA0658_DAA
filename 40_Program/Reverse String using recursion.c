#include<stdio.h>
#include<string.h>
void reverseString(char s[],char revstr[],int i,int j){
	if(s[i]=='\0'){
		return;
	}
	revstr[j-1]=s[i];
	reverseString(s,revstr,i+1,j-1);
}

int main(){
	char s[100],revstr[100];
	printf("Enter a string : ");
	scanf("%s",s);
	int j=strlen(s);
	reverseString(s,revstr,0,j);
	printf("The reversed string is %s\n",revstr);
}



#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello World";
    int length = strlen(str);
    char temp;

    printf("Original String: %s\n", str);

    // Reversing the string manually
    for (int i = 0; i < length / 2; i++) {
        temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }

    printf("Reversed String: %s\n", str);

    return 0;
}
