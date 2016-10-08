/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKAddPaymentPassRequestConfiguration : NSObject <NSSecureCoding> {
    NSString * _cardholderName;
    NSString * _encryptionScheme;
    NSString * _localizedDescription;
    NSString * _paymentNetwork;
    NSString * _primaryAccountIdentifier;
    NSString * _primaryAccountSuffix;
}

@property (nonatomic, copy) NSString *cardholderName;
@property (nonatomic, readonly, copy) NSString *encryptionScheme;
@property (nonatomic, copy) NSString *localizedDescription;
@property (nonatomic, copy) NSString *paymentNetwork;
@property (nonatomic, copy) NSString *primaryAccountIdentifier;
@property (nonatomic, copy) NSString *primaryAccountSuffix;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cardholderName;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptionScheme;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithEncryptionScheme:(id)arg1;
- (id)localizedDescription;
- (id)paymentNetwork;
- (id)primaryAccountIdentifier;
- (id)primaryAccountSuffix;
- (void)setCardholderName:(id)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setPaymentNetwork:(id)arg1;
- (void)setPrimaryAccountIdentifier:(id)arg1;
- (void)setPrimaryAccountSuffix:(id)arg1;

@end
