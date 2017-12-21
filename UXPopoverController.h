//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UXKit/UXViewController.h>

#import "NSPopoverDelegate.h"

@class NSArray, NSString, UXPopover;

@interface UXPopoverController : UXViewController <NSPopoverDelegate>
{
    UXPopover *_popover;
    id <UXPopoverControllerDelegate> _delegate;
    NSArray *_passthroughViews;
}

@property(copy, nonatomic) NSArray *passthroughViews; // @synthesize passthroughViews=_passthroughViews;
@property(nonatomic) __weak id <UXPopoverControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dismissPopoverAnimated:(BOOL)arg1;
- (void)dismissPopover;
- (void)presentPopoverFromBarButtonItem:(id)arg1 permittedArrowDirections:(unsigned long long)arg2 animated:(BOOL)arg3;
- (void)presentPopoverFromRect:(struct CGRect)arg1 inView:(id)arg2 preferredEdge:(unsigned long long)arg3;
@property(retain, nonatomic) UXViewController *contentViewController;
@property(nonatomic) struct CGSize popoverContentSize;
- (void)setPopoverContentSize:(struct CGSize)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic, getter=isPopoverVisible) BOOL popoverVisible;
@property(nonatomic) long long popoverBehavior;
- (void)popoverWillShow:(id)arg1;
- (void)popoverDidClose:(id)arg1;
- (id)popover;
- (void)_updateContentSize;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithContentViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

