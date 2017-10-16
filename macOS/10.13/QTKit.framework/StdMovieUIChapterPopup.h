/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
 */

@interface StdMovieUIChapterPopup : StdMovieUITextItem {
    id  _actionTarget;
    NSArray * _chapterList;
    NSMenu * _chapterMenu;
    unsigned int  _currentIndex;
    BOOL  _enabled;
    SEL  _theAction;
}

- (id)chapterList;
- (struct CGSize { double x1; double x2; })computeMaximumTitleSize;
- (void)constructChapterMenu;
- (unsigned int)currentIndex;
- (void)dealloc;
- (BOOL)enabled;
- (void)finalize;
- (id)initWithChapterList:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)menuAction:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)setCurrentIndex:(unsigned int)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setTarget:(id)arg1;

@end