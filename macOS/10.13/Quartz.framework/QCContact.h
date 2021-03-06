/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCContact : NSObject {
    unsigned long long  _index;
    struct _QCContactInfo { 
        double x; 
        double y; 
        double prev_x; 
        double prev_y; 
        int state; 
    }  _info;
}

@property (atomic, readonly) unsigned long long index;
@property (atomic, readonly) int state;
@property (atomic, readonly) double x;
@property (atomic, readonly) double y;

+ (id)contactWithInfo:(struct _QCContactInfo { double x1; double x2; double x3; double x4; int x5; })arg1 index:(unsigned long long)arg2;

- (id)description;
- (unsigned long long)index;
- (id)initWithInfo:(struct _QCContactInfo { double x1; double x2; double x3; double x4; int x5; })arg1 index:(unsigned long long)arg2;
- (int)state;
- (double)x;
- (double)y;

@end
