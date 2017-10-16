/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSCGSWindowCornerMask : NSCGSWindowCornerMask {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _center;
    struct CGImage { } * _image;
    double  _imageScale;
}

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })center;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (struct CGImage { }*)image;
- (double)imageScale;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

@end
