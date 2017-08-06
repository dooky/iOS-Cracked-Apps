//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MusicBaseCell.h"

@class KGThemeButton, KGThemeImageView, KGThemeLabel, UIImageView, UIView;

@interface UITableViewEditCell : MusicBaseCell
{
    _Bool _readOnlyCellType;
    id <UITableViewEditCellDelegate> _delegate;
    KGThemeLabel *_detailLabel;
    KGThemeImageView *_arrowImgView;
    KGThemeLabel *_leftTextLabel;
    UIImageView *_detailImageView;
    KGThemeButton *_qqButton;
    KGThemeButton *_wechatButton;
    UIView *_tagsView;
    UIView *_bottomLine;
    struct CGSize _sizeForCell;
}

+ (double)autoHeightForCell:(id)arg1 cellWidth:(double)arg2;
+ (double)maxHeightForHobbyCellWithArray:(id)arg1 cellWidth:(double)arg2;
+ (double)maxHeightForTagsCell:(id)arg1 cellWidth:(double)arg2;
+ (long long)calculateRowsWithArray:(id)arg1 withMaxWidth:(double)arg2;
+ (long long)calculateTagLine:(id)arg1 withMaxWidth:(double)arg2;
+ (id)createLabelWithText:(id)arg1;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIView *tagsView; // @synthesize tagsView=_tagsView;
@property(retain, nonatomic) KGThemeButton *wechatButton; // @synthesize wechatButton=_wechatButton;
@property(retain, nonatomic) KGThemeButton *qqButton; // @synthesize qqButton=_qqButton;
@property(retain, nonatomic) UIImageView *detailImageView; // @synthesize detailImageView=_detailImageView;
@property(retain, nonatomic) KGThemeLabel *leftTextLabel; // @synthesize leftTextLabel=_leftTextLabel;
@property(nonatomic) KGThemeImageView *arrowImgView; // @synthesize arrowImgView=_arrowImgView;
@property(nonatomic) struct CGSize sizeForCell; // @synthesize sizeForCell=_sizeForCell;
@property(retain, nonatomic) KGThemeLabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(nonatomic) id <UITableViewEditCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool readOnlyCellType; // @synthesize readOnlyCellType=_readOnlyCellType;
- (void).cxx_destruct;
- (void)clickToEditWechat:(id)arg1;
- (void)clickToEditQQ:(id)arg1;
- (void)changeContactStatus:(id)arg1;
- (id)createSuccessImageView;
- (void)updateUserContactWithEntity:(id)arg1;
- (void)updateUserPicutureWithUrl:(id)arg1;
- (void)updateUserPicuture:(id)arg1;
- (void)updateUserSignatureWithEntity:(id)arg1;
- (void)updateWithInfo:(id)arg1;
- (void)addTagsWithArray:(id)arg1;
- (void)addTagsWithData:(id)arg1;
- (id)createTagViewWithText:(id)arg1 color:(id)arg2 position:(struct CGPoint)arg3;
- (void)showBottomLine;
- (void)hideBottomLine;
- (void)drawLineWithLineFrame:(struct CGRect)arg1;
- (struct CGRect)detailLabelFrame;
- (void)setupViews;
- (id)initForUserHobbyWithEntity:(id)arg1 size:(struct CGSize)arg2;
- (id)initForUserContactWithEntity:(id)arg1 size:(struct CGSize)arg2;
- (id)initForUserTagsWithEntity:(id)arg1 size:(struct CGSize)arg2;
- (id)initForUserPictureWithEntity:(id)arg1 size:(struct CGSize)arg2;
- (id)initForUserSignatureWithEntity:(id)arg1 size:(struct CGSize)arg2;
- (id)initWithEntity:(id)arg1 size:(struct CGSize)arg2 reuseIdentifier:(id)arg3;
- (id)init;

@end
