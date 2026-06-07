interface LibraryUser {
    void registerAccount();
    void requestBook();
}

class KidUser implements LibraryUser {
    int age;
    String bookType;

    public void registerAccount() {
        if (age < 12) {
            System.out.println("You have successfully registered under a Kids Account.");
        } 
        else {
            System.out.println("Sorry! Age must be less than 12 to register as a kid.");
        }
    }

    public void requestBook() {
        if (bookType.equals("Kids")) {
            System.out.println("Book issued successfully. Please return the book within 10 days.");
        } 
        else {
            System.out.println("Oops! You are allowed to take only Kids books.");
        }
    }
}

class AdultUser implements LibraryUser {
    int age;
    String bookType;

    public void registerAccount() {
        if (age >= 12) {
            System.out.println("You have successfully registered under an Adult Account.");
        } 
        else {
            System.out.println("Sorry! Age must be greater than or equal to 12 to register as an adult.");
        }
    }

    public void requestBook() {
        if (bookType.equals("Fiction")) {
            System.out.println("Book issued successfully. Please return the book within 7 days");
        } 
        else {
            System.out.println("Oops! You are allowed to take only fiction books.");
        }
    }
}

public class LibraryInterfaceDemo {
    public static void main(String[] args) {

        KidUser kidUser = new KidUser();
        kidUser.age = 10;
        kidUser.registerAccount();
        kidUser.age = 18;
        kidUser.registerAccount();

        kidUser.bookType = "Kids";
        kidUser.requestBook();
        kidUser.bookType = "Fiction";
        kidUser.requestBook();

        System.out.println();

        AdultUser adultUser = new AdultUser();
        adultUser.age = 5;
        adultUser.registerAccount();
        adultUser.age = 23;
        adultUser.registerAccount();

        adultUser.bookType = "Kids";
        adultUser.requestBook();
        adultUser.bookType = "Fiction";
        adultUser.requestBook();

        System.out.println();
    }
}