//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "MQZoneLBSPOIViewControllerDelegate.h"
#import "PSTemplatePresenterDelegate.h"
#import "PSTemplatesContainerViewDelegate.h"
#import "RichStateTodoTabViewControllerDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITextViewDelegate.h"
#import "VASLocalPayHelperDelegate.h"

@class NIAttributedLabel, NSString, PSTemplateModel, PSTemplatePresenter, PSTemplatesContainerView, RichNormalEditor, RichStateAbstractModel, RichStateLBSPOIViewController, RichStateModel, RichStateSubActionModel, RichStateSubLocationModel, RichStateTodoTabViewController, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UITapGestureRecognizer, UIView, VASLocalPayHelper;

@interface PSEditViewController : QQViewController <VASLocalPayHelperDelegate, UITextViewDelegate, RichStateTodoTabViewControllerDelegate, MQZoneLBSPOIViewControllerDelegate, UIActionSheetDelegate, PSTemplatesContainerViewDelegate, PSTemplatePresenterDelegate, UIAlertViewDelegate>
{
    CDStruct_b2e0213b _flag;
    UIView *_editorAreaContainer;
    UIImageView *_templatePreviewImageView;
    PSTemplatePresenter *_templatePresenter;
    PSTemplatesContainerView *_templatesContainerView;
    UIView *_templateContainer;
    RichNormalEditor *_normalEditor;
    UIView *_mask;
    RichStateTodoTabViewController *_todoViewController;
    RichStateLBSPOIViewController *_lbsViewController;
    RichStateModel *_richState;
    RichStateSubActionModel *_actionModel;
    RichStateSubLocationModel *_locationModel;
    RichStateAbstractModel *_currentSelectedRichStateModel;
    NIAttributedLabel *_limitedNumLabel;
    _Bool _actionEditable;
    _Bool _hasRedPoint;
    UIView *_interactionCountView;
    NSString *_originContent;
    NSString *_originText;
    UIActivityIndicatorView *_previewLoadingIndicator;
    VASLocalPayHelper *_localPayHelper;
    UIView *_loadingView;
    UIActivityIndicatorView *_indicatorView;
    double _openTS;
    PSTemplateModel *_selectedTemplateModel;
    PSTemplateModel *_defaultTemplate;
    unsigned long long _leftWordsCount;
    NSString *_actUrl;
    UIView *_establishView;
    UILabel *_establishLabel;
    UIButton *_establishButton;
    UIImageView *_establishImageView;
    UIView *_locationView;
    UILabel *_locationLabel;
    UIView *_navigationView;
    UITapGestureRecognizer *_imageItemTapRecognizer;
    _Bool _isPresented;
    int _sourceID;
}

+ (void)reportWithName:(id)arg1 additional:(unsigned long long)arg2;
+ (void)reportWithName:(id)arg1;
@property(nonatomic) _Bool isPresented; // @synthesize isPresented=_isPresented;
@property(nonatomic) int sourceID; // @synthesize sourceID=_sourceID;
- (void)onSetRichState:(id)arg1;
- (void)onNeedUpdate:(id)arg1;
- (void)localPayHelperUIShouldFinishLoading:(id)arg1;
- (void)setNeedsLocalPayHelper;
- (void)removeLoadingView;
- (void)addLoadingViewWithNavigationItemEnable:(_Bool)arg1;
- (void)PSTemplatesContiner:(id)arg1 didClickedPromotionUrl:(id)arg2;
- (void)PSTemplatesContiner:(id)arg1 deSelectTemplate:(id)arg2;
- (void)PSTemplatesContiner:(id)arg1 didSelectCategory:(id)arg2;
- (void)authWithErrorMessag:(id)arg1;
- (void)selectTemplate:(id)arg1;
- (void)PSTemplatesContiner:(id)arg1 didSelectTemplate:(id)arg2;
- (void)openServiceType:(long long)arg1 titleWording:(id)arg2 wording:(id)arg3 rightBtnWording:(id)arg4 leftBtnWording:(id)arg5 vipMonth:(unsigned int)arg6 authResult:(long long)arg7;
- (void)templatePersenterTemplateDidLoadFail:(id)arg1;
- (void)templatePersenterTemplateDidShow:(id)arg1;
- (void)templatePersenterTemplateDidBeginLoading:(id)arg1;
@property(retain, nonatomic) PSTemplateModel *defaultTemplate; // @dynamic defaultTemplate;
- (void)refreshPreview;
- (void)onClickImageItem;
- (void)actionDone:(id)arg1;
- (id)currentRichState;
- (void)insertDo:(id)arg1 text:(id)arg2 abstract:(id)arg3;
- (void)placeSelectedRichStateModelIntoEditTextfield:(id)arg1;
- (void)onSelectedRichStateTodoItem:(id)arg1 itemModel:(id)arg2;
- (void)showRestChineseTextCount:(id)arg1;
- (void)checkContentLimit:(id)arg1;
- (void)insertPOI:(id)arg1 gps:(id)arg2;
- (void)setLocationText:(id)arg1;
- (void)LBSPOIViewController:(id)arg1 selectedLBSPoiInfo:(id)arg2;
- (void)LBSPOIViewController:(id)arg1 customLBSLocationString:(id)arg2;
- (void)LBSPOIViewController:(id)arg1 selectedLBSPositon:(id)arg2;
- (void)textViewDidChangeSelection:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)deleteRichAction;
- (void)checkInputState:(struct _NSRange)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)maskTaped:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)dismissTextField;
- (_Bool)isSupportRightDragToGoBack;
@property(retain, nonatomic) RichStateSubLocationModel *locationModel; // @dynamic locationModel;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)buttonClicked:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)isRichStateNotChanged;
- (void)setupKeyboardToolbar;
- (id)getToolBarButton:(id)arg1 action:(SEL)arg2 tag:(long long)arg3;
- (struct CGSize)calcTextSize:(id)arg1 font:(id)arg2;
- (void)setupTemplates;
- (id)p_establishView;
- (void)updateVipBtnWithText:(id)arg1 ImageType:(int)arg2;
- (void)onVipPayRecommendTextNotification:(id)arg1;
- (id)p_publishButton;
- (id)p_textField;
- (void)clickLocation:(id)arg1;
- (id)p_locationView;
- (void)setupEditorArea;
- (void)setupNavigationButtons;
- (void)leftBtnClickedAfterAlert;
- (void)leftBtnClicked;
- (void)setupViewValues;
- (void)setupViews;
- (void)reloadTemplatesData:(id)arg1;
- (void)loadTemplates;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dismissNumberPoint;
- (void)showNumberPointWith:(long long)arg1;
- (void)handleSliderInEvent;
- (id)initWithCurrentState:(id)arg1;
- (id)initWithRichState:(id)arg1 hasRedPoint:(_Bool)arg2;
- (id)initWithRichState:(id)arg1 originModel:(id)arg2 hasRedPoint:(_Bool)arg3;
- (void)dealloc;

// Remaining properties
@property(nonatomic) _Bool actionEditable; // @dynamic actionEditable;
@property(retain, nonatomic) RichStateSubActionModel *actionModel; // @dynamic actionModel;
@property(retain, nonatomic) RichStateAbstractModel *currentSelectedRichStateModel; // @dynamic currentSelectedRichStateModel;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) UIView *editorAreaContainer; // @dynamic editorAreaContainer;
@property(nonatomic) _Bool hasRedPoint; // @dynamic hasRedPoint;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @dynamic indicatorView;
@property(retain, nonatomic) UIView *interactionCountView; // @dynamic interactionCountView;
@property(retain, nonatomic) RichStateLBSPOIViewController *lbsViewController; // @dynamic lbsViewController;
@property(nonatomic) unsigned long long leftWordsCount; // @dynamic leftWordsCount;
@property(retain, nonatomic) NIAttributedLabel *limitedNumLabel; // @dynamic limitedNumLabel;
@property(retain, nonatomic) UIView *loadingView; // @dynamic loadingView;
@property(retain, nonatomic) VASLocalPayHelper *localPayHelper; // @dynamic localPayHelper;
@property(retain, nonatomic) UIView *mask; // @dynamic mask;
@property(retain, nonatomic) RichNormalEditor *normalEditor; // @dynamic normalEditor;
@property(nonatomic) double openTS; // @dynamic openTS;
@property(copy, nonatomic) NSString *originContent; // @dynamic originContent;
@property(copy, nonatomic) NSString *originText; // @dynamic originText;
@property(retain, nonatomic) UIActivityIndicatorView *previewLoadingIndicator; // @dynamic previewLoadingIndicator;
@property(retain, nonatomic) UIView *publishContainer; // @dynamic publishContainer;
@property(retain, nonatomic) RichStateModel *richState; // @dynamic richState;
@property(retain, nonatomic) PSTemplateModel *selectedTemplateModel; // @dynamic selectedTemplateModel;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIView *templateContainer; // @dynamic templateContainer;
@property(retain, nonatomic) PSTemplatePresenter *templatePresenter; // @dynamic templatePresenter;
@property(retain, nonatomic) UIImageView *templatePreviewImageView; // @dynamic templatePreviewImageView;
@property(retain, nonatomic) PSTemplatesContainerView *templatesContainerView; // @dynamic templatesContainerView;
@property(retain, nonatomic) RichStateTodoTabViewController *todoViewController; // @dynamic todoViewController;

@end
