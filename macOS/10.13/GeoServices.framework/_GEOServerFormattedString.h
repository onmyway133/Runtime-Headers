/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface _GEOServerFormattedString : NSObject <GEOServerFormattedString> {
    NSString * _formatString;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *formatStrings;
@property (nonatomic, readonly) NSArray *formatTokens;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *separators;
@property (atomic, readonly) Class superclass;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)formatStrings;
- (id)formatTokens;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)separators;

@end
