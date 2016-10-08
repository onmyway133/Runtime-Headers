/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXHandoffContext : NSObject <NSSecureCoding> {
    NSDictionary * _context;
    NSString * _handoffIdentifier;
    bool  _outgoing;
    CXHandle * _remoteHandle;
}

@property (nonatomic, copy) NSDictionary *context;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly, copy) NSString *handoffIdentifier;
@property (getter=isOutgoing, nonatomic) bool outgoing;
@property (nonatomic, copy) CXHandle *remoteHandle;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)context;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)handoffIdentifier;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithHandoffIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToHandoffContext:(id)arg1;
- (bool)isOutgoing;
- (id)remoteHandle;
- (void)setContext:(id)arg1;
- (void)setOutgoing:(bool)arg1;
- (void)setRemoteHandle:(id)arg1;

@end
