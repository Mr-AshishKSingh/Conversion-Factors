#include <iostream>
using namespace std;

void length(){

    int c,d;

    cout << "ENTER YOUR VALUE " << endl;
    cout << " >> " ; cin >> c;
    cout << " ______________________ " <<  endl;
    cout << " CHOOSE WHAT OPERATION RELATED TO LENGTH YOU WANT TO PERFORM " << endl;
    cout << " _______________________" << endl;
    cout << " TYPE THE SERIAL NUMBER OF THE OPERATION YOU WANT TO PERFORM " << endl;
    cout << " 1  .. Kilometer to Meter " << endl;
    cout << " 2  .. Meter to Inches " << endl;
    cout << " 3  .. Inches to Centimeters " << endl;
    cout << " 4  .. Feet to Centimeters " << endl;
    cout << " 5  .. Yards to Centimeter " << endl;
    cout << " >>> " ; cin >> d;

    switch(d){

        case 1:
        cout << c << " From KM to Meter is " << c*1000 << endl;
        break ;

        case 2:
        cout << c << " From Meter to Inches is  " << c*39.37 << endl;
        break;

        case 3:
        cout << c << " From inches to Centimeter is " << c*2.54 << endl;
        break;

        case 4:
        cout << c << " From Feet to Centimeters is " << c*30.48 << endl;
        break;

        case 5:
        cout << c << " From Yards to Centimenter is " << c*91.44 << endl;
        break;


    }
    


}

void area(){
        int e,f;

    cout << "ENTER YOUR VALUE " << endl;
    cout << " >> " ; cin >> e;
    cout << " ______________________ " <<  endl;
    cout << " CHOOSE WHAT OPERATION RELATED TO LENGTH YOU WANT TO PERFORM " << endl;
    cout << " _______________________" << endl;
    cout << " TYPE THE SERIAL NUMBER OF THE OPERATION YOU WANT TO PERFORM " << endl;
    cout << " 1  .. Meter square to Centimeter Square  " << endl;
    cout << " 2  .. Kilometer Square to Acres " << endl;
    cout << " 3  .. Inches square to Centimeter squre " << endl;
    cout << " 4  .. Feet square to Meter square " << endl;
    cout << " 5  .. Meter square to Feet Square " << endl;
    cout << " 6  .. Acer to feet square " << endl;
    cout << " >>> " ; cin >> f;

    switch(f){

        case 1:
        cout << e << " Meter Square to Centimeter Square is  " << e*10000 << endl;
        break ;

        case 2:
        cout << e << " From Kilometer Square to Acres  " << e*247 << endl;
        break;

        case 3:
        cout << e << " From Inches Square to Centimeter Square " << e*6.45 << endl;
        break;

        case 4:
        cout << e << " From Feet Square to Meter Square  " << e*0.092 << endl;
        break;

        case 5:
        cout << e << " From MeterSquare to FeetSquare is " << e*10.76 << endl;
        break;

        case 6:
        cout << e << " From Acer to FeetSquare is " << e*43560 << endl;
        break;

    }


}

void volume() {

    int f,g;

    cout << "ENTER YOUR VALUE " << endl;
    cout << " >> " ; cin >> f;
    cout << " ______________________ " <<  endl;
    cout << " CHOOSE WHAT OPERATION RELATED TO LENGTH YOU WANT TO PERFORM " << endl;
    cout << " _______________________" << endl;
    cout << " TYPE THE SERIAL NUMBER OF THE OPERATION YOU WANT TO PERFORM " << endl;
    cout << " 1  .. Meter Cube to Centimeter Cube " << endl;
    cout << " 2  .. Liter to Meter Cube " << endl;
    cout << " 3  .. Inches Cube to Centimeters Cube " << endl;
    cout << " 4  .. Feets Cube  to Centimeters Cube  " << endl;
    cout << " 5  .. Feets Cube to Inches Cube  " << endl;
    cout << " 6  .. Feets Cube to Liter " << endl;
    cout << " >>> " ; cin >> g;

    switch(g){

        case 1:
        cout << f << " From Meter Cube to Centimeter Cube is " << f*100000 << endl;
        break ;

        case 2:
        cout << f << " From Liter to Meter Cube  is  " << f*0.001 << endl;
        break;

        case 3:
        cout << f << " From inches Cube to Centimeter Cube  is " << f*16.39 << endl;
        break;

        case 4:
        cout << f << " From Feet Cube to Centimeter Cube  is " << f*28316.8 << endl;
        break;

        case 5:
        cout << f << " From Feets Cube  to Inches Cube  is " << f*1728 << endl;
        break;

        case 6:
        cout << f << " From Feets Cube to Liter is " << f*28.32 << endl;
        break;
    }


}

void speed(){

    int h,i;

    cout << "ENTER YOUR VALUE " << endl;
    cout << " >> " ; cin >> h;
    cout << " ______________________ " <<  endl;
    cout << " CHOOSE WHAT OPERATION RELATED TO LENGTH YOU WANT TO PERFORM " << endl;
    cout << " _______________________" << endl;
    cout << " TYPE THE SERIAL NUMBER OF THE OPERATION YOU WANT TO PERFORM " << endl;
    cout << " 1  .. Kilometer Per Hour to Meter per Second  " << endl;
    cout << " >>> " ; cin >> i;

    switch(i){

        case 1:
        cout << h << " From Kilometer Per Hour to Meter Per Hour  is " << h*0.2778 << endl;
        break ;
    }


}

void magneticfield() {
    int j,k;;

    cout << "ENTER YOUR VALUE " << endl;
    cout << " >> " ; cin >> j;
    cout << " ______________________ " <<  endl;
    cout << " CHOOSE WHAT OPERATION RELATED TO LENGTH YOU WANT TO PERFORM " << endl;
    cout << " _______________________" << endl;
    cout << " TYPE THE SERIAL NUMBER OF THE OPERATION YOU WANT TO PERFORM " << endl;
    cout << " 1  .. Gauss to Tesla  " << endl;
    cout << " 2  .. Tesla to Gauss " << endl;
    cout << " >>> " ; cin >> k;

    switch(k){

        case 1:
        cout << j << " From Gauss to Tesla  is " << j*0.0001 << endl;
        break ;

        case 2:
        cout << j << " From Tesla to Gauss is  " << j*10000 << endl;
        break;

        
    }


}

void angle() {
    int l ,m ;

    cout << "ENTER YOUR VALUE " << endl;
    cout << " >> " ; cin >> l;
    cout << " ______________________ " <<  endl;
    cout << " CHOOSE WHAT OPERATION RELATED TO ANGLE AND ANGULAR SPEED YOU WANT TO PERFORM " << endl;
    cout << " _______________________" << endl;
    cout << " TYPE THE SERIAL NUMBER OF THE OPERATION YOU WANT TO PERFORM " << endl;
    cout << " 1  .. RADIAN TO DEGREE " << endl;
    cout << " 2  .. DEGREE TO RADIAN  " << endl;
    cout << " 3  .. REVOLUTIONS PER MINUTE TO RADIANS  PER SECOND " << endl;
    cout << " 4  .. RADIANS PER SECOND TO REVOLUTION PER MINUTE " << endl;
    cout << " >>> " ; cin >> m;

    switch(m){

        case 1:
        cout << l << " From Radians to Degree is " << l*57.30 << endl;
        break ;

        case 2:
        cout << l << " From Degree to Radians is   " << l*0.0174 << endl;
        break;

        case 3:
        cout << l << " From REV / MIN TO RAD / SEC  is " << l*0.1047 << endl;
        break;

        case 4:
        cout << l << " From RAD / SEC TO REV / SEC  is " << l*9.594 << endl;
        break;

        
    }


}

void force(){
    int n,o;

    cout << "ENTER YOUR VALUE " << endl;
    cout << " >> " ; cin >> n;
    cout << " ______________________ " <<  endl;
    cout << " CHOOSE WHAT OPERATION RELATED TO FORCE YOU WANT TO PERFORM " << endl;
    cout << " _______________________" << endl;
    cout << " TYPE THE SERIAL NUMBER OF THE OPERATION YOU WANT TO PERFORM " << endl;
    cout << " 1  .. Newton to Dyne " << endl;
    cout << " 2  .. Dyne to Newton" << endl;
    cout << " >>> " ; cin >> o;

    switch(o){

        case 1:
        cout << n << " From Newton to Dyne is " << n*100000 << endl;
        break ;

        case 2:
        cout << n << " From Dyne to Newton is  " << n*0.00001 << endl;
        break;

        
    }


}

void mass() {

    int p ,q ;

    cout << "ENTER YOUR VALUE " << endl;
    cout << " >> " ; cin >> p;
    cout << " ______________________ " <<  endl;
    cout << " CHOOSE WHAT OPERATION RELATED TO MASS YOU WANT TO PERFORM " << endl;
    cout << " _______________________" << endl;
    cout << " TYPE THE SERIAL NUMBER OF THE OPERATION YOU WANT TO PERFORM " << endl;
    cout << " 1  .. Kilogram to Grams " << endl;
    cout << " 2  .. Tonnne to Kilogram " << endl;
    cout << " 3  .. Tonne to MiliGram " << endl;
    cout << " 4  .. Slug to Kilogram " << endl;
    cout << " >>> " ; cin >> q;

    switch(q){

        case 1:
        cout << p << " From Kilograms to Grams is " << p*1000 << endl;
        break ;

        case 2:
        cout << p << " From Tonne to Kilogram is   " << p*1000 << endl;
        break;

        case 3:
        cout << p << " From Tonne to Miligram is " << p << endl;
        break;

        case 4:
        cout << p << " From Slug to Kilogram is " << p*14.59 << endl;
        break;

        
    } 


}

void time() {
     int r,s ;

    cout << "ENTER YOUR VALUE " << endl;
    cout << " >> " ; cin >> r;
    cout << " ______________________ " <<  endl;
    cout << " CHOOSE WHAT OPERATION RELATED TO TIME  YOU WANT TO PERFORM " << endl;
    cout << " _______________________" << endl;
    cout << " TYPE THE SERIAL NUMBER OF THE OPERATION YOU WANT TO PERFORM " << endl;
    cout << " 1  .. Hour to Minutes " << endl;
    cout << " 2  .. Minutes to Seconds   " << endl;
    cout << " 3  .. Days to Hour " << endl;
    cout << " 4  .. Days to Minutes " << endl;
    cout << " 5  .. LightYears to Days " << endl;
    cout << " >>> " ; cin >> s;

    switch(s){

        case 1:
        cout << r << " From Hours to Minutes is " << r*60 << endl;
        break ;

        case 2:
        cout << r << " From Minutes to Seconds is   " << r*60 << endl;
        break;

        case 3:
        cout << r << " From Days to Hours " << r*24 << endl;
        break;

        case 4:
        cout << r << " From Days to Minutes  is " << r*1440 << endl;
        break;

        case 5:
        cout << r << " From LightYears to Days is " << r*365.24 << endl;
        break;

        
    }


}

void pressure() {
    int t,u;

    cout << "ENTER YOUR VALUE " << endl;
    cout << " >> " ; cin >> t;
    cout << " ______________________ " <<  endl;
    cout << " CHOOSE WHAT OPERATION RELATED TO PRESSURE YOU WANT TO PERFORM " << endl;
    cout << " _______________________" << endl;
    cout << " TYPE THE SERIAL NUMBER OF THE OPERATION YOU WANT TO PERFORM " << endl;
    cout << " 1  .. Pascle to Newton per MeterSquare " << endl;
    cout << " 2  .. Bar to Kilo Pascle " << endl;
    cout << " 3  .. Atomic Pressure to KiloPascle " << endl;
    cout << " 4  .. Atomic Pressure to Bar " << endl;
    cout << " 5  .. Torr to Pascle " << endl;
    cout << " >>> " ; cin >> u;

    switch(u){

        case 1:
        cout << t << " From Pascle to Newton per MeterSquare  is " << t*1 << endl;
        break ;

        case 2:
        cout << t << " From Bar to KiloPascle is  " << t*100 << endl;
        break;

        case 3:
        cout << t << " From Atomic Pressure to KiloPascle is " << t*101.325 << endl;
        break;

        case 4:
        cout << t << " From Atomic Pressure to Bar is " << t*1.013 << endl;
        break;

        case 5:
        cout << t << " From Torr to Pascle is " << t*133.32 << endl;
        break;


    }


}

void density() {
    int v,w;

    cout << "ENTER YOUR VALUE " << endl;
    cout << " >> " ; cin >> v;
    cout << " ______________________ " <<  endl;
    cout << " CHOOSE WHAT OPERATION RELATED TO DENSITY YOU WANT TO PERFORM " << endl;
    cout << " _______________________" << endl;
    cout << " TYPE THE SERIAL NUMBER OF THE OPERATION YOU WANT TO PERFORM " << endl;
    cout << " 1  .. Gram per Centimeter Cube to Kilogram per Meter Cube  " << endl;
    cout << " 2  .. Gram per Centimeter Cube to KIlogram per Liter  " << endl;
    cout << " >>> " ; cin >> w;

    switch(w){

        case 1:
        cout << v << " From Gram per Centimeter Cube to KG per Meter cube is " << v*1000 << endl;
        break ;

        case 2:
        cout << v << " From Gram per Centimeter Cube to KG per Liter is  " << v*1 << endl;
        break;


    }

}

void energy() {
    int x,y;

    cout << "ENTER YOUR VALUE " << endl;
    cout << " >> " ; cin >> x;
    cout << " ______________________ " <<  endl;
    cout << " CHOOSE WHAT OPERATION RELATED TO LENGTH YOU WANT TO PERFORM " << endl;
    cout << " _______________________" << endl;
    cout << " TYPE THE SERIAL NUMBER OF THE OPERATION YOU WANT TO PERFORM " << endl;
    cout << " 1  .. KiloWhatt Hour to MJOules " << endl;
    cout << " 2  .. Calories to Joule " << endl;
    cout << " 3  .. Liter Atomic to Joules " << endl;
    cout << " 4  .. Liter Atomic to Calories " << endl;
    cout << " 5  .. Electron Volt to Joules " << endl;
    cout << " 6  .. Erge to Joules " << endl;
    cout << " >>> " ; cin >> y;

    switch(y){

        case 1:
        cout << y << " From KWatt Hour to MJoules is " << y*3.6 << endl;
        break ;

        case 2:
        cout << y << " From Calories to Joule is  " << y*4.186 << endl;
        break;

        case 3:
        cout << y << " From Liter Atomic to Joules is " << y*101.325 << endl;
        break;

        case 4:
        cout << y << " From Liter Atomic to Calories is " << y*24.217 << endl;
        break;

        case 5:
        cout << y << " From ElectronVolt to Joules is " << y*1 << endl;
        break;

        case 6:
        cout << y << " From Urges to Joules is " << y*0.0000001 << endl;


    }


}

void power() {
    int aa,ab;

    cout << "ENTER YOUR VALUE " << endl;
    cout << " >> " ; cin >> aa;
    cout << " ______________________ " <<  endl;
    cout << " CHOOSE WHAT OPERATION RELATED TO POWER YOU WANT TO PERFORM " << endl;
    cout << " _______________________" << endl;
    cout << " TYPE THE SERIAL NUMBER OF THE OPERATION YOU WANT TO PERFORM " << endl;
    cout << " 1  .. Horsepower to Watt " << endl;
    cout << " 2  .. Watt to HorsePower " << endl;
    cout << " >>> " ; cin >> ab;

    switch(ab){

        case 1:
        cout << aa << " From Horsepower to Watt is " << ab*746 << endl;
        break ;

        case 2:
        cout << ab << " From Watt to HorsePower is  " << ab*0.00134 << endl;
        break;

        


    }


}

void thermal() {
    int ac , ad;

    cout << "ENTER YOUR VALUE " << endl;
    cout << " >> " ; cin >> ac;
    cout << " ______________________ " <<  endl;
    cout << " CHOOSE WHAT OPERATION RELATED TO THERMAL CONDUCTIVITY YOU WANT TO PERFORM " << endl;
    cout << " _______________________" << endl;
    cout << " TYPE THE SERIAL NUMBER OF THE OPERATION YOU WANT TO PERFORM " << endl;
    cout << " 1  .. Watt per MeterKelvin to Btu inches per hour feet square Ferhanite  " << endl;
    cout << " 2  .. Btu inches per Hour feet square Ferhanite to Watt per Hour " << endl;
    cout << " >>> " ; cin >> ad;

    switch(ad){

        case 1:
        cout << ad << " -----> " << ad*6.938 << " Btu in/hft sqr Fethanite" << endl;
        break ;

        case 2:
        cout << ad << " ------>  " << ad*0.1441 << " watt / meter kelvin " << endl;
        break;

        


    }


}
int main () {

    
    int  b;
    cout << "______________________________________"  << endl;
    cout << " ENTER THE OPERATION YOU WANT TO PERFORM  " << endl;
    cout << " TYPE (1) (2) (3) (4) (5) (6) (7) (8)" << endl;
    cout << " 1 => LENGTH  " << endl;
    cout << " 2 => AREA " << endl;
    cout << " 3 => VOLUME " << endl;
    cout << " 4 => SPEED " << endl;
    cout << " 5 => MAGNETIC FIELD " << endl;
    cout << " 6 => ANGLE AND ANGULAR SPEED " << endl;
    cout << " 7 => FORCE " << endl;
    cout << " 8 => MASS" << endl;
    cout << " 9 => TIME " << endl;
    cout << " 10 => PRESSURE " << endl;
    cout << " 11 => DENSITY " << endl;
    cout << " 12 => ENERGY " << endl;
    cout << " 13 => POWER" << endl;
    cout << " 14 => THERMAL CONDUCTIVITY " << endl;
    cout << " ______________________________________" << endl;
    cout << " ------ >" ; cin >> b ;
    cout << "_______________________________________" << endl;

    switch(b) {

        case 1:
        length();
        break ;

        case 2:
        area();
        break;

        case 3:
        volume();
        break;

        case 4:
        speed();
        break;
        
        case 5:
        magneticfield();
        break;

        case 6:
        angle();
        break;


        case 7:
        force();
        break;

        case 8:
        mass();
        break;

        case 9:
        time();
        break;

        case 10:
        pressure();
        break;

        case 11:
        density();
        break;

        case 12:
        energy();
        break;

        case 13:
        power();
        break;

        case 14:
        thermal();
        break;


    }

    return 0;



}