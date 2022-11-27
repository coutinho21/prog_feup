int adigits(int a, int b, int c){
    int out;
    if (a >= b && b >= c){
        out = a * 100 + b*10 + c;
    }
    else if (a >= c && c >= b){
        out = a*100 + c*10 + b;
    }
    else if (b >= a && a >= c){
        out = b*100 + a* 10 + c; 
    }
    else if (b >= c && c >= a){
        out = b*100 + c*10 + a;
    }
    else if (c>= a && a >= b){
        out = c*100 + a*10 + b;
    }
    else if (c >= b && b >= a){
        out = c*100 + b*10 + a;
    }
    return out;
}