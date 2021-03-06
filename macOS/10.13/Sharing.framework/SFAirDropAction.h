/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Versions/A/Sharing
 */

@interface SFAirDropAction : NSObject <NSSecureCoding> {
    id  _actionHandler;
    NSString * _actionIdentifier;
    NSString * _localizedTitle;
    unsigned long long  _maxTransferState;
    unsigned long long  _minRequiredTransferState;
    BOOL  _requiresUnlockedUI;
    BOOL  _shouldUpdateUserResponse;
    NSString * _singleItemLocalizedTitle;
    NSString * _transferIdentifier;
}

@property (nonatomic, readwrite, copy) id actionHandler;
@property (nonatomic, readonly, copy) NSString *actionIdentifier;
@property (nonatomic, readwrite, copy) NSString *localizedTitle;
@property (nonatomic, readwrite) unsigned long long maxTransferState;
@property (nonatomic, readwrite) unsigned long long minRequiredTransferState;
@property (nonatomic, readwrite) BOOL requiresUnlockedUI;
@property (nonatomic, readwrite) BOOL shouldUpdateUserResponse;
@property (nonatomic, readwrite, copy) NSString *singleItemLocalizedTitle;
@property (nonatomic, readonly, copy) NSString *transferIdentifier;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionHandler;
- (id)actionIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransferIdentifier:(id)arg1 actionIdentifier:(id)arg2 title:(id)arg3 singleItemTitle:(id)arg4;
- (BOOL)isEqual:(id)arg1;
- (id)localizedTitle;
- (unsigned long long)maxTransferState;
- (unsigned long long)minRequiredTransferState;
- (BOOL)requiresUnlockedUI;
- (void)setActionHandler:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)setMaxTransferState:(unsigned long long)arg1;
- (void)setMinRequiredTransferState:(unsigned long long)arg1;
- (void)setRequiresUnlockedUI:(BOOL)arg1;
- (void)setShouldUpdateUserResponse:(BOOL)arg1;
- (void)setSingleItemLocalizedTitle:(id)arg1;
- (BOOL)shouldUpdateUserResponse;
- (id)singleItemLocalizedTitle;
- (id)transferIdentifier;
- (void)triggerAction;

@end
