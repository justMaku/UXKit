//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "NSSecureCoding.h"

@class NSString, UXAuxiliaryNavigationStore;

@protocol UXNavigationDestination <NSObject, NSSecureCoding>
@property(readonly, nonatomic) UXAuxiliaryNavigationStore *auxiliaryNavigationStore;
@property(readonly, nonatomic) NSString *destinationTitle;
@property(readonly, nonatomic) NSString *destinationIdentifier;
@end

