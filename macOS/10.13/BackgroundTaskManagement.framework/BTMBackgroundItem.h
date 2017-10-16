/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BackgroundTaskManagement.framework/Versions/A/BackgroundTaskManagement
 */

@interface BTMBackgroundItem : NSObject <BTMBackgroundItem, NSSecureCoding> {
    id  _bookmark;
    id  _identifier;
    unsigned long long  _type;
    unsigned long long  _userElection;
}

@property (atomic, readonly) NSData *bookmark;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) NSUUID *identifier;
@property (atomic, readonly) NSString *name;
@property (atomic, readonly) Class superclass;
@property (atomic, readonly) unsigned long long type;
@property (atomic, readonly) unsigned long long userElection;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bookmark;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 bookmark:(id)arg3 userElection:(unsigned long long)arg4;
- (id)initWithType:(unsigned long long)arg1 bookmark:(id)arg2;
- (id)initWithURL:(id)arg1;
- (id)name;
- (unsigned long long)type;
- (unsigned long long)userElection;

@end
