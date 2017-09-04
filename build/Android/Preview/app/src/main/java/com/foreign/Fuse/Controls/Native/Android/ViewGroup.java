package com.foreign.Fuse.Controls.Native.Android;

// fuse defined imports
import com.uno.UnoObject;
import com.uno.BoolArray;
import com.uno.ByteArray;
import com.uno.CharArray;
import com.uno.DoubleArray;
import com.uno.FloatArray;
import com.uno.IntArray;
import com.uno.LongArray;
import com.uno.ObjectArray;
import com.uno.ShortArray;
import com.uno.StringArray;
import com.Bindings.UnoHelper;
import com.Bindings.UnoWrapped;
import com.Bindings.ExternedBlockHost;

public class ViewGroup
{
    static void debug_log(Object message)
    {
        android.util.Log.d("garuda", (message==null ? "null" : message.toString()));
    }

    public static void AddView216(final Object parentHandle,final Object childHandle)
    {
        android.view.ViewGroup viewGroup = (android.view.ViewGroup)parentHandle;
        android.view.View childView = (android.view.View)childHandle;
        viewGroup.addView(childView);
    }
    
    public static void AddView1217(final Object parentHandle,final Object childHandle,final int index)
    {
        android.view.ViewGroup viewGroup = (android.view.ViewGroup)parentHandle;
        android.view.View childView = (android.view.View)childHandle;
        viewGroup.addView(childView, index);
    }
    
    public static Object Create218()
    {
        android.widget.FrameLayout frameLayout = new com.fuse.android.views.ViewGroup(com.fuse.Activity.getRootActivity());
        frameLayout.setFocusable(true);
        frameLayout.setFocusableInTouchMode(true);
        frameLayout.setLayoutParams(new android.widget.FrameLayout.LayoutParams(android.view.ViewGroup.LayoutParams.MATCH_PARENT, android.view.ViewGroup.LayoutParams.MATCH_PARENT));
        return frameLayout;
    }
    
    public static void RemoveView219(final Object parentHandle,final Object childHandle)
    {
        android.view.ViewGroup viewGroup = (android.view.ViewGroup)parentHandle;
        android.view.View childView = (android.view.View)childHandle;
        viewGroup.removeView(childView);
    }
    
}
