/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSCGSDisplay : NSObject {
    NSUUID * _UUID;
    double  _backingPixelsPerPoint;
    struct CGColorSpace { } * _colorSpace;
    unsigned int  _depth;
    struct CGSize { 
        double width; 
        double height; 
    }  _devicePixelCounts;
    int  _displayID;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frame;
    double  _maxHDRValue;
}

@property (atomic, readonly, copy) NSUUID *UUID;
@property (atomic, readonly) double backingPixelsPerPoint;
@property (atomic, readonly) struct CGColorSpace { }*colorSpace;
@property (atomic, readonly) unsigned int depth;
@property (atomic, readonly) struct CGSize { double x1; double x2; } devicePixelCounts;
@property (atomic, readonly) int displayID;
@property (atomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (atomic, readonly) double maxHDRValue;

+ (void)addAcceleratorChangedHandler:(id)arg1;
+ (void)addColorSpaceChangedHandler:(id)arg1;
+ (void)addDisplayChangedHandler:(id)arg1;
+ (void)addMaximumHDRValueChangedHandler:(id)arg1;
+ (unsigned int)changeSeed;
+ (BOOL)displaysWillChange;
+ (double)flipOffset;
+ (id)uniqueDisplays;
+ (BOOL)updateSeeds;

- (id)UUID;
- (double)backingPixelsPerPoint;
- (struct CGColorSpace { }*)colorSpace;
- (void)dealloc;
- (unsigned int)depth;
- (id)description;
- (struct CGSize { double x1; double x2; })devicePixelCounts;
- (int)displayID;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)initWithDisplayID:(int)arg1 flipOffset:(double)arg2;
- (double)maxHDRValue;

@end
