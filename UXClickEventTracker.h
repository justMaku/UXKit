//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UXKit/UXEventTracker.h>

@interface UXClickEventTracker : UXEventTracker
{
    unsigned long long _numberOfClicksRequired;
}

@property(nonatomic) unsigned long long numberOfClicksRequired; // @synthesize numberOfClicksRequired=_numberOfClicksRequired;
- (id)description;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)init;

@end

