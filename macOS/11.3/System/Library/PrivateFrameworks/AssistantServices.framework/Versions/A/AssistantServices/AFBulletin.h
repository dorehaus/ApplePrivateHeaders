/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/Versions/A/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, BBBulletin, NSDate, NSArray;

@interface AFBulletin : NSObject <NSSecureCoding, NSCopying> {

	char _availableOnLockScreen;
	char _supportsSpokenNotification;
	char _read;
	char _allDay;
	char _previewRestricted;
	NSString* _displayName;
	BBBulletin* _bbBulletin;
	NSString* _bulletinID;
	NSString* _recordID;
	NSDate* _date;
	NSDate* _endDate;
	NSString* _message;
	NSString* _modalAlertContentMessage;
	NSDate* _recencyDate;
	NSString* _sectionID;
	long long _sectionSubtype;
	NSString* _subtitle;
	NSString* _timeZone;
	NSString* _title;
	NSArray* _intentIDs;
	NSString* _publisherBulletinID;
	NSString* _threadID;
	NSString* _internalID;

}

@property (nonatomic,copy) NSString * displayName;                                    //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) char availableOnLockScreen;                              //@synthesize availableOnLockScreen=_availableOnLockScreen - In the implementation block
@property (assign,nonatomic) char supportsSpokenNotification;                         //@synthesize supportsSpokenNotification=_supportsSpokenNotification - In the implementation block
@property (assign,getter=isRead,nonatomic) char read;                                 //@synthesize read=_read - In the implementation block
@property (nonatomic,readonly) BBBulletin * bbBulletin;                               //@synthesize bbBulletin=_bbBulletin - In the implementation block
@property (nonatomic,copy,readonly) NSString * bulletinID;                            //@synthesize bulletinID=_bulletinID - In the implementation block
@property (nonatomic,copy,readonly) NSString * recordID;                              //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,copy,readonly) NSDate * date;                                    //@synthesize date=_date - In the implementation block
@property (nonatomic,copy,readonly) NSDate * endDate;                                 //@synthesize endDate=_endDate - In the implementation block
@property (getter=isAllDay,nonatomic,readonly) char allDay;                           //@synthesize allDay=_allDay - In the implementation block
@property (nonatomic,copy,readonly) NSString * message;                               //@synthesize message=_message - In the implementation block
@property (nonatomic,copy,readonly) NSString * modalAlertContentMessage;              //@synthesize modalAlertContentMessage=_modalAlertContentMessage - In the implementation block
@property (nonatomic,copy,readonly) NSDate * recencyDate;                             //@synthesize recencyDate=_recencyDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * sectionID;                             //@synthesize sectionID=_sectionID - In the implementation block
@property (nonatomic,readonly) long long sectionSubtype;                              //@synthesize sectionSubtype=_sectionSubtype - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                              //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * timeZone;                              //@synthesize timeZone=_timeZone - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSArray * intentIDs;                              //@synthesize intentIDs=_intentIDs - In the implementation block
@property (nonatomic,copy,readonly) NSString * publisherBulletinID;                   //@synthesize publisherBulletinID=_publisherBulletinID - In the implementation block
@property (nonatomic,readonly) char previewRestricted;                                //@synthesize previewRestricted=_previewRestricted - In the implementation block
@property (nonatomic,copy,readonly) NSString * threadID;                              //@synthesize threadID=_threadID - In the implementation block
@property (nonatomic,copy,readonly) NSString * internalID;                            //@synthesize internalID=_internalID - In the implementation block
+(char)supportsSecureCoding;
+(id)internalIDForBBBulletinID:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(NSString *)timeZone;
-(NSString *)displayName;
-(NSString *)message;
-(NSDate *)endDate;
-(NSString *)title;
-(char)isRead;
-(NSString *)subtitle;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)recordID;
-(NSString *)sectionID;
-(char)isAllDay;
-(void)setRead:(char)arg1 ;
-(char)previewRestricted;
-(NSDate *)recencyDate;
-(NSString *)threadID;
-(char)supportsSpokenNotification;
-(void)setSupportsSpokenNotification:(char)arg1 ;
-(void)setBulletin:(id)arg1 ;
-(void)setNotification:(id)arg1 fromSourceApp:(id)arg2 ;
-(char)availableOnLockScreen;
-(void)setAvailableOnLockScreen:(char)arg1 ;
-(BBBulletin *)bbBulletin;
-(NSString *)bulletinID;
-(NSString *)modalAlertContentMessage;
-(long long)sectionSubtype;
-(NSArray *)intentIDs;
-(NSString *)publisherBulletinID;
-(NSString *)internalID;
@end

