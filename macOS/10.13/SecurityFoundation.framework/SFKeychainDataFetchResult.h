/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SecurityFoundation.framework/Versions/A/SecurityFoundation
 */

@interface SFKeychainDataFetchResult : _SFKeychainFetchResult {
    id  _dataFetchResult;
}

@property (atomic, readonly) SFKeychainData *value;

- (void).cxx_destruct;
- (void)fetchValueWithAuthenticationContext:(id)arg1 resultHandler:(id)arg2;

@end
