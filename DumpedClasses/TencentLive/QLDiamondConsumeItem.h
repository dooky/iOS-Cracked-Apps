//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QLDiamondConsumeItem : NSObject
{
    float _price;
    NSString *_iapProductID;
    long long _count;
    NSString *_desc;
    NSString *_imageUrl;
}

+ (id)getItemWithDict:(id)arg1;
+ (id)diamondConsumeItem:(id)arg1;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(nonatomic) float price; // @synthesize price=_price;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(retain, nonatomic) NSString *iapProductID; // @synthesize iapProductID=_iapProductID;
- (void).cxx_destruct;

@end
