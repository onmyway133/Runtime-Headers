/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
 */

@interface AVNSURLProtocolRequest : AVAssetCustomURLRequest {
    AVAssetCustomURLBridgeForNSURLProtocol * _bridge;
    struct _CFURLConnection { } * _connection;
    struct __CFError { } * _error;
}

@property (nonatomic, readwrite) AVAssetCustomURLBridgeForNSURLProtocol *bridge;
@property (nonatomic, readwrite) struct _CFURLConnection { }*connection;

- (void).cxx_destruct;
- (id)bridge;
- (struct _CFURLConnection { }*)connection;
- (void)dealloc;
- (void)setBridge:(id)arg1;
- (void)setConnection:(struct _CFURLConnection { }*)arg1;

@end
