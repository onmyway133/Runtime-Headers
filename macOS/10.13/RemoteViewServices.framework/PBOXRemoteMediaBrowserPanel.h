/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteViewServices.framework/Versions/A/RemoteViewServices
 */

@interface PBOXRemoteMediaBrowserPanel : NSRemotePanel {
    NSString * _autosaveName;
    unsigned long long  _browserType;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frame;
    BOOL  _isVisible;
}

@property (atomic, readwrite, copy) NSString *autosaveName;
@property (atomic, readwrite) unsigned long long browserType;
@property (atomic, readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (atomic, readonly) BOOL isVisible;

+ (id)keyPathsForPanelSettings;

- (unsigned long long)_panelType;
- (id)autosaveName;
- (unsigned long long)browserType;
- (void)dealloc;
- (id)dictionaryForObservedValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (BOOL)isVisible;
- (void)orderFront:(id)arg1;
- (void)orderOut:(id)arg1;
- (id)serializeSettings;
- (void)setAutosaveName:(id)arg1;
- (void)setBrowserType:(unsigned long long)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
