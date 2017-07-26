//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BEEFunctionTableController.h"

#import "TTTAttributedLabelDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class ALPFundServiceAPI, ALPFundTransferInBottomView, ALPFundTransferInLimitView, APInputBoxCell, APWealthBankCell, BEECustomAlertView, DTRpcAsyncCaller, NSDictionary, NSString, SECUPRODPrepareSignLargeAmountResult, UILabel, WEALTHMobileChannelManager, WEALTHRecommendChannelInfo;

@interface ALPFundTransferInViewController : BEEFunctionTableController <UITableViewDataSource, UITextFieldDelegate, TTTAttributedLabelDelegate, UITableViewDelegate>
{
    _Bool _queryAdvInfo;
    _Bool _shouldBackToFund;
    _Bool _showLimitExplain;
    _Bool _hasChannel;
    _Bool _hasLoadedChannel;
    _Bool _isLargeLimitEnable;
    _Bool _isFundAccountOpened;
    _Bool _isLargeLimitSignable;
    _Bool _RPCDataLoaded;
    int _channelType;
    NSString *_transferInAmount;
    WEALTHRecommendChannelInfo *_channelInfo;
    UILabel *_insuranceLabel;
    ALPFundTransferInBottomView *_bottomView;
    APInputBoxCell *_inputBoxCell;
    NSString *_channelLimit;
    NSString *_bizOrderNo;
    NSString *_availableCoupon;
    DTRpcAsyncCaller *_applyOrderRPCCaller;
    ALPFundServiceAPI *_fundServiceAPI;
    DTRpcAsyncCaller *_channelRPCCaller;
    DTRpcAsyncCaller *_bankCardLogoRPCCaller;
    NSDictionary *_channelInfoFromKuaijie;
    WEALTHMobileChannelManager *_channelManager;
    ALPFundTransferInLimitView *_limitView;
    BEECustomAlertView *_largePaymentPopupView;
    SECUPRODPrepareSignLargeAmountResult *_prepareSignLargeAmountResult;
    APWealthBankCell *_bankCardCell;
}

@property(nonatomic) _Bool RPCDataLoaded; // @synthesize RPCDataLoaded=_RPCDataLoaded;
@property(retain, nonatomic) APWealthBankCell *bankCardCell; // @synthesize bankCardCell=_bankCardCell;
@property(nonatomic) int channelType; // @synthesize channelType=_channelType;
@property(retain, nonatomic) SECUPRODPrepareSignLargeAmountResult *prepareSignLargeAmountResult; // @synthesize prepareSignLargeAmountResult=_prepareSignLargeAmountResult;
@property(retain, nonatomic) BEECustomAlertView *largePaymentPopupView; // @synthesize largePaymentPopupView=_largePaymentPopupView;
@property(nonatomic) _Bool isLargeLimitSignable; // @synthesize isLargeLimitSignable=_isLargeLimitSignable;
@property(nonatomic) _Bool isFundAccountOpened; // @synthesize isFundAccountOpened=_isFundAccountOpened;
@property(nonatomic) _Bool isLargeLimitEnable; // @synthesize isLargeLimitEnable=_isLargeLimitEnable;
@property(nonatomic) _Bool hasLoadedChannel; // @synthesize hasLoadedChannel=_hasLoadedChannel;
@property(nonatomic) _Bool hasChannel; // @synthesize hasChannel=_hasChannel;
@property(retain, nonatomic) ALPFundTransferInLimitView *limitView; // @synthesize limitView=_limitView;
@property(retain, nonatomic) WEALTHMobileChannelManager *channelManager; // @synthesize channelManager=_channelManager;
@property(retain, nonatomic) NSDictionary *channelInfoFromKuaijie; // @synthesize channelInfoFromKuaijie=_channelInfoFromKuaijie;
@property(retain, nonatomic) DTRpcAsyncCaller *bankCardLogoRPCCaller; // @synthesize bankCardLogoRPCCaller=_bankCardLogoRPCCaller;
@property(retain, nonatomic) DTRpcAsyncCaller *channelRPCCaller; // @synthesize channelRPCCaller=_channelRPCCaller;
@property(retain, nonatomic) ALPFundServiceAPI *fundServiceAPI; // @synthesize fundServiceAPI=_fundServiceAPI;
@property(retain, nonatomic) DTRpcAsyncCaller *applyOrderRPCCaller; // @synthesize applyOrderRPCCaller=_applyOrderRPCCaller;
@property(nonatomic) _Bool showLimitExplain; // @synthesize showLimitExplain=_showLimitExplain;
@property(retain, nonatomic) NSString *availableCoupon; // @synthesize availableCoupon=_availableCoupon;
@property(retain, nonatomic) NSString *bizOrderNo; // @synthesize bizOrderNo=_bizOrderNo;
@property(retain, nonatomic) NSString *channelLimit; // @synthesize channelLimit=_channelLimit;
@property(retain, nonatomic) APInputBoxCell *inputBoxCell; // @synthesize inputBoxCell=_inputBoxCell;
@property(retain, nonatomic) ALPFundTransferInBottomView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UILabel *insuranceLabel; // @synthesize insuranceLabel=_insuranceLabel;
@property(retain, nonatomic) WEALTHRecommendChannelInfo *channelInfo; // @synthesize channelInfo=_channelInfo;
@property(retain, nonatomic) NSString *transferInAmount; // @synthesize transferInAmount=_transferInAmount;
@property(nonatomic) _Bool shouldBackToFund; // @synthesize shouldBackToFund=_shouldBackToFund;
@property(nonatomic) _Bool queryAdvInfo; // @synthesize queryAdvInfo=_queryAdvInfo;
- (void).cxx_destruct;
- (id)bizIdentity;
- (void)gotoLimitIntroPage;
- (_Bool)hasNoLimit;
- (void)hiddenKeyboard;
- (void)showErrorWithCommonResult:(id)arg1;
- (void)fundTransferInDidSuccess:(id)arg1;
- (void)safepayPayFinishWithResult:(struct MQPResult *)arg1 tradeNo:(id)arg2;
- (id)r;
- (void)openFundAccountProcess;
- (void)refreshChannelInfoWithSignId:(id)arg1;
- (void)signLargePaymentProcess;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)startLargePaymentProcess;
- (void)showLargePaymentView;
- (void)applyLimitInfoWithResult:(id)arg1 channelExtMsg:(id)arg2;
- (void)markAsNoChannel;
- (void)applyChannelInfoWithRpcResult:(id)arg1 insurenceText:(id)arg2 profitText:(id)arg3;
- (void)confirmClicked:(id)arg1;
- (void)confirmClicked;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)handleChannelChooseFromSP:(id)arg1;
- (id)balanceLimitText;
- (id)choosedChannel;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (_Bool)isYuEFYEnable;
- (void)updateLimitStatus;
- (void)textFieldDidChanged:(id)arg1;
- (id)emptyText;
- (void)loadError:(id)arg1;
- (void)loadSuccess:(id)arg1;
- (id)buildParam;
- (id)loadData;
- (void)loadOnRefresh;
- (void)dealloc;
- (void)viewWillDestroy;
- (void)back;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
