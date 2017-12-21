//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSVisualEffectView, UXViewController;

@interface UXView : NSView
{
    BOOL _blurEnabled;
    BOOL _exclusiveTouch;
    BOOL _userInteractionEnabled;
    BOOL _accessibilityChildrenHidden;
    UXViewController *_viewControllerProxy;
    NSVisualEffectView *__visualEffectsView;
}

+ (void)performWithoutAnimation:(CDUnknownBlockType)arg1;
+ (void)animateWithDuration:(double)arg1 delay:(double)arg2 usingSpringWithDamping:(double)arg3 initialSpringVelocity:(double)arg4 options:(unsigned long long)arg5 animations:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;
+ (void)animateWithDuration:(double)arg1 animations:(CDUnknownBlockType)arg2;
+ (void)animateWithDuration:(double)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)animateWithDuration:(double)arg1 delay:(double)arg2 options:(unsigned long long)arg3 animations:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
+ (id)defaultSpringAnimationForKey:(id)arg1 mass:(double)arg2 stiffness:(double)arg3 damping:(double)arg4 velocity:(double)arg5;
+ (long long)_contentModeForLayerContentsGravity:(id)arg1;
+ (Class)layerClass;
@property(nonatomic) BOOL accessibilityChildrenHidden; // @synthesize accessibilityChildrenHidden=_accessibilityChildrenHidden;
@property(readonly) NSVisualEffectView *_visualEffectsView; // @synthesize _visualEffectsView=__visualEffectsView;
@property(nonatomic) __weak UXViewController *viewControllerProxy; // @synthesize viewControllerProxy=_viewControllerProxy;
@property(nonatomic) BOOL userInteractionEnabled; // @synthesize userInteractionEnabled=_userInteractionEnabled;
@property(nonatomic, getter=isExclusiveTouch) BOOL exclusiveTouch; // @synthesize exclusiveTouch=_exclusiveTouch;
- (void).cxx_destruct;
- (id)accessibilityChildren;
- (id)menuForEvent:(id)arg1;
- (id)snapshotViewFromRect:(struct CGRect)arg1;
- (id)snapshotView;
- (id)snapshotForRect:(struct CGRect)arg1;
- (void)sendSubviewToBack:(id)arg1;
- (void)bringSubviewToFront:(id)arg1;
@property(readonly, nonatomic) struct CGPoint center;
- (void)_applyTintColorIfNotUXView:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1;
@property(nonatomic) long long contentMode;
- (void)addSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3;
- (void)insertSubview:(id)arg1 belowSubview:(id)arg2;
- (void)insertSubview:(id)arg1 aboveSubview:(id)arg2;
- (void)addSubview:(id)arg1;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)updateConstraintsForSubtreeIfNeeded;
- (void)viewDidEndLiveResize;
- (void)viewWillStartLiveResize;
- (void)layout;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (id)makeBackingLayer;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_disableBlur;
- (void)_enableBlur;
- (BOOL)blurEnabled;
- (void)setBlurEnabled:(BOOL)arg1;
- (id)_infoWithParents;
- (id)_infoForWindow;
- (id)_infoWithChildren;
- (id)recursiveDescription;
- (id)_superDescription;
- (id)description;
- (id)_autoresizingDescription;

@end

