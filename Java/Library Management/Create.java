public class Create {
    public static void main(String[] args) {
        User prerit = new User("Prerit Kumar Jain","preritbgr3010@gmail.com","2002-10-30");

        System.out.printf("The name of the user is %s,born on %s and his email is %s\n", prerit.getName(),prerit.getBirthDate(),prerit.getEmail());
        System.out.println(prerit.age());

        User mohit = new User("Mohit Kumar Jain","mkjain1995@gmail.com","1995-06-06");

        System.out.printf("The name of the user is %s,born on %s and his email is %s\n", mohit.getName(),mohit.getBirthDate(),mohit.getEmail());
        System.out.println(mohit.age());

        Book JKRowling = new Book("JK Rowling","Harry Potter",400);
        AudioBook dracula = new AudioBook(30000, "Dracula", "Bram Stoker");
        Ebook harryPotter = new Ebook(250, "JK Rowling", "Harry Potter", 400, "PDF");
        prerit.borrow(JKRowling);
        System.out.printf("%s has borrowed this books : %s\n",prerit.getName(),prerit.borrowedBooks());
        System.out.println(dracula.toString());
        System.out.println(harryPotter.toString());
    }
}
