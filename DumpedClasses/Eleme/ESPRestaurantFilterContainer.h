//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSDictionary, NSString;

@interface ESPRestaurantFilterContainer : NSObject <NSCopying>
{
    NSString *_foodTagName;
    NSArray *_categoryItems;
    NSArray *_sortItems;
    NSArray *_propertyItems;
    NSDictionary *_requestParametersFromFilterInfo;
    NSDictionary *_mallParameter;
    NSDictionary *_tagsParameter;
}

@property(copy, nonatomic) NSDictionary *tagsParameter; // @synthesize tagsParameter=_tagsParameter;
@property(copy, nonatomic) NSDictionary *mallParameter; // @synthesize mallParameter=_mallParameter;
@property(copy, nonatomic) NSDictionary *requestParametersFromFilterInfo; // @synthesize requestParametersFromFilterInfo=_requestParametersFromFilterInfo;
@property(copy, nonatomic) NSArray *propertyItems; // @synthesize propertyItems=_propertyItems;
@property(copy, nonatomic) NSArray *sortItems; // @synthesize sortItems=_sortItems;
@property(copy, nonatomic) NSArray *categoryItems; // @synthesize categoryItems=_categoryItems;
@property(copy, nonatomic) NSString *foodTagName; // @synthesize foodTagName=_foodTagName;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)sortType;
- (id)filterParameter;
- (id)filterItemsForType:(unsigned long long)arg1;
- (id)showNameForType:(unsigned long long)arg1;
- (void)setFilterItems:(id)arg1 forType:(unsigned long long)arg2;
- (void)updateWithFilterInfo:(id)arg1;

@end

