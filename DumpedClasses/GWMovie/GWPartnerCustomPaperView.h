//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel, UITextField;

@interface GWPartnerCustomPaperView : UIView
{
    UITextField *_writeTicketTextField;
    UILabel *_totalLabel;
}

@property(retain, nonatomic) UILabel *totalLabel; // @synthesize totalLabel=_totalLabel;
@property(retain, nonatomic) UITextField *writeTicketTextField; // @synthesize writeTicketTextField=_writeTicketTextField;
- (void).cxx_destruct;
- (void)textFiledEditChanged:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)setSendTarget:(id)arg1 action:(SEL)arg2;
- (id)inputText;
- (void)setInpuText:(id)arg1;
- (void)activeTextField;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end
