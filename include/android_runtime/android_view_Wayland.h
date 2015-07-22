#ifndef _ANDROID_VIEW_WAYLAND_H
#define _ANDROID_VIEW_WAYLAND_H

#include "jni.h"

namespace android {


class WaylandWindow;

WaylandWindow* android_view_Wayland_getWindow(JNIEnv* env, jobject windowObj);

}


#endif