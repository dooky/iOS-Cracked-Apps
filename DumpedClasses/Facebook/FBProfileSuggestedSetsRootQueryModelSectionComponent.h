//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBCompositeSectionComponent.h>

@class FBMemViewer;
@protocol FBProfileSetsCreationToolbox;

@interface FBProfileSuggestedSetsRootQueryModelSectionComponent : FBCompositeSectionComponent
{
    id <FBProfileSetsCreationToolbox> _toolbox;
    FBMemViewer *_viewer;
}

+ (id)newWithModel:(id)arg1 toolbox:(id)arg2;
@property(readonly, nonatomic) FBMemViewer *viewer; // @synthesize viewer=_viewer;
@property(readonly, nonatomic) id <FBProfileSetsCreationToolbox> toolbox; // @synthesize toolbox=_toolbox;
- (void).cxx_destruct;

@end

