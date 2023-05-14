package VideoRentalInventory;

public class VideoStore {
    Video[] store = new Video[4];
    private int videos = 0;

    // for allocating more memory to store
    private void handleOverflow() {
        Video[] temp = new Video[this.store.length * 2];
        for (int i = 0; i < videos; i++)
            temp[i] = this.store[i];
        this.store = temp;
    }

    void addVideo(String name) {
        if (this.videos == store.length - 1)
            handleOverflow();
        for (Video video : store)
            if (video != null && video.getName().equals(name)) {
                System.out.println("A video already exists with same name.");
                System.out.println("Please try again with a different name.");
                return;
            }
        store[this.videos++] = new Video(name);
        System.out.printf("Video \"%s\" added successfully.\n", name);

    }

    void doCheckout(String name) {
        for (int i = 0; i < videos; i++) {
            Video video = store[i];
            if (video.getName().equals(name)) {
                if (!video.getCheckout()) {
                    video.doCheckout();
                    System.out.printf("Video \"%s\" checked out successfully.\n", name);
                } else
                    System.out.println("Video already checked out.");
                return;
            }
        }
        System.out.println("Video not present in store");
    }

    void doReturn(String name) {
        for (int i = 0; i < videos; i++) {
            Video video = store[i];
            if (video.getName().equals(name)) {
                if (video.getCheckout()) {
                    video.doReturn();
                    System.out.printf("Video \"%s\" returned successfully.\n", name);
                } else
                    System.out.println("Video already in store.");
                return;
            }
        }
        System.out.println("Video not present in store");
    }

    void recieveRating(String name, int rating) {
        for (Video video : store) {
            if (video != null && video.getName().equals(name)) {
                video.recieveRating(rating);
                System.out.printf("Rating \"%d\" has been mapped to the Video \"%s\"\n", rating, name);
                return;
            }
        }
        System.out.println("Video not present in store");
    }

    void listInventory() {
        System.out.println("Sl. No |       name      | checkedOut | rating |");
        System.out.println("------------------------------------------------");
        for (int i = 0; i < videos; i++) {
            Video video = store[i];
            System.out.printf("%6d.| %12s    | %9s  | %5d  |\n",
                    i + 1, video.getName(), video.getCheckout(), video.getRating());
        }
    }
}
