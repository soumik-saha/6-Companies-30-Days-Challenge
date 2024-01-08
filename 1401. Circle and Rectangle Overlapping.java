class Solution {
    public boolean checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        int x3, x4, y3, y4;
        x3 = x1;
        y3 = y2;
        x4 = x2;
        y4 = y1;

        if(xCenter>=x1 && yCenter>=y1 && xCenter<=x2 && yCenter<=y2)
            return true;

        int xd=x1, yd=y1;
        double dist = Integer.MAX_VALUE;

        for(int x=x1, y=y1; x<=x3 && y<=y3; y++) {
            double temp = Math.sqrt(Math.pow(x-xCenter, 2) + Math.pow(y-yCenter, 2));
            if(temp<=dist) {
                dist = temp;
                xd = x;
                yd = y;
            }
        }
        for(int x=x3, y=y3; x<=x2 && y<=y2; x++) {
            double temp = Math.sqrt(Math.pow(x-xCenter, 2) + Math.pow(y-yCenter, 2));
            if(temp<=dist) {
                dist = temp;
                xd = x;
                yd = y;
            }
        }
        for(int x=x4, y=y4; x<=x2 && y<=y2; y++) {
            double temp = Math.sqrt(Math.pow(x-xCenter, 2) + Math.pow(y-yCenter, 2));
            if(temp<=dist) {
                dist = temp;
                xd = x;
                yd = y;
            }
        }
        for(int x=x1, y=y1; x<=x4 && y<=y4; x++) {
            double temp = Math.sqrt(Math.pow(x-xCenter, 2) + Math.pow(y-yCenter, 2));
            if(temp<=dist) {
                dist = temp;
                xd = x;
                yd = y;
            }
        }

        if(dist<=radius)
            return true;
        return false;
    }
}
