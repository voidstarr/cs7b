class Day {
    private:
        double baseSnow;
        int numDay;
    public:
        Day(int d, double s): numDay(d), baseSnow(s) {}
        Day():numDay(-1), baseSnow(-1){}

        double getBaseSnow() {return baseSnow;}
        void setBaseSnow(double s) {baseSnow = s;}
        
        int getNumDay() {return numDay;}
        void setNumDay(int i) {numDay = i;}
};
