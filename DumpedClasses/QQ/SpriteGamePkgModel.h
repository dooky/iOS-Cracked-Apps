//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SpritePackageModel.h"

@class NSMutableArray;

@interface SpriteGamePkgModel : SpritePackageModel
{
    NSMutableArray *_gameSet;
    NSMutableArray *_gameButtonArray;
}

@property(retain, nonatomic) NSMutableArray *gameButtonArray; // @synthesize gameButtonArray=_gameButtonArray;
@property(retain, nonatomic) NSMutableArray *gameSet; // @synthesize gameSet=_gameSet;
- (void)dealloc;
- (id)actionsInPageIndex:(int)arg1;
- (id)getGameModelWithGameId:(id)arg1;
- (id)filterNotShowGameModel;
- (void)arrrangeData;
- (id)initWithGamePkgModel:(id)arg1;
- (id)initWithGameJsonDic:(id)arg1;

@end

