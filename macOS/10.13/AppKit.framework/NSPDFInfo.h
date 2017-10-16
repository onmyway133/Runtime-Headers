/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSPDFInfo : NSObject <NSCoding, NSCopying> {
    NSURL * _URL;
    NSMutableDictionary * _attributes;
    BOOL  _fileExtensionHidden;
    long long  _orientation;
    struct CGSize { 
        double width; 
        double height; 
    }  _paperSize;
    NSArray * _tagNames;
}

@property (atomic, readwrite, copy) NSURL *URL;
@property (atomic, readonly) NSMutableDictionary *attributes;
@property (getter=isFileExtensionHidden, atomic, readwrite) BOOL fileExtensionHidden;
@property (atomic, readwrite) long long orientation;
@property (atomic, readwrite) struct CGSize { double x1; double x2; } paperSize;
@property (atomic, readwrite, copy) NSArray *tagNames;

- (id)URL;
- (id)attributes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isFileExtensionHidden;
- (long long)orientation;
- (struct CGSize { double x1; double x2; })paperSize;
- (void)setFileExtensionHidden:(BOOL)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setPaperSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTagNames:(id)arg1;
- (void)setURL:(id)arg1;
- (id)tagNames;

@end
