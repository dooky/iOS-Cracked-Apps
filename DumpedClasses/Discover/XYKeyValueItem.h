//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface XYKeyValueItem : NSObject
{
    NSString *_itemId;
    id _itemObject;
    NSDate *_createdTime;
}

@property(retain, nonatomic) NSDate *createdTime; // @synthesize createdTime=_createdTime;
@property(retain, nonatomic) id itemObject; // @synthesize itemObject=_itemObject;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;
- (id)description;

@end

