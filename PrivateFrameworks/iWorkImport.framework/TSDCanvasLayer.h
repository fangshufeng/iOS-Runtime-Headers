/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDCanvasView, TSDInteractiveCanvasController;

@interface TSDCanvasLayer : TSDNoDefaultImplicitActionLayer {
    struct CGSize { 
        float width; 
        float height; 
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    BOOL mAllowsPinchZoom;
    } mContentInset;
    TSDInteractiveCanvasController *mController;
    BOOL mDisableLayout;
    BOOL mHorizontallyCenteredInScrollView;
    BOOL mIsInfinite;
    float mMaximumPinchViewScale;
    float mMinimumPinchViewScale;
    BOOL mShowsScaleFeedback;
    } mUnscaledSize;
    BOOL mVerticallyCenteredInScrollView;
    float mViewScale;
    unsigned int mViewScaleAnimationCount;
}

@property BOOL allowsPinchZoom;
@property(readonly) TSDCanvasView * canvasView;
@property BOOL centeredInScrollView;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentInset;
@property TSDInteractiveCanvasController * controller;
@property(getter=isLayoutDisabled) BOOL disableLayout;
@property BOOL horizontallyCenteredInScrollView;
@property(getter=isInfinite) BOOL infinite;
@property float maximumPinchViewScale;
@property float minimumPinchViewScale;
@property BOOL showsScaleFeedback;
@property(readonly) struct CGPoint { float x1; float x2; } unscaledContentCenter;
@property struct CGSize { float x1; float x2; } unscaledSize;
@property BOOL verticallyCenteredInScrollView;
@property float viewScale;

- (BOOL)allowsPinchZoom;
- (void)animateToViewScale:(float)arg1 contentCenter:(struct CGPoint { float x1; float x2; })arg2 contentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg3 duration:(double)arg4 animation:(id)arg5 completionBlock:(id)arg6;
- (void)animateToViewScale:(float)arg1 contentCenter:(struct CGPoint { float x1; float x2; })arg2 contentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg3 duration:(double)arg4 completionBlock:(id)arg5;
- (id)canvasView;
- (BOOL)centeredInScrollView;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInset;
- (struct CGPoint { float x1; float x2; })contentOffsetForUnscaledContentCenter:(struct CGPoint { float x1; float x2; })arg1;
- (id)controller;
- (void)fixFrameAndScrollView;
- (BOOL)horizontallyCenteredInScrollView;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isInfinite;
- (BOOL)isLayoutDisabled;
- (void)layoutIfNeededIgnoringDisabledLayout;
- (void)layoutSublayers;
- (float)maximumPinchViewScale;
- (float)minimumPinchViewScale;
- (void)p_commonInit;
- (struct CGPoint { float x1; float x2; })p_contentOffsetForUnscaledContentCenter:(struct CGPoint { float x1; float x2; })arg1 viewScale:(float)arg2 contentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })p_fixedBoundsForScrollViewSize:(struct CGSize { float x1; float x2; })arg1 viewScale:(float)arg2 contentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg3;
- (void)p_reenableDrawingAfterResumingFromBackground;
- (void)p_scrollViewScrollerStyleDidChange:(id)arg1;
- (void)p_setEnclosingScrollViewZoomParameters;
- (void)p_setViewScale:(float)arg1 preservingScrollOffset:(BOOL)arg2;
- (void)p_setViewScale:(float)arg1;
- (void)setAllowsPinchZoom:(BOOL)arg1;
- (void)setCenteredInScrollView:(BOOL)arg1;
- (void)setContentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setController:(id)arg1;
- (void)setDisableLayout:(BOOL)arg1;
- (void)setHorizontallyCenteredInScrollView:(BOOL)arg1;
- (void)setInfinite:(BOOL)arg1;
- (void)setMaximumPinchViewScale:(float)arg1;
- (void)setMinimumPinchViewScale:(float)arg1;
- (void)setNeedsDisplayForDirtyTiles:(id)arg1;
- (void)setNeedsLayout;
- (void)setScrollViewFrameMaintainingApparentScrollPosition:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 animated:(BOOL)arg2;
- (void)setScrollViewFrameMaintainingApparentScrollPosition:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setShowsScaleFeedback:(BOOL)arg1;
- (void)setUnscaledSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setVerticallyCenteredInScrollView:(BOOL)arg1;
- (void)setViewScale:(float)arg1 andScrollViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 maintainPosition:(BOOL)arg3 animated:(BOOL)arg4;
- (void)setViewScale:(float)arg1;
- (BOOL)showsScaleFeedback;
- (void)teardown;
- (struct CGPoint { float x1; float x2; })unscaledContentCenter;
- (struct CGSize { float x1; float x2; })unscaledSize;
- (BOOL)verticallyCenteredInScrollView;
- (float)viewScale;

@end