int unosKonverzija (char *str, int *length) {
    *length = 0;
    int number_of_digits = 0;
    for (int i = 0; i < 10; ++i) {
        char c = getchar();
        if (c == '!') { 
            break;
        } else if (isupper(c)) { 
            c = tolower(c);
        } else if (isdigit(c)) { 
            c = '?'; 
            ++number_of_digits;
        }
        str[i] = c;
        ++*length;
    }
    str[*length] = '\0';
    return number_of_digits;
}
