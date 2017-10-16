/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABAllGroup : ABSpecialGroup {
    NSString * _remoteLocation;
}

+ (BOOL)_isPublicRecord;
+ (id)allGroup;
+ (id)allGroupForRemoteLocation:(id)arg1;
+ (id)specialGroupForAddressBook:(id)arg1;

- (BOOL)addMember:(id)arg1;
- (BOOL)addSubgroup:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)enclosedSubscriptionGroups;
- (void)finalize;
- (id)icon;
- (id)initWithRemoteLocation:(id)arg1;
- (id)initWithRemoteLocation:(id)arg1 addressBook:(id)arg2;
- (BOOL)isSpecialGroup;
- (BOOL)isSubscribed;
- (void)markRecordWithGroupSubscription:(id)arg1;
- (id)members;
- (id)membersAndSubgroups;
- (id)remoteLocation;
- (id)remoteSubscription;
- (BOOL)removeMember:(id)arg1;
- (BOOL)removeSubgroup:(id)arg1;
- (BOOL)removeValueforProperty:(id)arg1;
- (BOOL)setValue:(id)arg1 forProperty:(id)arg2;
- (id)sharingUniqueId;
- (id)subgroups;
- (id)subscription;
- (id)valueForProperty:(id)arg1;

@end