/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
 */

@interface IOBluetoothSDPServiceAttribute : NSObject <NSCoding, NSSecureCoding> {
    void * _mReserved;
    IOBluetoothSDPDataElement * mAttributeDataElement;
    unsigned short  mAttributeID;
    IOBluetoothSDPDataElement * mAttributeIDDataElement;
}

+ (BOOL)supportsSecureCoding;
+ (id)withID:(unsigned short)arg1 attributeElement:(id)arg2;
+ (id)withID:(unsigned short)arg1 attributeElementValue:(id)arg2;

- (long long)compareAttributeID:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (unsigned short)getAttributeID;
- (id)getDataElement;
- (id)getIDDataElement;
- (id)initWithCoder:(id)arg1;
- (id)initWithID:(unsigned short)arg1 attributeElement:(id)arg2;
- (id)initWithID:(unsigned short)arg1 attributeElementValue:(id)arg2;

// IOBluetoothSDPServiceAttribute (IOBluetoothSDPServiceAttributePrivate)

- (BOOL)encodeAttribute:(char *)arg1;
- (unsigned int)getEncodedSize;

@end
