class Rectangle
{
private:
    double width;
    double length;
    char *name;
    void initName(char *n);

public:
    Rectangle();
    Rectangle(double, double,
              char *);
    // Copy Constructor
    Rectangle(Rectangle &);
    ~Rectangle();
    void operator=(const Rectangle &);
    void print();
};