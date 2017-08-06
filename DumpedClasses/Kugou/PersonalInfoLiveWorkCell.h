//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PersonalInfoBaseCell.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class NSString, PersonalInfoLiveWorkEntity, UICollectionView;

@interface PersonalInfoLiveWorkCell : PersonalInfoBaseCell <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    id <PersonalInfoCenterActionDelegate> _delegate;
    PersonalInfoLiveWorkEntity *_entity;
    UICollectionView *_collectionView;
}

+ (double)cellHeight;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) PersonalInfoLiveWorkEntity *entity; // @synthesize entity=_entity;
@property(nonatomic) __weak id <PersonalInfoCenterActionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
