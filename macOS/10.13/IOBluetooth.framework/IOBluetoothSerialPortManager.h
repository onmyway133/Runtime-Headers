/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
 */

@interface IOBluetoothSerialPortManager : BTClient

+ (id)sharedSerialPortManager;

- (int)addPort:(id)arg1;
- (BOOL)canModifySerialPort:(id)arg1;
- (id)createOutgoingSerialPortForFirstSerialServiceOnDevice:(id)arg1;
- (id)createOutgoingSerialPortForFirstServiceOnDevice:(id)arg1 withUUID:(unsigned short)arg2;
- (int)deviceHasSerialPortServices:(id)arg1 count:(int*)arg2 includeRFCOMMServices:(BOOL)arg3 includeDUNServices:(BOOL)arg4;
- (id)getAllOutgoingPersistentSerialPorts:(BOOL)arg1 andIncomingPersistentSerialPorts:(BOOL)arg2 includeBluetoothModemPort:(BOOL)arg3;
- (id)getAllPersistentOutgoingSerialPortsForDevice:(id)arg1;
- (id)getBSDTTYCompatibleNameForDevice:(id)arg1 andServiceName:(id)arg2;
- (id)getBluetoothModemPortDictionary;
- (id)getConnection;
- (id)getSerialPortWithName:(id)arg1;
- (id)getUniqueSerialPortNameWithBaseString:(id)arg1;
- (id)init;
- (BOOL)isAcceptableSerialPortName:(id)arg1;
- (int)modifyPersistentSerialPort:(const char *)arg1 andDict:(struct __CFDictionary { }*)arg2;
- (void)removeAllSerialPortsForDevice:(id)arg1;
- (int)removePort:(id)arg1;
- (void)resetSerialPortCreationUniqueIndex;
- (BOOL)serialPortExists:(id)arg1;
- (int)updatePort:(id)arg1 removeAndReaddIfNecessary:(BOOL)arg2;

@end
