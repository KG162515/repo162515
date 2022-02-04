
#include <cmath>

class MyLnA{
        public:
                MyLnA(double a=0){
                    mA=a;
                    
}
                MyLnA(double x, double a=0){
                    mA=a;
                    mX=x;
                    
}
                MyLnA(const MyLnA &obj){
                    mX=obj.mX;
                    
}
                ~MyLnA(){
                    mX=0;
                    mA=0;
}
                double value(){
                    double s=0;
                    double lnX=log(mA);
                    for(int k=0; k<10; k++)
                        {
                            s=s+((pow(-1,k))/(pow(mA,k+1))*pow(mX-mA,k+1)/(k+1));
};
                    lnX=lnX+s;
                    return lnX;
}
                void setX(double x){
                    mX=x;
                    
}
                double getX(){
                    return mX;
                    
}
                void setA(double a){
                    mA=a;
                    
}
                double getA(){
                    return mA;
                    
                    
                }
            private:
                double mX;
                double mA;

};
int main(){

    MyLnA myLnA(2,6);
    myLnA.value();
}
