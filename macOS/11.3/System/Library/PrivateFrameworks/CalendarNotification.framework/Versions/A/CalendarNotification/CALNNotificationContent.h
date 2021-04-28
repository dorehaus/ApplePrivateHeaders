/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/Versions/A/CalendarNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarNotification/CalendarNotification-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSURL, NSArray, CALNNotificationSound, NSDictionary;

@interface CALNNotificationContent : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSString* _title;
	NSString* _subtitle;
	NSString* _body;
	NSString* _categoryIdentifier;
	NSString* _sectionIdentifier;
	NSDate* _date;
	NSDate* _expirationDate;
	NSURL* _defaultActionURL;
	NSString* _iconIdentifier;
	char _shouldHideTime;
	char _shouldSuppressSyncDismissalWhenRemoved;
	NSArray* _peopleIdentifiers;
	CALNNotificationSound* _sound;
	NSDictionary* _userInfo;
	NSString* _threadIdentifier;
	NSString* _summaryArgument;
	unsigned long long _summaryArgumentCount;

}

@property (nonatomic,copy,readonly) NSString * title;                                    //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                                 //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * body;                                     //@synthesize body=_body - In the implementation block
@property (nonatomic,copy,readonly) NSString * categoryIdentifier;                       //@synthesize categoryIdentifier=_categoryIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * sectionIdentifier;                        //@synthesize sectionIdentifier=_sectionIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDate * date;                                       //@synthesize date=_date - In the implementation block
@property (nonatomic,copy,readonly) NSDate * expirationDate;                             //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy,readonly) NSURL * defaultActionURL;                            //@synthesize defaultActionURL=_defaultActionURL - In the implementation block
@property (nonatomic,readonly) char shouldHideTime;                                      //@synthesize shouldHideTime=_shouldHideTime - In the implementation block
@property (nonatomic,copy,readonly) NSString * iconIdentifier;                           //@synthesize iconIdentifier=_iconIdentifier - In the implementation block
@property (nonatomic,readonly) char shouldSuppressSyncDismissalWhenRemoved;              //@synthesize shouldSuppressSyncDismissalWhenRemoved=_shouldSuppressSyncDismissalWhenRemoved - In the implementation block
@property (nonatomic,copy,readonly) NSArray * peopleIdentifiers;                         //@synthesize peopleIdentifiers=_peopleIdentifiers - In the implementation block
@property (nonatomic,copy,readonly) CALNNotificationSound * sound;                       //@synthesize sound=_sound - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * userInfo;                             //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,copy,readonly) NSString * threadIdentifier;                         //@synthesize threadIdentifier=_threadIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * summaryArgument;                          //@synthesize summaryArgument=_summaryArgument - In the implementation block
@property (nonatomic,readonly) unsigned long long summaryArgumentCount;                  //@synthesize summaryArgumentCount=_summaryArgumentCount - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(NSString *)title;
-(NSDate *)expirationDate;
-(NSString *)subtitle;
-(NSArray *)peopleIdentifiers;
-(CALNNotificationSound *)sound;
-(NSString *)categoryIdentifier;
-(NSString *)body;
-(NSURL *)defaultActionURL;
-(char)shouldHideTime;
-(char)shouldSuppressSyncDismissalWhenRemoved;
-(NSString *)threadIdentifier;
-(NSString *)summaryArgument;
-(unsigned long long)summaryArgumentCount;
-(NSString *)iconIdentifier;
-(NSString *)sectionIdentifier;
-(char)isEqualToContent:(id)arg1 ;
-(char)isEqualForDiffingPurposesToContent:(id)arg1 ;
-(id)_initWithTitle:(id)arg1 subtitle:(id)arg2 body:(id)arg3 categoryIdentifier:(id)arg4 sectionIdentifier:(id)arg5 date:(id)arg6 expirationDate:(id)arg7 defaultActionURL:(id)arg8 iconIdentifier:(id)arg9 shouldHideTime:(char)arg10 shouldSuppressSyncDismissalWhenRemoved:(char)arg11 peopleIdentifiers:(id)arg12 sound:(id)arg13 userInfo:(id)arg14 threadIdentifier:(id)arg15 summaryArgument:(id)arg16 summaryArgumentCount:(unsigned long long)arg17 ;
@end

