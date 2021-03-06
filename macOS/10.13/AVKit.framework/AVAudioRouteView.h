/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
 */

@interface AVAudioRouteView : NSTableCellView <AVAudioRouteOutputDeviceSelectionDelegate, NSTableViewDataSource, NSTableViewDelegate> {
    NSArray * _activeAudioRouteOutputDevices;
    NSImage * _albumImage;
    NSImageView * _albumImageView;
    NSString * _artistName;
    NSTextField * _artistNameTextField;
    NSArray * _audioRouteOutputDevices;
    NSLayoutConstraint * _bottomConstraint;
    <AVAudioRouteViewDelegate> * _delegate;
    BOOL  _expanded;
    NSString * _groupName;
    NSTextField * _groupNameTextField;
    NSScrollView * _outputDevicesScrollView;
    NSTableView * _outputDevicesTableView;
    NSImage * _routeImage;
    NSLayoutConstraint * _scrollViewHeightConstraint;
    NSView * _separatorView;
    NSLayoutConstraint * _tableViewHeightConstraint;
    NSString * _trackName;
    NSTextField * _trackNameTextField;
}

@property (nonatomic, readwrite, retain) NSArray *activeAudioRouteOutputDevices;
@property (nonatomic, readwrite, retain) NSImage *albumImage;
@property (nonatomic, readwrite, retain) NSString *artistName;
@property (nonatomic, readwrite, retain) NSArray *audioRouteOutputDevices;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (nonatomic, readwrite) <AVAudioRouteViewDelegate> *delegate;
@property (atomic, readonly, copy) NSString *description;
@property (getter=isExpanded, nonatomic, readwrite) BOOL expanded;
@property (nonatomic, readwrite, retain) NSString *groupName;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readwrite, retain) NSImage *routeImage;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readwrite, retain) NSString *trackName;

- (void).cxx_destruct;
- (double)_audioRouteOutputDeviceViewHeight;
- (void)_updateBottomConstraint;
- (void)_updateHeightConstraints;
- (id)activeAudioRouteOutputDevices;
- (id)albumImage;
- (id)artistName;
- (void)audioRouteOutputDeviceView:(id)arg1 selectionDidChange:(BOOL)arg2;
- (id)audioRouteOutputDevices;
- (id)delegate;
- (id)groupName;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)isExpanded;
- (BOOL)isFlipped;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)routeImage;
- (void)setActiveAudioRouteOutputDevices:(id)arg1;
- (void)setAlbumImage:(id)arg1;
- (void)setArtistName:(id)arg1;
- (void)setAudioRouteOutputDevices:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExpanded:(BOOL)arg1;
- (void)setGroupName:(id)arg1;
- (void)setRouteImage:(id)arg1;
- (void)setTrackName:(id)arg1;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)trackName;

@end
