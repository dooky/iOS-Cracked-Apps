//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTViewController.h"

#import "LSFinishViewDataSource.h"
#import "LSFinishViewDelegate.h"

@class APAlertView, LSBizFinishView, LSBizLiveShowInfo, NSString, UIView;

@interface LSBizResultViewController : DTViewController <LSFinishViewDelegate, LSFinishViewDataSource>
{
    _Bool _liveDeleted;
    _Bool _landscape;
    id <LSResultViewControllerDelegate> _retDelegate;
    LSBizFinishView *_finishView;
    LSBizLiveShowInfo *_liveShowInfo;
    LSBizLiveShowInfo *_replayLiveShowInfo;
    long long _role;
    long long _closeRole;
    UIView *_backgroundView;
    APAlertView *_alertView;
}

@property(nonatomic) _Bool landscape; // @synthesize landscape=_landscape;
@property(nonatomic) _Bool liveDeleted; // @synthesize liveDeleted=_liveDeleted;
@property(nonatomic) __weak APAlertView *alertView; // @synthesize alertView=_alertView;
@property(nonatomic) __weak UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) long long closeRole; // @synthesize closeRole=_closeRole;
@property(nonatomic) long long role; // @synthesize role=_role;
@property(retain, nonatomic) LSBizLiveShowInfo *replayLiveShowInfo; // @synthesize replayLiveShowInfo=_replayLiveShowInfo;
@property(retain, nonatomic) LSBizLiveShowInfo *liveShowInfo; // @synthesize liveShowInfo=_liveShowInfo;
@property(retain, nonatomic) LSBizFinishView *finishView; // @synthesize finishView=_finishView;
@property(nonatomic) __weak id <LSResultViewControllerDelegate> retDelegate; // @synthesize retDelegate=_retDelegate;
- (void).cxx_destruct;
- (_Bool)isHiddenReplayBtn;
- (_Bool)isHiddenDelBtnWidget;
- (_Bool)isHiddenRankListBtn;
- (_Bool)isHiddenCreateLiveBtn;
- (_Bool)autohideNavigationBar;
- (void)openRankList;
- (_Bool)needLeaveLiveShow;
- (void)finishView:(id)arg1 doOperation:(long long)arg2;
- (void)cleanResultView;
- (void)refreshForLiveShowDelete;
- (void)refreshLiveShowInfo:(id)arg1 userRole:(long long)arg2 closeRole:(long long)arg3;
- (void)refreshLiveShowInfo:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithLiveShowInfo:(id)arg1 andUserRole:(long long)arg2 closeRole:(long long)arg3 landscape:(_Bool)arg4 backgroundView:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
