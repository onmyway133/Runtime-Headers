/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
 */

@interface _NSHTTPBodyStreamWrapper : NSObject {
    struct __CFString { } * backupFile;
    NSInputStream * bodyStream;
    id  spoolingStream;
}

- (void)completedSpoolToFile;
- (void)dealloc;
- (void)finalize;
- (id)initWithStream:(id)arg1;
- (void)invalidate;
- (id)originalBodyStream;
- (id)requestStreamForTransmission;
- (void)setSpoolPath:(id)arg1;
- (id)spoolPath;

@end
