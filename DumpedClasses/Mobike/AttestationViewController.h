//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "Mobike_ViewController.h"

#import "MBKApplePayDelegate.h"

@class MBKCardConfigModel, NSMutableArray, NSString, UIButton, UIImageView, UILabel, UIScrollView, UIView;

@interface AttestationViewController : Mobike_ViewController <MBKApplePayDelegate>
{
    UIButton *aliPay;
    UIButton *wechatPay;
    UIButton *creditButton;
    id orderInfo;
    UILabel *_staticLbl;
    UIImageView *_iconImgView;
    long long applePayType;
    _Bool _isFromModallyPresent;
    _Bool _shouldTransitionToAuth;
    id <AttestationDelegate> _delegate;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UILabel *_contentLabel;
    unsigned long long _payPlatform;
    UIButton *_rechargeBtn;
    UILabel *_depositLbl;
    UIView *_bottomView;
    UIScrollView *_bottomScrollView;
    NSMutableArray *_payMethodListArray;
    UILabel *_depositLine;
    MBKCardConfigModel *_cardConfigModel;
}

@property(retain, nonatomic) MBKCardConfigModel *cardConfigModel; // @synthesize cardConfigModel=_cardConfigModel;
@property(retain, nonatomic) UILabel *depositLine; // @synthesize depositLine=_depositLine;
@property(retain, nonatomic) NSMutableArray *payMethodListArray; // @synthesize payMethodListArray=_payMethodListArray;
@property(retain, nonatomic) UIScrollView *bottomScrollView; // @synthesize bottomScrollView=_bottomScrollView;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(nonatomic) _Bool shouldTransitionToAuth; // @synthesize shouldTransitionToAuth=_shouldTransitionToAuth;
@property(nonatomic) _Bool isFromModallyPresent; // @synthesize isFromModallyPresent=_isFromModallyPresent;
@property(retain, nonatomic) UILabel *depositLbl; // @synthesize depositLbl=_depositLbl;
@property(retain, nonatomic) UIButton *rechargeBtn; // @synthesize rechargeBtn=_rechargeBtn;
@property(nonatomic) unsigned long long payPlatform; // @synthesize payPlatform=_payPlatform;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) id <AttestationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)requestPaylistMethod;
- (void)startUseApp;
- (void)applePayResultCallBack:(id)arg1 withError:(id)arg2;
- (void)requestPayParamsFailed:(id)arg1;
- (void)requestPayParamsSucc:(id)arg1;
- (void)getAcountInfo;
- (void)rechargeBtnAction:(id)arg1;
- (void)appToForeGround:(id)arg1;
- (void)dismissVC:(id)arg1;
- (void)creditClicked:(id)arg1;
- (void)wechatpayCliced:(id)arg1;
- (void)alipayCliced:(id)arg1;
- (void)onTapPayMethond:(long long)arg1;
- (id)attributedStringEx:(id)arg1 length:(long long)arg2;
- (void)transitionToAuthenticationAnimated:(_Bool)arg1;
- (void)paymentStatusCallbackFailed;
- (void)paymentStatusCallback;
- (void)setupController;
- (void)layoutPayMethods;
- (void)layoutPayWayMethod:(id)arg1;
- (void)setupView;
- (void)handleNotification:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initFromModallyPresent:(_Bool)arg1 andShouldTransitionToAuth:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
