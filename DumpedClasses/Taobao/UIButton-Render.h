//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

#import "RenderProtocol.h"

@interface UIButton (Render) <RenderProtocol>
+ (void)registerStyleKeys;
+ (CDStruct_a448645f *)findMethodByPropName:(id)arg1;
+ (id)dynamicPropMap;
- (void)render;
- (void)initMUI;
- (id)initWithStyle:(id)arg1;
- (void)setLabelFontConfig:(id)arg1;
- (void)setSelectedTitleColor:(id)arg1;
- (void)setDisabledTitleColor:(id)arg1;
- (void)setHighlighedTitleColor:(id)arg1;
- (void)setNormalTitleColor:(id)arg1;
- (void)setNormalBorderWidth:(double)arg1;
- (void)setSelectedButtonImage:(id)arg1;
- (void)setHighlightedButtonImage:(id)arg1;
- (void)setNormalButtonImage:(id)arg1;
- (void)setDisabledButtonImage:(id)arg1;
- (void)setSelectedBackgroundImage:(id)arg1;
- (void)setHighlightedBackgroundImage:(id)arg1;
- (void)setNormalBackgroundImage:(id)arg1;
- (void)setDisabledBackgroundImage:(id)arg1;
- (void)setDisabledBackgroundColor:(id)arg1;
- (void)setSelectedBackgroundColor:(id)arg1;
- (void)setHighlightedBackgroundColor:(id)arg1;
- (void)setNormalBackgroundColor:(id)arg1;
- (void)setDisabledShadowColor:(id)arg1;
- (void)setSelectedShadowColor:(id)arg1;
- (void)setHighlightedShadowColor:(id)arg1;
- (void)setNormalShadowColor:(id)arg1;
- (void)setNormalBorderColor:(id)arg1;
- (void)setFontColor:(id)arg1;
- (void)setTitleFont:(id)arg1;
- (void)configureTitleLabel:(id)arg1;
- (void)setNormalTitle:(id)arg1;
@end
