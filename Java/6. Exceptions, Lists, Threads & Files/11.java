import java.io.File;

class WorkingWithFiles {
    public static void main(String[] args) {
        File file = new File("Java\\6. Exceptions, Lists, Threads & Files\\11.txt");

        if (file.exists()) {
            System.out.println(file.getName() + " exists!");
        } else {
            System.out.println("The file does not exist");
        }
    }
}
