/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
 */

@interface IKPictureTakerRecentsManager : NSObject {
    NSMutableArray * _recents;
    <IKPTRecentsService> * _recentsService;
}

+ (id)defaultManager;

- (void)addRecent:(id)arg1;
- (void)addRecent:(id)arg1 includingCurrent:(id)arg2;
- (id)bestRepresentationForRecentPicture:(id)arg1;
- (void)clearRecents:(BOOL)arg1;
- (void)dealloc;
- (void)eraseRecentPictures:(id)arg1 async:(BOOL)arg2;
- (id)init;
- (id)originalImageForRecentPicture:(id)arg1;
- (void)pullRecentPicturesAsync:(BOOL)arg1;
- (void)pushRecentPicturesAsync:(BOOL)arg1;
- (id)recentPictureWithID:(id)arg1;
- (id)recentPictureWithInfo:(id)arg1 thumbnail:(id)arg2;
- (id)recentPictures;
- (id)recentsService;
- (void)removeRecent:(id)arg1;
- (void)setRecentPictureAsCurrent:(id)arg1;
- (void)updateRecentPicture:(id)arg1 setCropInfo:(id)arg2 smallIcon:(id)arg3;
- (id)userPictureData;

@end