package VideoRentalInventory;

public class Video {
    private String videoName;
    private int rating = 0;
    private boolean checkout = false;

    Video(String name) {
        this.videoName = name;
    }

    void doCheckout() {
        this.checkout = true;
    }

    void doReturn() {
        this.checkout = false;
    }

    void recieveRating(int rating) {
        this.rating = rating;
    }

    String getName() {
        return this.videoName;
    }

    int getRating() {
        return this.rating;
    }

    boolean getCheckout() {
        return this.checkout;
    }
}
