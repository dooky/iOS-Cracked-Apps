//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class KGThemeButton, KGThemeImageView, KGThemeLabel, NSString;

@interface KGAlbumSendView : UIView
{
    NSString *_title;
    KGThemeImageView *_cycleIv;
    KGThemeLabel *_numberLaber;
    KGThemeButton *_okButton;
}

@property(retain, nonatomic) KGThemeButton *okButton; // @synthesize okButton=_okButton;
@property(retain, nonatomic) KGThemeLabel *numberLaber; // @synthesize numberLaber=_numberLaber;
@property(retain, nonatomic) KGThemeImageView *cycleIv; // @synthesize cycleIv=_cycleIv;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)setNumber:(long long)arg1;
- (id)initWithTitle:(id)arg1;
- (void)dealloc;

@end
