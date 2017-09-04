package com.foreign.Android.Base;

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

public class JNI
{
    static void debug_log(Object message)
    {
        android.util.Log.d("garuda", (message==null ? "null" : message.toString()));
    }

    public static Object GetActivityClassInner59()
    {
        return com.apps.garuda.garuda.class;
    }
    
    public static Object GetActivityObjectInner60()
    {
        return com.fuse.Activity.getRootActivity();
    }
    
}
