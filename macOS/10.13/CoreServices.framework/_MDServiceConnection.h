/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/Metadata.framework/Versions/A/Metadata
 */

@interface _MDServiceConnection : NSObject {
    struct __CFDictionary { } * _bindings;
    NSObject<OS_xpc_object> * _connection;
    BOOL  _didSendGreeting;
    struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; } * _logFile;
    struct __CFDictionary { } * _msgLists;
    struct __CFString { } * _name;
    NSObject<OS_dispatch_queue> * _queue;
    struct __CFDictionary { } * _recvLists;
    unsigned long long  _timeConnect;
    unsigned long long  _timeDown;
    unsigned long long  _timeUp;
    NSObject<OS_xpc_object> * _unconnectError;
}

- (unsigned long long)_cfTypeID;
- (void)appendProfilesToTuningMsgs:(id)arg1;
- (void)appendStartChannelUUID:(struct __CFUUID { }*)arg1 withProfiles:(struct __CFArray { }*)arg2 toTuningMsgs:(id)arg3;
- (void)connect;
- (void)dealloc;
- (id)description;
- (void)finalize;
- (unsigned long long)hash;
- (id)initWithName:(struct __CFString { }*)arg1;
- (BOOL)isConnected;
- (BOOL)isEqual:(id)arg1;
- (void)send:(id)arg1;
- (void)sendGreeting;
- (void)unconnect:(id)arg1;
- (void)unpackEnv:(id)arg1;

@end
