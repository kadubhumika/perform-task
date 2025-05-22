char* addBinary(char* a, char* b) {
    int i = strlen(a) - 1;
    int j = strlen(b) - 1;
    int carry = 0;

    int maxLen = (i > j ? i : j) + 3;
    char *result = (char*)malloc(sizeof(char) * maxLen);
    int k = 0;

    for (; i >= 0 || j >= 0 || carry > 0; i--, j--) {
        int bitA = 0;
        int bitB = 0;

        if (i >= 0) {
            bitA = a[i] - '0';
        }

        if (j >= 0) {
            bitB = b[j] - '0';
        }

        int sum = bitA + bitB + carry;

        if (sum == 0) {
            result[k++] = '0';
            carry = 0;
        } else if (sum == 1) {
            result[k++] = '1';
            carry = 0;
        } else if (sum == 2) {
            result[k++] = '0';
            carry = 1;
        } else if (sum == 3) {
            result[k++] = '1';
            carry = 1;
        }
    }

    result[k] = '\0';

    // Reverse result
    for (int x = 0; x < k / 2; x++) {
        char temp = result[x];
        result[x] = result[k - 1 - x];
        result[k - 1 - x] = temp;
    }

    return result;
}