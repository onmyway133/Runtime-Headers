/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
 */

@interface MRVirtualTouchDeviceDescriptor : NSObject <NSCopying, NSMutableCopying> {
    BOOL  _absolute;
    BOOL  _integratedDisplay;
    union _MRHIDSize { 
        struct { 
            float width; 
            float height; 
        } ; 
        float data[2]; 
    }  _screenSize;
}

@property (getter=isAbsolute, nonatomic, readonly) BOOL absolute;
@property (getter=isIntegratedDisplay, nonatomic, readonly) BOOL integratedDisplay;
@property (nonatomic, readonly) union _MRHIDSize { struct { float x_1_1_1; float x_1_1_2; } x1; float x2[2]; } screenSize;

- (id)_copyWithZone:(struct _NSZone { }*)arg1 usingConcreteClass:(Class)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isAbsolute;
- (BOOL)isIntegratedDisplay;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (union _MRHIDSize { struct { float x_1_1_1; float x_1_1_2; } x1; float x2[2]; })screenSize;

@end
