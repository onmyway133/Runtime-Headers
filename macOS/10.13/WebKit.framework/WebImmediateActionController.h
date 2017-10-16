/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebKitLegacy.framework/Versions/A/WebKitLegacy
 */

@interface WebImmediateActionController : NSObject <NSImmediateActionGestureRecognizerDelegate, QLPreviewMenuItemDelegate> {
    BOOL  _contentPreventsDefault;
    struct RetainPtr<DDActionContext> { 
        void *m_ptr; 
    }  _currentActionContext;
    struct RetainPtr<QLPreviewMenuItem> { 
        void *m_ptr; 
    }  _currentQLPreviewMenuItem;
    BOOL  _hasActivatedActionContext;
    struct HitTestResult { 
        struct HitTestLocation { 
            struct LayoutPoint { 
                struct LayoutUnit { 
                    int m_value; 
                } m_x; 
                struct LayoutUnit { 
                    int m_value; 
                } m_y; 
            } m_point; 
            struct IntRect { 
                struct IntPoint { 
                    int m_x; 
                    int m_y; 
                } m_location; 
                struct IntSize { 
                    int m_width; 
                    int m_height; 
                } m_size; 
            } m_boundingBox; 
            struct FloatPoint { 
                float m_x; 
                float m_y; 
            } m_transformedPoint; 
            struct FloatQuad { 
                struct FloatPoint { 
                    float m_x; 
                    float m_y; 
                } m_p1; 
                struct FloatPoint { 
                    float m_x; 
                    float m_y; 
                } m_p2; 
                struct FloatPoint { 
                    float m_x; 
                    float m_y; 
                } m_p3; 
                struct FloatPoint { 
                    float m_x; 
                    float m_y; 
                } m_p4; 
            } m_transformedRect; 
            bool m_isRectBased; 
            bool m_isRectilinear; 
        } m_hitTestLocation; 
        struct RefPtr<WebCore::Node> { 
            struct Node {} *m_ptr; 
        } m_innerNode; 
        struct RefPtr<WebCore::Node> { 
            struct Node {} *m_ptr; 
        } m_innerNonSharedNode; 
        struct LayoutPoint { 
            struct LayoutUnit { 
                int m_value; 
            } m_x; 
            struct LayoutUnit { 
                int m_value; 
            } m_y; 
        } m_pointInInnerNodeFrame; 
        struct LayoutPoint { 
            struct LayoutUnit { 
                int m_value; 
            } m_x; 
            struct LayoutUnit { 
                int m_value; 
            } m_y; 
        } m_localPoint; 
        struct RefPtr<WebCore::Element> { 
            struct Element {} *m_ptr; 
        } m_innerURLElement; 
        struct RefPtr<WebCore::Scrollbar> { 
            struct Scrollbar {} *m_ptr; 
        } m_scrollbar; 
        bool m_isOverWidget; 
        struct unique_ptr<WTF::ListHashSet<WTF::RefPtr<WebCore::Node>, WTF::PtrHash<WTF::RefPtr<WebCore::Node> > >, std::__1::default_delete<WTF::ListHashSet<WTF::RefPtr<WebCore::Node>, WTF::PtrHash<WTF::RefPtr<WebCore::Node> > > > > { 
            struct __compressed_pair<WTF::ListHashSet<WTF::RefPtr<WebCore::Node>, WTF::PtrHash<WTF::RefPtr<WebCore::Node> > > *, std::__1::default_delete<WTF::ListHashSet<WTF::RefPtr<WebCore::Node>, WTF::PtrHash<WTF::RefPtr<WebCore::Node> > > > > { 
                struct ListHashSet<WTF::RefPtr<WebCore::Node>, WTF::PtrHash<WTF::RefPtr<WebCore::Node> > > {} *__first_; 
            } __ptr_; 
        } m_rectBasedTestResult; 
    }  _hitTestResult;
    struct RetainPtr<NSImmediateActionGestureRecognizer> { 
        void *m_ptr; 
    }  _immediateActionRecognizer;
    int  _type;
    WebView * _webView;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

+ (struct DictionaryPopupInfo { struct FloatPoint { float x_1_1_1; float x_1_1_2; } x1; struct TextIndicatorData { struct FloatRect { struct FloatPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct FloatSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_2_1_1; struct FloatRect { struct FloatPoint { float x_1_3_1; float x_1_3_2; } x_2_2_1; struct FloatSize { float x_2_3_1; float x_2_3_2; } x_2_2_2; } x_2_1_2; struct FloatRect { struct FloatPoint { float x_1_3_1; float x_1_3_2; } x_3_2_1; struct FloatSize { float x_2_3_1; float x_2_3_2; } x_3_2_2; } x_2_1_3; struct Vector<WebCore::FloatRect, 0, WTF::CrashOnOverflow, 16> { struct FloatRect {} *x_4_2_1; unsigned int x_4_2_2; unsigned int x_4_2_3; } x_2_1_4; float x_2_1_5; struct RefPtr<WebCore::Image> { struct Image {} *x_6_2_1; } x_2_1_6; struct RefPtr<WebCore::Image> { struct Image {} *x_7_2_1; } x_2_1_7; struct RefPtr<WebCore::Image> { struct Image {} *x_8_2_1; } x_2_1_8; struct Color { union { unsigned long long x_1_3_1; struct ExtendedColor {} *x_1_3_2; } x_9_2_1; } x_2_1_9; unsigned char x_2_1_10; unsigned short x_2_1_11; } x2; })_dictionaryPopupInfoForRange:(struct Range { unsigned int x1; struct Ref<WebCore::Document> { struct Document {} *x_2_1_1; } x2; struct RangeBoundaryPoint { struct RefPtr<WebCore::Node> { struct Node {} *x_1_2_1; } x_3_1_1; struct optional<unsigned int> { bool x_2_2_1; union constexpr_storage_t<unsigned int> { unsigned char x_2_3_1; unsigned int x_2_3_2; } x_2_2_2; } x_3_1_2; struct RefPtr<WebCore::Node> { struct Node {} *x_3_2_1; } x_3_1_3; } x3; struct RangeBoundaryPoint { struct RefPtr<WebCore::Node> { struct Node {} *x_1_2_1; } x_4_1_1; struct optional<unsigned int> { bool x_2_2_1; union constexpr_storage_t<unsigned int> { unsigned char x_2_3_1; unsigned int x_2_3_2; } x_2_2_2; } x_4_1_2; struct RefPtr<WebCore::Node> { struct Node {} *x_3_2_1; } x_4_1_3; } x4; }*)arg1 inFrame:(struct Frame { int (**x1)(); struct atomic<unsigned int> { unsigned int x_2_1_1; } x2; struct HashSet<WebCore::FrameDestructionObserver *, WTF::PtrHash<WebCore::FrameDestructionObserver *>, WTF::HashTraits<WebCore::FrameDestructionObserver *> > { struct HashTable<WebCore::FrameDestructionObserver *, WebCore::FrameDestructionObserver *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::FrameDestructionObserver *>, WTF::HashTraits<WebCore::FrameDestructionObserver *>, WTF::HashTraits<WebCore::FrameDestructionObserver *> > { struct FrameDestructionObserver {} **x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; } x_3_1_1; } x3; struct MainFrame {} *x4; struct Page {} *x5; struct RefPtr<WebCore::Settings> { struct Settings {} *x_6_1_1; } x6; struct FrameTree { struct Frame {} *x_7_1_1; struct Frame {} *x_7_1_2; struct AtomicString { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_3_2_1; } x_7_1_3; struct AtomicString { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_4_2_1; } x_7_1_4; struct RefPtr<WebCore::Frame> { struct Frame {} *x_5_2_1; } x_7_1_5; struct Frame {} *x_7_1_6; struct RefPtr<WebCore::Frame> { struct Frame {} *x_7_2_1; } x_7_1_7; struct Frame {} *x_7_1_8; unsigned int x_7_1_9; } x7; }*)arg2 withLookupOptions:(id)arg3 indicatorOptions:(unsigned short)arg4 transition:(unsigned char)arg5;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_animationControllerForDataDetectedLink;
- (id)_animationControllerForDataDetectedText;
- (id)_animationControllerForText;
- (void)_cancelImmediateAction;
- (void)_clearImmediateActionState;
- (id)_defaultAnimationController;
- (void)_updateImmediateActionItem;
- (id)immediateActionRecognizer;
- (void)immediateActionRecognizerDidCancelAnimation:(id)arg1;
- (void)immediateActionRecognizerDidCompleteAnimation:(id)arg1;
- (void)immediateActionRecognizerDidUpdateAnimation:(id)arg1;
- (void)immediateActionRecognizerWillBeginAnimation:(id)arg1;
- (void)immediateActionRecognizerWillPrepare:(id)arg1;
- (id)initWithWebView:(id)arg1 recognizer:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })menuItem:(id)arg1 itemFrameForPoint:(struct CGPoint { double x1; double x2; })arg2;
- (struct CGSize { double x1; double x2; })menuItem:(id)arg1 maxSizeForPoint:(struct CGPoint { double x1; double x2; })arg2;
- (unsigned long long)menuItem:(id)arg1 preferredEdgeForPoint:(struct CGPoint { double x1; double x2; })arg2;
- (id)menuItem:(id)arg1 previewItemAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (id)menuItem:(id)arg1 viewAtScreenPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)menuItemDidClose:(id)arg1;
- (void)performHitTestAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)webView:(id)arg1 didHandleScrollWheel:(id)arg2;
- (void)webViewClosed;

@end