/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
 */

@interface CNChangeHistoryFetchRequest : NSObject <NSSecureCoding> {
    NSString * _clientIdentifier;
    BOOL  _includeChangeAnchors;
    BOOL  _includeGroupChanges;
    BOOL  _unifyResults;
}

@property (nonatomic, readonly) NSString *clientIdentifier;
@property (nonatomic, readwrite) BOOL includeChangeAnchors;
@property (nonatomic, readwrite) BOOL includeGroupChanges;
@property (nonatomic, readwrite) BOOL unifyResults;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)clientIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)includeChangeAnchors;
- (BOOL)includeGroupChanges;
- (id)initWithClientIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setIncludeChangeAnchors:(BOOL)arg1;
- (void)setIncludeGroupChanges:(BOOL)arg1;
- (void)setUnifyResults:(BOOL)arg1;
- (BOOL)unifyResults;

@end
