//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMModel.h"

@class NSArray;

@interface ESPFavoriteRestaurants : NVMModel
{
    unsigned long long _count;
    NSArray *_restaurants;
}

+ (id)restaurantsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSArray *restaurants; // @synthesize restaurants=_restaurants;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
- (void).cxx_destruct;

@end

