/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
 */

@interface QLThumbnailRequest : NSObject {
    QLThumbnailRequestReserved * _reserved;
}

@property (atomic, readonly) NSURL *URL;
@property (atomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentRect;
@property (atomic, readonly) NSImage *image;
@property (atomic, readonly) struct CGSize { double x1; double x2; } maximumSize;
@property (atomic, readonly) NSDictionary *options;

- (id)URL;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentRect;
- (void)dealloc;
- (void)dispatchInQueue:(id)arg1 completionBlock:(id)arg2;
- (id)image;
- (id)initWithURL:(id)arg1 maximumSize:(struct CGSize { double x1; double x2; })arg2 options:(id)arg3;
- (struct CGSize { double x1; double x2; })maximumSize;
- (id)options;

@end
