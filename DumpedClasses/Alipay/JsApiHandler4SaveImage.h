//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JsApiHandlerBase.h"

#import "H5SaveWebImageDelegate.h"

@class H5WebViewController, NSString;

@interface JsApiHandler4SaveImage : JsApiHandlerBase <H5SaveWebImageDelegate>
{
    _Bool _shouldCallback;
    H5WebViewController *_webViewController;
    CDUnknownBlockType _callback;
}

@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(nonatomic) _Bool shouldCallback; // @synthesize shouldCallback=_shouldCallback;
@property(nonatomic) __weak H5WebViewController *webViewController; // @synthesize webViewController=_webViewController;
- (void).cxx_destruct;
- (void)savedImageWithError:(id)arg1 withImage:(id)arg2;
- (void)didextractQRCodeData:(id)arg1;
- (void)doHandler:(id)arg1 url:(id)arg2 context:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)handler:(id)arg1 context:(id)arg2 callback:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
