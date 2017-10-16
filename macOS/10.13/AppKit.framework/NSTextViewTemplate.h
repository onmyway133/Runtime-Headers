/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSTextViewTemplate : NSViewTemplate {
    NSColor * _backgroundColor;
    struct CGSize { 
        double width; 
        double height; 
    }  _containerSize;
    id  _contents;
    id  _delegate;
    NSColor * _insertionPointColor;
    struct CGSize { 
        double width; 
        double height; 
    }  _maxSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _minSize;
    NSDictionary * _selectedTextAttributes;
    struct __tvtFlags { 
        unsigned int drawsBackground : 1; 
        unsigned int selectable : 1; 
        unsigned int editable : 1; 
        unsigned int richText : 1; 
        unsigned int importsGraphics : 1; 
        unsigned int horizontallyResizable : 1; 
        unsigned int verticallyResizable : 1; 
        unsigned int fieldEditor : 1; 
        unsigned int usesFontPanel : 1; 
        unsigned int rulerVisible : 1; 
        unsigned int containerTracksWidth : 1; 
        unsigned int containerTracksHeight : 1; 
        unsigned int usesRuler : 1; 
        unsigned int allowsUndo : 1; 
        unsigned int _pad : 18; 
    }  _tvtFlags;
    NSDictionary * _typingAttrs;
}

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

+ (void)initialize;

- (void)dealloc;

// Image: /Applications/Xcode.app/Contents/Developer/usr/lib/libMainThreadChecker.dylib

- (id)createRealObject;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithView:(id)arg1 className:(id)arg2;

@end
