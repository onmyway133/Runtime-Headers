/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOResourceInfo : NSObject {
    BOOL  _allowResumingPartialDownload;
    NSArray * _equivalentResources;
    GEOResource * _resource;
}

@property (getter=_allowResumingPartialDownload, setter=_setAllowResumingPartialDownload:, nonatomic, readwrite) BOOL allowResumingPartialDownload;
@property (nonatomic, readonly) NSData *checksum;
@property (nonatomic, readwrite, copy) NSArray *equivalentResources;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) GEOResource *resource;
@property (nonatomic, readonly) int type;

- (void).cxx_destruct;
- (BOOL)_allowResumingPartialDownload;
- (void)_setAllowResumingPartialDownload:(BOOL)arg1;
- (id)checksum;
- (id)description;
- (id)equivalentResources;
- (id)initWithResource:(id)arg1;
- (id)name;
- (id)resource;
- (void)setEquivalentResources:(id)arg1;
- (int)type;

@end
