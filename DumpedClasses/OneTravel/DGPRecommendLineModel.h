//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class DGPDepartureStopModel, DGPLineModel, DGPRecinfoModel, NSNumber, NSString;

@interface DGPRecommendLineModel : JSONModel
{
    DGPDepartureStopModel *_departureStop;
    DGPDepartureStopModel *_arrivalStop;
    DGPRecinfoModel *_recInfo;
    DGPLineModel *_busline;
    NSString *_fingerPrint;
    NSString *_emptyTip;
    NSString *_city;
    NSNumber *_recommendIndex;
}

+ (_Bool)propertyIsOptional:(id)arg1;
+ (id)keyMapper;
@property(retain, nonatomic) NSNumber *recommendIndex; // @synthesize recommendIndex=_recommendIndex;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *emptyTip; // @synthesize emptyTip=_emptyTip;
@property(copy, nonatomic) NSString *fingerPrint; // @synthesize fingerPrint=_fingerPrint;
@property(retain, nonatomic) DGPLineModel *busline; // @synthesize busline=_busline;
@property(retain, nonatomic) DGPRecinfoModel *recInfo; // @synthesize recInfo=_recInfo;
@property(retain, nonatomic) DGPDepartureStopModel *arrivalStop; // @synthesize arrivalStop=_arrivalStop;
@property(retain, nonatomic) DGPDepartureStopModel *departureStop; // @synthesize departureStop=_departureStop;
- (void).cxx_destruct;

@end
