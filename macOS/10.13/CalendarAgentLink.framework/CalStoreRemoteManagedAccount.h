/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarAgentLink.framework/Versions/A/CalendarAgentLink
 */

@interface CalStoreRemoteManagedAccount : CalStoreRemoteManagedObject {
    NSString * _acAccountID;
    NSString * _accountPluginID;
    BOOL  _isEnabledForCalendar;
    BOOL  _isEnabledForReminders;
    BOOL  _isMarkedForDeletion;
    NSString * _login;
    NSURL * _serverURL;
}

@property (nonatomic, readwrite, retain) NSString *acAccountID;
@property (nonatomic, readwrite, retain) NSString *accountPluginID;
@property (nonatomic, readwrite) BOOL isEnabledForCalendar;
@property (nonatomic, readwrite) BOOL isEnabledForReminders;
@property (nonatomic, readwrite) BOOL isMarkedForDeletion;
@property (nonatomic, readwrite, retain) NSString *login;
@property (nonatomic, readonly) CalStoreRemoteManagedPrincipal *mainPrincipal;
@property (nonatomic, readwrite, retain) NSURL *serverURL;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)acAccountID;
- (id)accountPluginID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEnabledForCalendar;
- (BOOL)isEnabledForReminders;
- (BOOL)isMarkedForDeletion;
- (id)login;
- (id)mainPrincipal;
- (id)serverURL;
- (void)setAcAccountID:(id)arg1;
- (void)setAccountPluginID:(id)arg1;
- (void)setIsEnabledForCalendar:(BOOL)arg1;
- (void)setIsEnabledForReminders:(BOOL)arg1;
- (void)setIsMarkedForDeletion:(BOOL)arg1;
- (void)setLogin:(id)arg1;
- (void)setServerURL:(id)arg1;

@end