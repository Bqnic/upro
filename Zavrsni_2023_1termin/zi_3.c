bool capitalizeName(char *name){

    if (name[0] == '\0')
        return 0;

    if (name[0] >= 'a' && name[0] <= 'z')
        name[0] -= 32;

    for (int i = 1; i < strlen(name); i++){

        if (name[i - 1] == '-' || name[i - 1] == ' '){

            if (name[i] >= 'a' && name[i] <= 'z')
                name[i] -= 32;
        }

        else{
            if (name[i] >= 'A' && name[i] <= 'Z')
                name[i] += 32;
        }
    }
    return 1;
}