int length(const char str[]) {
    int l = 0;
    while (str[l] != '\0'){
        l++;
    }
    return l;
}

int ex(int n, int e){
    int res = 1;
    for (int i = 0; i<e;i++){
        res *= n;
    }
    return res;
}

int size(int n){
    int s = 0;
    while(n){
        s++;
        n/=10;
    }
    return s;
}

void int_to_str(int n, char str[], int& pos){
    str[pos] += '0' + (n+1);
    pos++;
}

void rleEncode(const char str[], char rle[]){
    char atm = str[0];
    int pos = 0;
    int n = 0;
    int l = length(str);
    for(int i = 0; i <= l; i++){
        if(atm != str[i]){
            if(n>=10){
                int digit;
                int cont = size(n);
                while(cont){
                    digit = n/ex(10,size(n)-1);
                    int_to_str(digit,rle,pos);
                    n %= ex(10,size(n)-1);
                    cont--;
                }
                rle[pos] = atm;
                pos++;
                atm = str[i];
                n = 1;
            }
            else{
            int_to_str(n,rle,pos);
            rle[pos] = atm;
            pos++;
            atm = str[i];
            n = 1;
            }
        }
        else
            n++;
    }
    rle[pos] = '\0';
}