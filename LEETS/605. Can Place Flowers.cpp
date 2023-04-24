bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int s = flowerbed.size();
        
        int prev,next;
        for (int i = 0; i < s; i++) {
            if (flowerbed[i] == 0) {
                prev = (i == 0 || flowerbed[i-1] == 0) ? 0 : 1;
                next = (i == s-1 || flowerbed[i+1] == 0) ? 0 : 1;
                
                if (prev == 0 && next == 0) {
                    n--;
                    i++;
                }
            }
        }

        return n <= 0;
    }
