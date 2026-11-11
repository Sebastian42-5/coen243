class Rectangle{
    public:
        Rectangle();
        // methods that we define for the class, these are function prototypes
        void setWidthHeight(int, int);
        void printDimensions();
        int getArea();
    private:
        int width;
        int height;
        // these are the data members
};