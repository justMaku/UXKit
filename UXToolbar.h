//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UXKit/UXBar.h>

@interface UXToolbar : UXBar
{
    id <UXToolbarDelegate> _delegate;
}

@property(nonatomic) __weak id <UXToolbarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long long)barPosition;
- (void)_beginInteractiveTransitionForItems:(id)arg1;
- (void)_setItems:(id)arg1 animated:(BOOL)arg2 duration:(double)arg3;
- (void)setItems:(id)arg1 animated:(BOOL)arg2;
- (void)mouseDown:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

