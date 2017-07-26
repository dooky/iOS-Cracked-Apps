//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IAppVsersionService.h"

@class NSString;

@interface AppVersionService : NSObject <IAppVsersionService>
{
    NSString *m_currentVsersion;
    NSString *m_lastVersion;
    _Bool _isNewInstallation;
    _Bool _isCoverInstallation;
}

@property(retain, nonatomic) NSString *lastVersion; // @synthesize lastVersion=m_lastVersion;
@property(retain, nonatomic) NSString *currentVersion; // @synthesize currentVersion=m_currentVsersion;
- (float)lastVersionNum;
- (float)currentVersionNum;
- (id)lastAppVersion;
- (id)currentAppVersion;
@property(readonly, nonatomic) _Bool isCoverInstallation; // @synthesize isCoverInstallation=_isCoverInstallation;
- (_Bool)isNewInstallation;
- (void)dealloc;
- (id)init;
- (void)judge;
- (void)log;
- (void)setLastModifyTime;
- (id)getCurrentTime;
- (id)getLastModifyTime;
- (void)set;
- (id)getCurrentVersionFromUserDefaults;
- (id)getCurrentVersion;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
