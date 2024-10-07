public class Ebook extends Book {
    private final int fileSize;
    private final String format;

    Ebook(int fileSize, String author, String title,int pageCount,String format) {
        super(author, title, pageCount);
        this.fileSize = fileSize;
        this.format = format;
    }

    public int getFileSize() {
        return this.fileSize;
    }

    public String getFormat() {
        return this.format;
    }
}
