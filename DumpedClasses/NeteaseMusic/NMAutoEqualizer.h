//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMEqualizer.h"

@class NSArray, NSDictionary;

@interface NMAutoEqualizer : NMEqualizer
{
    long long _equalizer;
    NSDictionary *_bandsDic;
    NSArray *_noneBands;
}

@property(nonatomic) long long equalizer; // @synthesize equalizer=_equalizer;
- (void).cxx_destruct;
- (id)bands;
- (id)initWithBandsDic:(id)arg1;

@end
