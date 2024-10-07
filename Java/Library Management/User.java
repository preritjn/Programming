import java.time.*;
import java.util.ArrayList;

public class User {
    private final String name;
    private final LocalDate birthDate;
    private final String email;    
    private final ArrayList<Book> books = new ArrayList<>();

    User(String name,String email, String birthDate) {
        this.name = name;
        this.email = email;
        this.birthDate = LocalDate.parse(birthDate);
    }

    public String getName() {
        return this.name;
    }

    public String getBirthDate() {
        return this.birthDate.toString();
    }

    public String getEmail() {
        return this.email;
    }

    public String borrowedBooks() {
        return this.books.toString();
    }

    public void borrow(Book book) {
        this.books.add(book);
    }

    public int age() {
        return Period.between(this.birthDate, LocalDate.now()).getYears();
    }
}