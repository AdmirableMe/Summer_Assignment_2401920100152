class Box {
    double l;
    double b;
    Box(double l, double b) {
        this.l = l;
        this.b = b;
    }
    double area() {
        return l * b;
    }
}