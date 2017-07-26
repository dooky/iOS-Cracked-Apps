//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WWTableController.h"

@class NSArray, NSMutableArray, UILabel, UIView;

@interface EmotionManagerController : WWTableController
{
    _Bool _editing;
    UIView *_sectionHeader;
    UILabel *_sectionHeaderLabel;
    NSArray *_downloadedPackages;
    NSMutableArray *_initBriefs;
}

- (void).cxx_destruct;
- (void)back;
- (void)sortButtonClicked:(id)arg1;
- (void)deleteButtonClicked:(id)arg1;
- (void)emotionPackageChanged:(id)arg1;
- (void)reloadContent;
- (void)updateBarButtonItem;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)updateSectionTitle;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

@end
