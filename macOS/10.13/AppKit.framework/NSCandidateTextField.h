/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSCandidateTextField : NSTextField {
    NSColor * _candidateColor;
    BOOL  _trimOnLeft;
    BOOL  _trimOnRight;
}

@property (atomic, readwrite) BOOL trimOnLeft;
@property (atomic, readwrite) BOOL trimOnRight;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

+ (Class)cellClass;

- (void)dealloc;

// Image: /Applications/Xcode.app/Contents/Developer/usr/lib/libMainThreadChecker.dylib

- (void)setAttributedCorrection:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setTrimOnLeft:(BOOL)arg1;
- (void)setTrimOnRight:(BOOL)arg1;
- (BOOL)trimOnLeft;
- (BOOL)trimOnRight;

@end
