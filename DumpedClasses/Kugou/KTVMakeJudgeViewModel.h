//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KFViewModelObject.h"

@class KTVJudgeNetHelper, KTVMakeJudgeInfo, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_group>;

@interface KTVMakeJudgeViewModel : KFViewModelObject
{
    _Bool _isOverTime;
    int _canvassPkId;
    int _canvassPlayerId;
    long long _songId;
    long long _judgeId;
    long long _fromType;
    KTVMakeJudgeInfo *_canvassJudgeInfo;
    CDUnknownBlockType _showRedPointBlock;
    CDUnknownBlockType _reloadRelationsBlock;
    CDUnknownBlockType _loadUrlAndKrcBlock;
    KTVJudgeNetHelper *_netHelper;
    NSMutableArray *_infoList;
    NSObject<OS_dispatch_group> *_group;
    NSMutableDictionary *_dotTimeDict;
    long long _currentIndex;
}

@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) NSMutableDictionary *dotTimeDict; // @synthesize dotTimeDict=_dotTimeDict;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *group; // @synthesize group=_group;
@property(retain, nonatomic) NSMutableArray *infoList; // @synthesize infoList=_infoList;
@property(retain, nonatomic) KTVJudgeNetHelper *netHelper; // @synthesize netHelper=_netHelper;
@property(copy, nonatomic) CDUnknownBlockType loadUrlAndKrcBlock; // @synthesize loadUrlAndKrcBlock=_loadUrlAndKrcBlock;
@property(copy, nonatomic) CDUnknownBlockType reloadRelationsBlock; // @synthesize reloadRelationsBlock=_reloadRelationsBlock;
@property(copy, nonatomic) CDUnknownBlockType showRedPointBlock; // @synthesize showRedPointBlock=_showRedPointBlock;
@property(retain, nonatomic) KTVMakeJudgeInfo *canvassJudgeInfo; // @synthesize canvassJudgeInfo=_canvassJudgeInfo;
@property(nonatomic) _Bool isOverTime; // @synthesize isOverTime=_isOverTime;
@property(nonatomic) long long fromType; // @synthesize fromType=_fromType;
@property(nonatomic) int canvassPlayerId; // @synthesize canvassPlayerId=_canvassPlayerId;
@property(nonatomic) int canvassPkId; // @synthesize canvassPkId=_canvassPkId;
@property(nonatomic) long long judgeId; // @synthesize judgeId=_judgeId;
@property(nonatomic) long long songId; // @synthesize songId=_songId;
- (void).cxx_destruct;
- (long long)getRandomNumber:(long long)arg1 to:(long long)arg2;
- (void)updateFirstMaskWithLeftMaskString:(id)arg1 rightMaskString:(id)arg2;
- (void)sendFailOpusWithPkId:(int)arg1 opusId:(int)arg2;
- (void)praiseWithJudgeInfo:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)removeAllJudgeInfo;
- (void)removeJudgeInfoAtIndex:(long long)arg1;
- (id)itemOfJudgeListInfoAtIndex:(long long)arg1;
- (long long)numberOfJudgeListInfo;
- (_Bool)haveMoreInfo;
- (void)updatePlayerRelations;
- (_Bool)isToday:(double)arg1;
- (void)actionClickRedDot;
- (void)updateJudgePoint;
- (_Bool)shouldUpdateJudgePoint;
- (void)loadOpusUrlAndKrcWithCurrentIndex:(long long)arg1;
- (void)loadMoreWithCurrentIndex:(long long)arg1;
- (void)getJudgeMasksFormNetWork;
- (void)updateJudgeMasks;
- (void)update;
- (id)init;

@end
