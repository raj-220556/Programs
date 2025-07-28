

public class stack{
    private int[] array;
    private int stacktop;
    
    public stack(int capacity){
        array = new int[capacity];
        stacktop = -1;
    }

    public boolean push(int element){
        if(isFull()) return false;
        ++stacktop;

        try{Thread.sleep(1000);} catch(Exception e){ }

        array[stacktop] = element;
        return true;
    }
    
    public int pop(){
        if(isEmpty()) return Integer.MIN_VALUE;
        int obj = array[stacktop];
        array[stacktop] = Integer.MIN_VALUE;

        try{ Thread.sleep(1000);} catch(Exception e){ }

        stacktop--;
        return obj;
    }

    public boolean isEmpty(){
        return stacktop < 0;
    }

    public boolean isFull(){
        return stacktop >= array.length - 1;
    }

}