//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWUCLoveBaseViewController.h"

@interface GWUCLoveMovieViewController : GWUCLoveBaseViewController
{
    long long _page;
}

@property(nonatomic) long long page; // @synthesize page=_page;
- (void)didReceiveMemoryWarning;
- (void)loadNextPageWithClear:(_Bool)arg1;
- (void)requestDidFinished:(id)arg1;
- (void)requestWillStart;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

