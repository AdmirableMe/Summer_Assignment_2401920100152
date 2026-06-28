public class Main {
    public static void main(String[] args) {
        Arithmetic a = new Arithmetic();
        System.out.println("Square of 5 = " + a.square(5));

        System.out.println();

        Outer out = new Outer();
        out.display();
        Outer.Inner in = out.new Inner();
        in.display();

        System.out.println();

        Point p = new Point();
        p.display();
        p.setXY(10, 20);
        p.display();

        System.out.println();

        Box box = new Box(10, 5);
        System.out.println("Area = " + box.area());
        Box3D box3 = new Box3D(10, 5, 4);
        System.out.println("Area = " + box3.area());
        System.out.println("Volume = " + box3.volume());
    }
}