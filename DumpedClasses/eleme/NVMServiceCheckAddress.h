//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMHTTPRequestData.h"

@class NSString;

@interface NVMServiceCheckAddress : NVMHTTPRequestData
{
    NSString *_detailAddress;
    struct CLLocationCoordinate2D _coordinate;
}

@property(copy, nonatomic) NSString *detailAddress; // @synthesize detailAddress=_detailAddress;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
- (void).cxx_destruct;
- (id)extraParameters;
- (id)initWithCooridinate:(struct CLLocationCoordinate2D)arg1 detailAddress:(id)arg2;

@end
