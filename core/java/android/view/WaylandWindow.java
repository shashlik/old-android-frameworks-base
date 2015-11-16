package android.view;

public class WaylandWindow {
    long mNativeObject;
    final Object mLock = new Object();
    public boolean isValid() { return true; }
    public WaylandWindow(long ptr) {
        mNativeObject = ptr;
    }

};