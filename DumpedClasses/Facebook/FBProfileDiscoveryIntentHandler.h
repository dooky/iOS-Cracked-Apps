//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBIntentHandler-Protocol.h"

@class FBFallbackIntentHandler, FBUserSession, NSString;
@protocol FBNavigationCoordinator;

@interface FBProfileDiscoveryIntentHandler : NSObject <FBIntentHandler>
{
    id <FBNavigationCoordinator> _navigationCoordinator;
    FBFallbackIntentHandler *_fallbackHandler;
    FBUserSession *_session;
}

- (void).cxx_destruct;
- (void)handleIntent:(id)arg1;
- (id)initWithNavigationCoordinator:(id)arg1 session:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

