/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SecurityFoundation.framework/Versions/A/SecurityFoundation
 */

@interface SFAccessPolicy_Ivars : NSObject {
    NSArray * accessControlList;
    NSString * accessGroup;
    struct { 
        long long mode; 
        struct { 
            unsigned long long authenticationRequirements; 
            long long subsetCount; 
        } authenticationPolicy; 
    }  accessibility;
    long long  sharingPolicy;
}

- (void).cxx_destruct;

@end