bool isLeapYear (int year){
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
        return true;
    }
    return false;
}

int daysInMonth(int month, int year){
    switch(month){
        case 2:
            if (isLeapYear(year)){
                return 29;
            }
            else{
                return 28;
            }
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return 31;
        default:
            return 30;
    }
}

void advance(int delta, int& d, int& m, int& y){
    d += delta;
    int limit = daysInMonth(m,y);
    
    while(d > limit){
        m += 1;
        d -= limit;
        if (m > 12){
            y += 1;
            m = 1;
        }
        limit = daysInMonth(m,y);
    }
}