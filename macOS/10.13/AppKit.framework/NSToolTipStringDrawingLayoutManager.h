/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSToolTipStringDrawingLayoutManager : NSObject {
    NSLayoutManager * _layoutManager;
    NSDictionary * _wrappingAttributes;
}

@property (atomic, readonly, retain) NSDictionary *wrappingAttributes;

+ (id)sharedToolTipStringDrawingLayoutManager;
+ (struct CGSize { double x1; double x2; })sizeForDisplayingAttributedString:(id*)arg1;

- (struct CGSize { double x1; double x2; })_sizeWithSize:(struct CGSize { double x1; double x2; })arg1 attributedString:(id*)arg2;
- (id)_wrappingAttributes;
- (void)dealloc;
- (id)wrappingAttributes;

@end
