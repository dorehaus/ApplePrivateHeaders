/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ReminderKitUI.framework/Versions/A/ReminderKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSAttributedString, NSDateComponents, CLLocation, NSString, NSURL, NSData, NSUserActivity;

@interface REMReminderCreationContext : NSObject <NSSecureCoding> {

	char _wantsExtendedDetailOnlyView;
	char _titleIsGeneratedSuggestion;
	NSAttributedString* _title;
	NSAttributedString* _notes;
	NSDateComponents* _dueDateComponents;
	CLLocation* _location;
	NSString* _locationString;
	long long _locationProximity;
	NSURL* _url;
	NSData* _siriFoundInAppsData;
	NSUserActivity* _userActivity;

}

@property (nonatomic,copy) NSAttributedString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSAttributedString * notes;                        //@synthesize notes=_notes - In the implementation block
@property (nonatomic,copy) NSDateComponents * dueDateComponents;              //@synthesize dueDateComponents=_dueDateComponents - In the implementation block
@property (nonatomic,copy) CLLocation * location;                             //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSString * locationString;                         //@synthesize locationString=_locationString - In the implementation block
@property (assign,nonatomic) long long locationProximity;                     //@synthesize locationProximity=_locationProximity - In the implementation block
@property (nonatomic,copy) NSURL * url;                                       //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSData * siriFoundInAppsData;                      //@synthesize siriFoundInAppsData=_siriFoundInAppsData - In the implementation block
@property (nonatomic,retain) NSUserActivity * userActivity;                   //@synthesize userActivity=_userActivity - In the implementation block
@property (assign,nonatomic) char wantsExtendedDetailOnlyView;                //@synthesize wantsExtendedDetailOnlyView=_wantsExtendedDetailOnlyView - In the implementation block
@property (assign,nonatomic) char titleIsGeneratedSuggestion;                 //@synthesize titleIsGeneratedSuggestion=_titleIsGeneratedSuggestion - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setTitle:(NSAttributedString *)arg1 ;
-(CLLocation *)location;
-(NSAttributedString *)title;
-(id)initWithDelegate:(id)arg1 ;
-(NSUserActivity *)userActivity;
-(void)setUserActivity:(NSUserActivity *)arg1 ;
-(void)setLocation:(CLLocation *)arg1 ;
-(void)setNotes:(NSAttributedString *)arg1 ;
-(NSAttributedString *)notes;
-(NSString *)locationString;
-(void)setLocationString:(NSString *)arg1 ;
-(NSDateComponents *)dueDateComponents;
-(void)setDueDateComponents:(NSDateComponents *)arg1 ;
-(NSData *)siriFoundInAppsData;
-(void)setSiriFoundInAppsData:(NSData *)arg1 ;
-(char)wantsExtendedDetailOnlyView;
-(char)titleIsGeneratedSuggestion;
-(long long)locationProximity;
-(void)setWantsExtendedDetailOnlyView:(char)arg1 ;
-(void)setTitleIsGeneratedSuggestion:(char)arg1 ;
-(void)setLocationProximity:(long long)arg1 ;
@end

