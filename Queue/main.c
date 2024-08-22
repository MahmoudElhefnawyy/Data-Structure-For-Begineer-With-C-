#include <stdio.h>
int stringLength(char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int max(int a, int b) {
    return (a > b) ? a : b;
}

int min(int a, int b) {
    return (a < b) ? a : b;
}

int longestBalancedSubstringHelper(char *S, int start, int end) {
    if (start >= end) {
        return 0;
    }
    int charCount[256] = {0};

    int count1 = 0, count2 = 0;

    for (int i = start; i < end; i++) {
        charCount[S[i]]++;
        if (charCount[S[i]] >= count1) {
            count2 = count1;
            count1 = charCount[S[i]];
        } else if (charCount[S[i]] > count2) {
            count2 = charCount[S[i]];
        }
    }
    int diff = count1 - count2;

    if (diff == 0 || diff == 1) {
        return min(count1, count2) * 2;
    }
    int mid = (start + end) / 2;
    int leftMax = longestBalancedSubstringHelper(S, start, mid);
    int rightMax = longestBalancedSubstringHelper(S, mid, end);

    return max(leftMax, rightMax);
}

void longestBalancedSubstring(char *S) {
    int length = stringLength(S);
    int maxLength = longestBalancedSubstringHelper(S, 0, length);
       int count = 0;
        for (int i = 0; i < length; i++) {
if (S[0] == S[i])
                count++;
        }
    if (maxLength == 0||count == length) {
        printf("No balanced string\n");}
     else
        printf("Longest balanced substring length: %d\n", maxLength);
}

int main() {
    char S1[] = "cabbacc";
    char S2[] = "abababa";
    char S3[] = "ccaa";
    char S4[] = "aaaaaaaaaa";

    printf("Original string: %s\n", S1);
    longestBalancedSubstring(S1);

    printf("Original string: %s\n", S2);
    longestBalancedSubstring(S2);

    printf("Original string: %s\n", S3);
    longestBalancedSubstring(S3);

    printf("Original string: %s\n", S4);
    longestBalancedSubstring(S4);

    return 0;
}
