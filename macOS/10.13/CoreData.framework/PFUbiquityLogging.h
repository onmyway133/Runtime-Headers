/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
 */

@interface PFUbiquityLogging : NSObject {
    int  _desiredLogLevel;
}

@property (nonatomic, readwrite) int desiredLogLevel;

+ (BOOL)canLogMessageAtLevel:(int)arg1;
+ (void)initialize;
+ (void)setLoggingLevel:(int)arg1;

- (void)checkUserDefaults;
- (void)dealloc;
- (int)desiredLogLevel;
- (id)init;
- (void)setDesiredLogLevel:(int)arg1;
- (void)userDefaultsChanged:(id)arg1;

@end
