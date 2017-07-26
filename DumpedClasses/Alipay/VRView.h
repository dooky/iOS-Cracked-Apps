//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VRControl.h"

@class NSDictionary, UIColor, UIView;

@interface VRView : VRControl
{
    _Bool _hidden;
    _Bool _clipsToBounds;
    UIColor *_backgroundColor;
    unsigned long long _autoresizingMask;
    unsigned long long _tag;
    double _cornerRadius;
    double _alpha;
    unsigned long long _rectCorner;
    double _borderWidth;
    UIColor *_borderColor;
    UIColor *_highlightedColor;
    long long _contentMode;
    double _borderTop;
    UIColor *_borderTopColor;
    double _borderBottom;
    UIColor *_borderBottomColor;
    UIView *_drawMapView;
    NSDictionary *_vr_ext;
}

@property(retain, nonatomic) NSDictionary *vr_ext; // @synthesize vr_ext=_vr_ext;
@property(nonatomic) __weak UIView *drawMapView; // @synthesize drawMapView=_drawMapView;
@property(retain, nonatomic) UIColor *borderBottomColor; // @synthesize borderBottomColor=_borderBottomColor;
@property(nonatomic) double borderBottom; // @synthesize borderBottom=_borderBottom;
@property(retain, nonatomic) UIColor *borderTopColor; // @synthesize borderTopColor=_borderTopColor;
@property(nonatomic) double borderTop; // @synthesize borderTop=_borderTop;
@property(nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
@property(retain, nonatomic) UIColor *highlightedColor; // @synthesize highlightedColor=_highlightedColor;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) unsigned long long rectCorner; // @synthesize rectCorner=_rectCorner;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(nonatomic) _Bool clipsToBounds; // @synthesize clipsToBounds=_clipsToBounds;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) unsigned long long tag; // @synthesize tag=_tag;
@property(nonatomic) unsigned long long autoresizingMask; // @synthesize autoresizingMask=_autoresizingMask;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
- (void).cxx_destruct;
- (struct CGRect)accessibilityFrame;
- (void)setHighlighted:(_Bool)arg1;
- (id)superview;
- (_Bool)highlightDrawEnabel;
- (void)redraw:(_Bool)arg1;
- (id)bezierPath;
- (void)drawWithContextFinal:(struct CGContext *)arg1 isCancelled:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) struct CGRect bounds;
- (void)drawWithContext:(struct CGContext *)arg1 isCancelled:(CDUnknownBlockType)arg2;
- (void)resetProperty;
- (void)resetVRProperty;
- (id)init;
- (void)bindView:(id)arg1;
@property(nonatomic) struct CGPoint center;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)clean;
- (_Bool)drawUnsupported;
- (void)clearRect:(struct CGContext *)arg1;
- (void)mergeSuperRect:(struct CGRect)arg1 oldRect:(struct CGRect)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toView:(id)arg2;
- (_Bool)touchesCancelled:(id)arg1 point:(struct CGPoint)arg2;
- (_Bool)touchesMoved:(id)arg1 point:(struct CGPoint)arg2;
- (_Bool)touchesEnded:(id)arg1 point:(struct CGPoint)arg2;
- (_Bool)touchesBegan:(id)arg1 point:(struct CGPoint)arg2;
- (id)window;
@property(nonatomic) struct CGSize size;
@property(nonatomic) struct CGPoint origin;
@property(nonatomic) double h;
@property(nonatomic) double height;
@property(nonatomic) double w;
@property(nonatomic) double width;
@property(nonatomic) double centerY;
@property(nonatomic) double centerX;
@property(nonatomic) double bottom;
@property(nonatomic) double right;
@property(nonatomic) double y;
@property(nonatomic) double top;
@property(nonatomic) double x;
@property(nonatomic) double left;

@end
