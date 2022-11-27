unsigned long length(const char str[]) {
    unsigned long l = 0;
    while (str[l] != '\0'){
        l++;
    }
    return l;
}

unsigned long pow(int n, int ex){
    unsigned long out = 1;
    for(int i = 0; i < ex; i++){
     out *= n;
    }
    return out;
}

unsigned long hstr_to_integer(const char hstr[]){
    unsigned long out = 0;
    unsigned long counter = length(hstr);
    unsigned long ch;
    for(unsigned long i = 0 ; i < length(hstr); i++){
        switch(hstr[i]){
        case '0':
            ch = 0;
            break;
        case '1':
            ch = 1;
            break;
        case '2':
            ch = 2;
            break;
        case '3':
            ch = 3;
            break;
        case '4':
            ch = 4;
            break;
        case '5':
            ch = 5;
            break;
        case '6':
            ch = 6;
            break;
        case '7':
            ch = 7;
            break;
        case '8':
            ch = 8;
            break;
        case '9':
            ch = 9;
            break;
        case 'A':
        case 'a':
            ch = 10;
            break;
        case 'B':
        case 'b':
            ch = 11;
            break;
        case 'C':
        case 'c':
            ch = 12;
            break;
        case 'D':
        case 'd':
            ch = 13;
            break;
        case 'E':
        case 'e':
            ch = 14;
            break;
        case 'F':
        case 'f':
            ch = 15;
            break;
    }
    counter--;
    out += ch*pow(16,counter);
    }
    return out;
}