/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSTextColorBinderPlugin : _NSBinderPlugin <_NSTextColorBinderPlugin> {
    struct __textColorBinderPluginFlags { 
        unsigned int _isTextColorInvalidationCapable : 1; 
        unsigned int _reservedTextColorBinderPlugin : 31; 
    }  _textColorBinderPluginFlags;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

+ (BOOL)isUsableWithObject:(id)arg1;

- (id)initWithBinder:(id)arg1 object:(id)arg2;
- (id)textColorInvalidationCapableObjectForObject:(id)arg1;

@end
