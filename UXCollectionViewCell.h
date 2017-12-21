//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UXKit/UXCollectionReusableView.h>

@class NSView;

@interface UXCollectionViewCell : UXCollectionReusableView
{
    NSView *_contentView;
    BOOL _selected;
}

@property(readonly, nonatomic) NSView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
- (void)_setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)prepareForReuse;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (BOOL)wantsUpdateLayer;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)_accessibilityIndexPath;
- (id)_accessibilityDefaultRole;
- (id)_dynamicAccessibilityParent;
- (void)setAccessibilitySelected:(BOOL)arg1;
- (BOOL)isAccessibilitySelectorAllowed:(SEL)arg1;
- (BOOL)isAccessibilitySelected;
- (id)_axSimulateClick:(unsigned long long)arg1 withNumberOfClicks:(unsigned long long)arg2;
- (BOOL)accessibilityPerformPress;

@end

