//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DGCBaseDataModel.h"

@class NSArray<DGPTransferBusModel>, NSString;

@interface DGPTransferSegmentEtaParam : DGCBaseDataModel
{
    long long _idx;
    NSString *_lineId;
    long long _selected;
    NSArray<DGPTransferBusModel> *_buses;
    double _startAt;
    double _endAt;
    NSString *_mode;
}

@property(retain, nonatomic) NSString *mode; // @synthesize mode=_mode;
@property(nonatomic) double endAt; // @synthesize endAt=_endAt;
@property(nonatomic) double startAt; // @synthesize startAt=_startAt;
@property(retain, nonatomic) NSArray<DGPTransferBusModel> *buses; // @synthesize buses=_buses;
@property(nonatomic) long long selected; // @synthesize selected=_selected;
@property(retain, nonatomic) NSString *lineId; // @synthesize lineId=_lineId;
@property(nonatomic) long long idx; // @synthesize idx=_idx;
- (void).cxx_destruct;

@end

