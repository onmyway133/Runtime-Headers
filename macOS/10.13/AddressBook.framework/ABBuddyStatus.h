/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABBuddyStatus : NSObject {
    Class  IMService;
    NSMutableDictionary * cache;
}

+ (id)sharedBuddyStatus;
+ (BOOL)showStatus;

- (id)abServiceKeyForHandle:(id)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)isAvailable:(id)arg1;
- (BOOL)isHandleAvailable:(id)arg1;
- (unsigned long long)statusForPerson:(id)arg1;
- (id)statusImageForPerson:(id)arg1;
- (void)statusUpdate:(id)arg1;
- (void)updateStatus:(id)arg1;

@end
