//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QNBHistoryTableOperationHelper : NSObject
{
}

- (void)updateUserIdWithBlock:(CDUnknownBlockType)arg1;
- (void)updateWatchRecords:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)addWatchRecordWithArray:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)clearDBWithBlock:(CDUnknownBlockType)arg1;
- (void)deleteWatchRecordWithArray:(id)arg1 andDeleteAll:(_Bool)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)loadAllDBWithBlock:(CDUnknownBlockType)arg1;
- (void)loadHistoryByArray:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)createTable;
- (id)init;

@end
