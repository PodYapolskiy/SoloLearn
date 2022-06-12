import java.util.Formatter;

class CreatingAndWritingFiles {
    /*
     * Formatter, another useful class in the java.util package, is used to create
     * content and write it to files.
     * This creates an empty file at the specified path.
     * If the file already exists, this will overwrite it.
     * 
     * The format() method formats its parameters according to its first parameter.
     */
    public static void main(String[] args) {
        try {
            Formatter f = new Formatter("Java\\6. Exceptions, Lists, Threads & Files\\13.txt");
            f.format("%s %s %s", "1", "John", "Smith\n"); // '\r\n' is the newline symbol in Windows
            f.format("%s %s %s", "2", "Amy", "Brown");
            f.close();
        } catch (Exception e) {
            System.out.println("Error");
        }
    }
}
