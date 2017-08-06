//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GPUImageMovieWriter, GPUImageOutput, GPUImageVideoCamera, HTSVideoMerger, NSDictionary, NSMutableArray;

@interface HTSCameraWriter : NSObject
{
    NSMutableArray *_videoFragmentsArray;
    GPUImageMovieWriter *_movieWriter;
    HTSVideoMerger *_movieMerger;
    GPUImageVideoCamera *_camera;
    GPUImageOutput *_filter;
    NSDictionary *_outputVideoConiguration;
    struct CGSize _outputSize;
}

+ (void)removeVideoFragmentFileAtUrl:(id)arg1;
+ (id)cachePath;
+ (void)clearCameraCache;
@property(retain, nonatomic) NSDictionary *outputVideoConiguration; // @synthesize outputVideoConiguration=_outputVideoConiguration;
@property(nonatomic) struct CGSize outputSize; // @synthesize outputSize=_outputSize;
@property(nonatomic) __weak GPUImageOutput *filter; // @synthesize filter=_filter;
@property(nonatomic) __weak GPUImageVideoCamera *camera; // @synthesize camera=_camera;
@property(retain, nonatomic) HTSVideoMerger *movieMerger; // @synthesize movieMerger=_movieMerger;
@property(retain, nonatomic) GPUImageMovieWriter *movieWriter; // @synthesize movieWriter=_movieWriter;
@property(retain, nonatomic) NSMutableArray *videoFragmentsArray; // @synthesize videoFragmentsArray=_videoFragmentsArray;
- (void).cxx_destruct;
- (void)clearMovieWriter;
- (void)removeAllVideoFragments;
- (void)removeLastVideoFragment;
- (id)videoFragmentAtIndex:(unsigned long long)arg1;
- (unsigned long long)fragmentCount;
- (void)cancelWriting;
- (void)finishWriting:(CDUnknownBlockType)arg1;
- (void)pauseWriting:(CDUnknownBlockType)arg1;
- (void)startWriting:(CDUnknownBlockType)arg1;
- (id)initWithCamera:(id)arg1 filter:(id)arg2 outputSize:(struct CGSize)arg3;
- (id)init;

@end
