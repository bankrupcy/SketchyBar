#pragma once
#include <mach/mach.h>
#include "misc/memory_pool.h"
#include "bar_manager.h"
#include "message.h"

#define EVENT_SUCCESS      0x0
#define EVENT_FAILURE      0x1

enum event_type {
    EVENT_TYPE_UNKNOWN,
    APPLICATION_FRONT_SWITCHED,
    SPACE_CHANGED,
    DISPLAY_ADDED,
    DISPLAY_REMOVED,
    DISPLAY_MOVED,
    DISPLAY_RESIZED,
    DISPLAY_CHANGED,
    MENU_BAR_HIDDEN_CHANGED,
    SYSTEM_WOKE,
    SYSTEM_WILL_SLEEP,
    SHELL_REFRESH,
    ANIMATOR_REFRESH,
    MACH_MESSAGE,
    MOUSE_UP,
    MOUSE_DRAGGED,
    MOUSE_ENTERED,
    MOUSE_EXITED,
    MOUSE_SCROLLED,
    VOLUME_CHANGED,
    WIFI_CHANGED,
    BRIGHTNESS_CHANGED,
    POWER_SOURCE_CHANGED,
    MEDIA_CHANGED,
    DISTRIBUTED_NOTIFICATION,
    HOTLOAD,

    EVENT_TYPE_COUNT
};

struct event {
  void* context;
  enum event_type type;
};

void event_post(struct event *event);
