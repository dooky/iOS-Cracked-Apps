//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QQCampusModifyRequestModel : NSObject
{
    unsigned long long _uin;
    long long _status;
    NSString *_actualName;
    NSString *_school;
    long long _schoolType;
    NSString *_college;
    long long _grade;
    NSString *_class_;
    long long _admissionYear;
}

@property(nonatomic) long long admissionYear; // @synthesize admissionYear=_admissionYear;
@property(retain, nonatomic) NSString *class_; // @synthesize class_=_class_;
@property(nonatomic) long long grade; // @synthesize grade=_grade;
@property(retain, nonatomic) NSString *college; // @synthesize college=_college;
@property(nonatomic) long long schoolType; // @synthesize schoolType=_schoolType;
@property(retain, nonatomic) NSString *school; // @synthesize school=_school;
@property(retain, nonatomic) NSString *actualName; // @synthesize actualName=_actualName;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) unsigned long long uin; // @synthesize uin=_uin;
- (void).cxx_destruct;
- (_Bool)empty;

@end
