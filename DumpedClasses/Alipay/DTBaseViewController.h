//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "DTNavigationBarAppearanceProtocol.h"
#import "UIGestureRecognizerDelegate.h"

@class DTContext, DTMicroApplication, NSMutableArray, NSString, UIActivityIndicatorView, UIImage, UIImageView, UINavigationController, UIView;

@interface DTBaseViewController : UIViewController <UIGestureRecognizerDelegate, DTNavigationBarAppearanceProtocol>
{
    struct CGPoint startTouch;
    UIView *blackMask;
    NSString *_pageId;
    _Bool _isMiddlePage;
    _Bool _multiLayer;
    _Bool _is3DTouchLaunch;
    _Bool _canDragBack;
    _Bool _isMoving;
    _Bool _canDismissViewController;
    _Bool _needShowTitleLoading;
    UIImage *_preControllerImage;
    unsigned long long _viewAppearState;
    NSMutableArray *_asyncCallers;
    DTContext *_context;
    id <DTAutoTestDelegate> _autoTestDelegate;
    UIImageView *_lastScreenShotView;
    NSString *_backButtonTitle;
    UIView *_backgroundView;
    UIActivityIndicatorView *_titleLoading;
    UIView *_navItemView;
    UINavigationController *_privateDTNavigationController;
    UINavigationController *_weakNavigationController;
}

+ (void)dismissAlertViews;
@property(nonatomic) __weak UINavigationController *weakNavigationController; // @synthesize weakNavigationController=_weakNavigationController;
@property(nonatomic) __weak UINavigationController *privateDTNavigationController; // @synthesize privateDTNavigationController=_privateDTNavigationController;
@property(retain, nonatomic) UIView *navItemView; // @synthesize navItemView=_navItemView;
@property(retain, nonatomic) UIActivityIndicatorView *titleLoading; // @synthesize titleLoading=_titleLoading;
@property(nonatomic) _Bool needShowTitleLoading; // @synthesize needShowTitleLoading=_needShowTitleLoading;
@property(nonatomic) _Bool canDismissViewController; // @synthesize canDismissViewController=_canDismissViewController;
@property(nonatomic) _Bool isMoving; // @synthesize isMoving=_isMoving;
@property(nonatomic) _Bool canDragBack; // @synthesize canDragBack=_canDragBack;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) NSString *backButtonTitle; // @synthesize backButtonTitle=_backButtonTitle;
@property(retain, nonatomic) UIImageView *lastScreenShotView; // @synthesize lastScreenShotView=_lastScreenShotView;
@property(retain, nonatomic) id <DTAutoTestDelegate> autoTestDelegate; // @synthesize autoTestDelegate=_autoTestDelegate;
@property(nonatomic) __weak DTContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSMutableArray *asyncCallers; // @synthesize asyncCallers=_asyncCallers;
@property(nonatomic) _Bool is3DTouchLaunch; // @synthesize is3DTouchLaunch=_is3DTouchLaunch;
@property(nonatomic) unsigned long long viewAppearState; // @synthesize viewAppearState=_viewAppearState;
@property(retain, nonatomic) UIImage *preControllerImage; // @synthesize preControllerImage=_preControllerImage;
@property(nonatomic) _Bool multiLayer; // @synthesize multiLayer=_multiLayer;
@property(nonatomic) _Bool isMiddlePage; // @synthesize isMiddlePage=_isMiddlePage;
- (void).cxx_destruct;
- (void)callbackViewWillDestroy:(id)arg1;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentModalViewController:(id)arg1 animated:(_Bool)arg2;
- (id)pageID;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)createBackButton;
- (void)languageSettingDidChange:(id)arg1;
- (void)_languageSettingDidChange:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)autoDismissAPActionSheets;
- (id)customNavigationBarLoadingViewColors;
- (id)customNavigationBarBackButtonImage;
- (id)customNavigationBarBackButtonTitleColor;
- (id)customNavigationBarTitleColor;
- (long long)customStatusBarStytle;
- (id)opaqueNavigationBarColor;
- (id)customNavigationBar;
- (_Bool)autohideNavigationBar;
- (void)stopAllAsyncBlock;
- (id)callAsyncBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)callNoMainThreadAsyncBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewWillDestroy;
- (void)back;
@property(readonly, nonatomic) DTMicroApplication *application;
- (void)resetNavigationBarStyle:(_Bool)arg1;
- (void)setNavigationBarStyle;
- (void)dismissAPActionSheets;
- (void)checkPopGesture;
- (_Bool)checkNavigationBarBackStyle;
- (id)backButtonDefaultTitle;
- (void)displayBackButtonTitle;
- (void)stopTitleLoading;
- (void)startTitleLoading;
- (void)createTitleLoading;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)createCustomNavigationItemView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
