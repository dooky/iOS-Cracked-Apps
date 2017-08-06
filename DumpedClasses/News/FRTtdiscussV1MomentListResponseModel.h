//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTResponseModel.h"

@class FRTipsStructModel, NSArray<FRThreadDataStructModel><Optional>, NSNumber, NSString<Optional>;

@interface FRTtdiscussV1MomentListResponseModel : TTResponseModel
{
    NSNumber *_err_no;
    long long _login_status;
    long long _has_more;
    NSNumber *_min_cursor;
    NSNumber *_max_cursor;
    NSArray<FRThreadDataStructModel><Optional> *_data_list;
    FRTipsStructModel *_tips;
    NSString<Optional> *_err_tips;
}

@property(retain, nonatomic) NSString<Optional> *err_tips; // @synthesize err_tips=_err_tips;
@property(retain, nonatomic) FRTipsStructModel *tips; // @synthesize tips=_tips;
@property(retain, nonatomic) NSArray<FRThreadDataStructModel><Optional> *data_list; // @synthesize data_list=_data_list;
@property(retain, nonatomic) NSNumber *max_cursor; // @synthesize max_cursor=_max_cursor;
@property(retain, nonatomic) NSNumber *min_cursor; // @synthesize min_cursor=_min_cursor;
@property(nonatomic) long long has_more; // @synthesize has_more=_has_more;
@property(nonatomic) long long login_status; // @synthesize login_status=_login_status;
@property(retain, nonatomic) NSNumber *err_no; // @synthesize err_no=_err_no;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end
