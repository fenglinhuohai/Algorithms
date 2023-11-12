#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void solution(char str){
 
	// TODO: 请在此编写代码

}

int main() {
    char str[1000];
    scanf("%s", str);
    int len = strlen(str);
    printf("%d\n",len);
    for(int i = 0;i < len - 1;i++){
        if(str[i] != str[i + 1]){
            str[i] = str[i + 1];
        }
    }
    printf("%s",str);
	solution(str);
    return 0;
}