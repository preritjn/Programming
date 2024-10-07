public class AudioBook extends Book{
    private final int runTime;

    AudioBook(int runTime,String author,String title) {
        super(author,title,0);
        this.runTime = runTime;
    }

    public int getRunTime() {
        return this.runTime;
    }
}
