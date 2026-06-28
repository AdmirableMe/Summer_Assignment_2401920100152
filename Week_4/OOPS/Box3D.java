class Box3D extends Box {
    double h;
    Box3D(double l, double b, double h) {
        super(l, b);
        this.h = h;
    }

    double volume() {
        return l * b * h;
    }
}