//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XYAZEventBuilder.h"

@class NSMutableArray, NSString;

@interface XYAZEvent : NSObject <XYAZEventBuilder>
{
    long long _timestamp;
    NSMutableArray *_contexts;
    NSString *_eventId;
    NSString *_sequnceId;
}

@property(retain, nonatomic) NSString *sequnceId; // @synthesize sequnceId=_sequnceId;
@property(retain, nonatomic) NSString *eventId; // @synthesize eventId=_eventId;
@property(retain, nonatomic) NSMutableArray *contexts; // @synthesize contexts=_contexts;
@property(nonatomic) long long timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (void)basePreconditions;
- (id)addDefaultParamsToPayload:(id)arg1;
- (id)getSequnceId;
- (id)getEventId;
- (long long)getTimestamp;
- (id)getContexts;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
