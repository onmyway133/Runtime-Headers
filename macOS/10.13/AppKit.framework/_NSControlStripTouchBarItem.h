/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSControlStripTouchBarItem : NSCustomTouchBarItem {
    struct CGSize { 
        double width; 
        double height; 
    }  _maxSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _minSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredSize;
}

@property (atomic, readwrite) struct CGSize { double x1; double x2; } maxSize;
@property (atomic, readwrite) struct CGSize { double x1; double x2; } minSize;
@property (atomic, readwrite) struct CGSize { double x1; double x2; } preferredSize;

- (void)_itemViewMinSize:(struct CGSize { double x1; double x2; }*)arg1 maxSize:(struct CGSize { double x1; double x2; }*)arg2 preferredSize:(struct CGSize { double x1; double x2; }*)arg3;
- (struct CGSize { double x1; double x2; })maxSize;
- (struct CGSize { double x1; double x2; })minSize;
- (struct CGSize { double x1; double x2; })preferredSize;
- (void)setMaxSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMinSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPreferredSize:(struct CGSize { double x1; double x2; })arg1;

@end