public class Book {
    private final String author;
    private final String title;
    private final int pageCount;

    Book(String author,String title,int pageCount) {
        this.title = title;
        this.author = author;
        this.pageCount = pageCount;
    }

    public String getAuthor() {
        return this.author;
    }

    public String getTitle() {
        return this.title;
    }

    public int getPageCount() {
        return this.pageCount;
    }

    @Override
    public String toString() {
        return this.title + " by " + this.author;
    }
}
