//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MozartConfig : NSObject
{
    short _waveSceneId;
    float _sampleRate;
    float _bufferSeconds;
    float _sampleBitsPerChannel;
    float _maxRecordSeconds;
    int _decodeAlgorithm;
    int _waveBytesNum;
    unsigned long long _type;
}

@property(nonatomic) int waveBytesNum; // @synthesize waveBytesNum=_waveBytesNum;
@property(nonatomic) short waveSceneId; // @synthesize waveSceneId=_waveSceneId;
@property(nonatomic) int decodeAlgorithm; // @synthesize decodeAlgorithm=_decodeAlgorithm;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) float maxRecordSeconds; // @synthesize maxRecordSeconds=_maxRecordSeconds;
@property(nonatomic) float sampleBitsPerChannel; // @synthesize sampleBitsPerChannel=_sampleBitsPerChannel;
@property(nonatomic) float bufferSeconds; // @synthesize bufferSeconds=_bufferSeconds;
@property(nonatomic) float sampleRate; // @synthesize sampleRate=_sampleRate;
- (void)initInternal;
- (id)initWithType:(unsigned long long)arg1;
- (id)init;

@end
