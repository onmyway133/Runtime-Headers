/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSSavePanelPrefixWatchingTagSetter : _NSSavePanelTagSetter {
    NSURL * directoryURL;
    NSString * prefix;
}

- (id)_URLForDirectoryToWatch;
- (BOOL)_checkAndSetTagsForURL:(id)arg1 usingAttributeCache:(BOOL)arg2;
- (void)_enumerateURLsUsingBlock:(id)arg1;
- (id)_initWithDirectoryURL:(id)arg1 useSecurityScopedURL:(BOOL)arg2 prefix:(id)arg3 tags:(id)arg4;
- (BOOL)_isRelevantURL:(id)arg1;
- (void)dealloc;

@end