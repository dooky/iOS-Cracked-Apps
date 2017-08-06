//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "InterviewChatGiftContenViewDelegate.h"
#import "InterviewHorizontalNumViewDelegate.h"
#import "InterviewSegmentViewDelegate.h"

@class InterviewChatGiftContenView, InterviewHorizontalDigitKeyboard, InterviewHorizontalNumView, InterviewSegmentView, NSArray, NSMutableArray, NSString, UIButton, UIImageView, UILabel;

@interface InterviewHorizontalGiftView : UIView <InterviewHorizontalNumViewDelegate, InterviewSegmentViewDelegate, InterviewChatGiftContenViewDelegate>
{
    _Bool _isFullScreen;
    _Bool _isAllin;
    _Bool _isPotrait;
    int _giftId;
    int _giftPrice;
    int _giftNum;
    id <InterviewHorizontalGiftViewDelegate> _delegate;
    NSArray *_models;
    NSArray *_guestModels;
    long long _coinCount;
    UIButton *_hideToolBtn;
    UILabel *_title;
    UILabel *_balanceTitle;
    UIImageView *_coinImgV;
    UILabel *_money;
    UIButton *_recharge;
    UILabel *_numT;
    UIButton *_sendBtn;
    InterviewSegmentView *_segmentView;
    InterviewHorizontalNumView *_hNumChooseView;
    InterviewHorizontalDigitKeyboard *_hKeyBoard;
    InterviewChatGiftContenView *_chatGiftContentView;
    UILabel *_targetName;
    double _scale;
    double _hScale;
    long long _kugouId;
    NSMutableArray *_selectedNum;
    long long _currentToolType;
}

@property(nonatomic) _Bool isPotrait; // @synthesize isPotrait=_isPotrait;
@property(nonatomic) _Bool isAllin; // @synthesize isAllin=_isAllin;
@property(nonatomic) long long currentToolType; // @synthesize currentToolType=_currentToolType;
@property(retain, nonatomic) NSMutableArray *selectedNum; // @synthesize selectedNum=_selectedNum;
@property(nonatomic) int giftNum; // @synthesize giftNum=_giftNum;
@property(nonatomic) int giftPrice; // @synthesize giftPrice=_giftPrice;
@property(nonatomic) int giftId; // @synthesize giftId=_giftId;
@property(nonatomic) long long kugouId; // @synthesize kugouId=_kugouId;
@property(nonatomic) double hScale; // @synthesize hScale=_hScale;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(retain, nonatomic) UILabel *targetName; // @synthesize targetName=_targetName;
@property(retain, nonatomic) InterviewChatGiftContenView *chatGiftContentView; // @synthesize chatGiftContentView=_chatGiftContentView;
@property(retain, nonatomic) InterviewHorizontalDigitKeyboard *hKeyBoard; // @synthesize hKeyBoard=_hKeyBoard;
@property(retain, nonatomic) InterviewHorizontalNumView *hNumChooseView; // @synthesize hNumChooseView=_hNumChooseView;
@property(retain, nonatomic) InterviewSegmentView *segmentView; // @synthesize segmentView=_segmentView;
@property(retain, nonatomic) UIButton *sendBtn; // @synthesize sendBtn=_sendBtn;
@property(retain, nonatomic) UILabel *numT; // @synthesize numT=_numT;
@property(retain, nonatomic) UIButton *recharge; // @synthesize recharge=_recharge;
@property(retain, nonatomic) UILabel *money; // @synthesize money=_money;
@property(retain, nonatomic) UIImageView *coinImgV; // @synthesize coinImgV=_coinImgV;
@property(retain, nonatomic) UILabel *balanceTitle; // @synthesize balanceTitle=_balanceTitle;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UIButton *hideToolBtn; // @synthesize hideToolBtn=_hideToolBtn;
@property(nonatomic) _Bool isFullScreen; // @synthesize isFullScreen=_isFullScreen;
@property(nonatomic) long long coinCount; // @synthesize coinCount=_coinCount;
@property(retain, nonatomic) NSArray *guestModels; // @synthesize guestModels=_guestModels;
@property(retain, nonatomic) NSArray *models; // @synthesize models=_models;
@property(nonatomic) __weak id <InterviewHorizontalGiftViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)hide;
- (void)show;
- (void)openChargeView;
- (void)gotoCharge;
- (void)resetSegmentNum;
- (void)sendClick:(id)arg1;
- (void)hideToolBtnClicked:(id)arg1;
- (void)selectedNum:(id)arg1 orMore:(_Bool)arg2;
- (void)InterviewHorizontalNum:(long long)arg1 isAllin:(_Bool)arg2 isCustom:(_Bool)arg3;
- (void)tapedKugouId:(long long)arg1 giftId:(int)arg2 giftPrice:(int)arg3 userName:(id)arg4;
- (struct CGRect)getTextSize:(id)arg1 withWidth:(double)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (void)rotateScreen;
- (void)registNotification;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
