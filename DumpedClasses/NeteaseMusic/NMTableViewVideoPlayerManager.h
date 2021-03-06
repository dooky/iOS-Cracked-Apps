//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MutableOrderedDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface NMTableViewVideoPlayerManager : NSObject
{
    NSString *_uuid;
    MutableOrderedDictionary *_receiverObjects;
    NSMutableDictionary *_players;
    NSMutableDictionary *_acceptedReceiverObjects;
    NSMutableArray *_tempPlayers;
    _Bool _suspended;
}

@property(nonatomic) _Bool suspended; // @synthesize suspended=_suspended;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)playerDidPreparedToPlay:(id)arg1;
- (void)createPlayer:(id)arg1;
- (void)createPlayerIfNeeded;
- (_Bool)needCreatePlayer;
- (void)doShutdownPlayer:(id)arg1;
- (void)shutdownPlayer:(id)arg1 continueUsePlayer:(_Bool)arg2;
- (void)unregisterVideoReveiver:(id)arg1 continueUsePlayer:(_Bool)arg2;
- (void)reregisterVideoReveiver:(id)arg1 topMost:(_Bool)arg2 continueUsePlayer:(_Bool)arg3;
- (void)registerVideoReveiver:(id)arg1 topMost:(_Bool)arg2;
- (void)registerVideoReveiver:(id)arg1;
- (_Bool)isReceiverRegistered:(id)arg1;
- (void)reachAbilityChanged:(id)arg1;
- (void)dealloc;
- (id)init;

@end

