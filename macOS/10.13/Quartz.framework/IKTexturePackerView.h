/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
 */

@interface IKTexturePackerView : NSOpenGLView {
    NSTimer * _autoupdate;
    NSTextField * _koFree;
    NSTextField * _koUsed;
    IKTexturePacker * _packer;
    NSPopUpButton * _packerIndex;
}

- (void)autoUpdate;
- (void)beginOrtho;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)packer;
- (void)setPacker:(id)arg1;

@end
