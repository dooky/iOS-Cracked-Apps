//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GWPhotoView, GWPicture;

@protocol GWPhotoViewDelegate <NSObject>
- (void)GWPhotoView:(GWPhotoView *)arg1 shutterCamera:(_Bool)arg2;
- (void)GWPhotoView:(GWPhotoView *)arg1 tapImage:(GWPhotoView *)arg2;
- (void)GWPhotoView:(GWPhotoView *)arg1 tapSelectHandle:(_Bool)arg2 picture:(GWPicture *)arg3;
- (_Bool)GWPhotoView:(GWPhotoView *)arg1 shouldSelectPicture:(GWPicture *)arg2;
@end
