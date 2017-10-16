/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IconServices.framework/Versions/A/IconServices
 */

@interface ISVariant : NSObject <ISIconsetVariant> {
    NSDictionary * _compositionInfo;
    ISIconset * _iconset;
    NSString * _name;
    NSMutableDictionary * _resources;
    ISVariant * _selectedVariant;
    int  _sizeSet;
    unsigned int  _type;
}

@property (atomic, readwrite, retain) NSDictionary *compositionInfo;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) ISIconset *iconset;
@property (atomic, readonly) NSString *name;
@property (atomic, readonly) NSMutableDictionary *resources;
@property (atomic, readwrite, retain) ISVariant *selectedVariant;
@property (atomic, readwrite) int sizeSet;
@property (atomic, readonly) Class superclass;
@property (atomic, readwrite) unsigned int type;

+ (id)resourceTypes;

- (void).cxx_destruct;
- (BOOL)addResourceWithURL:(id)arg1 resourceInfo:(id)arg2;
- (id)compositionInfo;
- (id)description;
- (id)icnsWithFlags:(long long)arg1;
- (id)iconset;
- (struct CGImage { }*)imageForSize:(unsigned long long)arg1 scale:(unsigned long long)arg2 errors:(id*)arg3;
- (id)initWithName:(id)arg1 iconset:(id)arg2;
- (id)initWithType:(unsigned int)arg1 sizeSet:(int)arg2;
- (id)name;
- (id)resources;
- (id)selectedVariant;
- (void)setCompositionInfo:(id)arg1;
- (void)setSelectedVariant:(id)arg1;
- (void)setSizeSet:(int)arg1;
- (void)setType:(unsigned int)arg1;
- (int)sizeSet;
- (unsigned int)type;

// ISVariant (ISIconsetVariant)

- (id)imageWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(unsigned int)arg2;

@end
