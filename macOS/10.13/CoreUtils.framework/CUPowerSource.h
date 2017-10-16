/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/Versions/A/CoreUtils
 */

@interface CUPowerSource : NSObject <NSSecureCoding> {
    NSString * _accessoryID;
    long long  _adapterFamilyCode;
    NSString * _adapterName;
    double  _chargeLevel;
    BOOL  _charging;
    long long  _familyCode;
    NSString * _groupID;
    NSDictionary * _ioKitAdapterDescription;
    NSDictionary * _ioKitDescription;
    NSString * _name;
    NSString * _partID;
    BOOL  _present;
    long long  _productID;
    struct OpaqueIOPSPowerSourceID { } * _psID;
    long long  _sourceID;
    NSString * _state;
    NSString * _transportType;
    NSString * _type;
    long long  _vendorID;
}

@property (nonatomic, readwrite, copy) NSString *accessoryID;
@property (nonatomic, readwrite) long long adapterFamilyCode;
@property (nonatomic, readwrite, copy) NSString *adapterName;
@property (nonatomic, readwrite) double chargeLevel;
@property (nonatomic, readwrite) BOOL charging;
@property (nonatomic, readwrite) long long familyCode;
@property (nonatomic, readwrite, copy) NSString *groupID;
@property (nonatomic, readwrite, copy) NSDictionary *ioKitAdapterDescription;
@property (nonatomic, readwrite, copy) NSDictionary *ioKitDescription;
@property (nonatomic, readwrite, copy) NSString *name;
@property (nonatomic, readwrite, copy) NSString *partID;
@property (nonatomic, readwrite) BOOL present;
@property (nonatomic, readwrite) long long productID;
@property (nonatomic, readwrite) long long sourceID;
@property (nonatomic, readwrite, copy) NSString *state;
@property (nonatomic, readwrite, copy) NSString *transportType;
@property (nonatomic, readwrite, copy) NSString *type;
@property (nonatomic, readwrite) long long vendorID;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessoryID;
- (long long)adapterFamilyCode;
- (id)adapterName;
- (double)chargeLevel;
- (BOOL)charging;
- (void)dealloc;
- (id)description;
- (id)detailedDescription;
- (void)encodeWithCoder:(id)arg1;
- (long long)familyCode;
- (id)groupID;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)invalidate;
- (id)ioKitAdapterDescription;
- (id)ioKitDescription;
- (BOOL)isEqual:(id)arg1;
- (id)name;
- (id)partID;
- (BOOL)present;
- (long long)productID;
- (int)publish;
- (void)setAccessoryID:(id)arg1;
- (void)setAdapterFamilyCode:(long long)arg1;
- (void)setAdapterName:(id)arg1;
- (void)setChargeLevel:(double)arg1;
- (void)setCharging:(BOOL)arg1;
- (void)setFamilyCode:(long long)arg1;
- (void)setGroupID:(id)arg1;
- (void)setIoKitAdapterDescription:(id)arg1;
- (void)setIoKitDescription:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPartID:(id)arg1;
- (void)setPresent:(BOOL)arg1;
- (void)setProductID:(long long)arg1;
- (void)setSourceID:(long long)arg1;
- (void)setState:(id)arg1;
- (void)setTransportType:(id)arg1;
- (void)setType:(id)arg1;
- (void)setVendorID:(long long)arg1;
- (long long)sourceID;
- (id)state;
- (id)transportType;
- (id)type;
- (unsigned int)updateWithPowerAdapterDetails:(id)arg1;
- (unsigned int)updateWithPowerSourceDescription:(id)arg1;
- (long long)vendorID;

@end
