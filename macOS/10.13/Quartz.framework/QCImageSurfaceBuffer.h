/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCImageSurfaceBuffer : QCImagePixelBuffer {
    struct __IOSurface { } * _surface;
}

- (void)_finalize_QCImageSurfaceBuffer;
- (const void*)baseAddress;
- (void*)baseAddressForSkippedRows:(unsigned long long)arg1 skippedPixels:(unsigned long long)arg2;
- (BOOL)beginUpdatePixels:(BOOL)arg1 colorSpace:(struct CGColorSpace { }*)arg2;
- (void)dealloc;
- (void)endUpdatePixels;
- (void)finalize;
- (unsigned long long)identifier;
- (id)initWithBaseAddress:(const void*)arg1 format:(id)arg2 pixelsWide:(unsigned long long)arg3 pixelsHigh:(unsigned long long)arg4 options:(id)arg5;
- (id)initWithFormat:(id)arg1 pixelsWide:(unsigned long long)arg2 pixelsHigh:(unsigned long long)arg3 options:(id)arg4;
- (struct __IOSurface { }*)surface;

@end
