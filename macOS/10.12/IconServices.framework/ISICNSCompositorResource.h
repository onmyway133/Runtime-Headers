/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IconServices.framework/Versions/A/IconServices
 */

@interface ISICNSCompositorResource : NSObject <ISCompositorResourceProtocol> {
    void * _icns;
    unsigned long long  _variantFlags;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;
@property (atomic, readonly) unsigned long long variantFlags;

- (void)dealloc;
- (id)imageForDrawingAtSize:(struct CGSize { double x1; double x2; })arg1 scale:(unsigned int)arg2 variantFlags:(unsigned long long)arg3;
- (id)initWithData:(id)arg1 variantFlags:(unsigned long long)arg2;
- (id)initWithURL:(id)arg1 variantFlags:(unsigned long long)arg2;
- (unsigned long long)variantFlags;

@end
