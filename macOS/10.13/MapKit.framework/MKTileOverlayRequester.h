/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
 */

@interface MKTileOverlayRequester : GEOTileRequester {
    BOOL  _cancelled;
    NSMutableArray * _errors;
    NSMutableSet * _running;
    NSMutableArray * _waiting;
}

+ (unsigned int)registerOverlay:(id)arg1;
+ (unsigned char)tileProviderIdentifier;
+ (void)unregisterOverlay:(unsigned int)arg1;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)_doWorkOrFinish;
- (void)_operationFailed:(id)arg1 error:(id)arg2;
- (void)_operationFinished:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (BOOL)isRunning;
- (void)start;

@end
