//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface HotelImageSellerShowModel : CTBusinessBean
{
    NSString *_firstImageUrl;
    NSString *_sellerText;
    NSString *_jumpUrl;
}

@property(copy, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(copy, nonatomic) NSString *sellerText; // @synthesize sellerText=_sellerText;
@property(copy, nonatomic) NSString *firstImageUrl; // @synthesize firstImageUrl=_firstImageUrl;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

