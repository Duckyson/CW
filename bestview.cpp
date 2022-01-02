int maxScoreSightseeingPair(int* values, int valuesSize){
    int ans = 0, mx = values[0] ;
        for (int j = 1; j <valuesSize; ++j) {
            ans = fmax(ans, mx + values[j] - j);
            // ±ß±éÀú±ßÎ¬»¤
            mx = fmax(mx, values[j] + j);
        }
        return ans;


}
