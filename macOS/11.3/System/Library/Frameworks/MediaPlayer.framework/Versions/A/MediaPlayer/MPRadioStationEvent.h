/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/Versions/A/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MPMutableRadioStationEvent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface MPRadioStationEvent : NSObject <MPMutableRadioStationEvent, NSSecureCoding> {

	NSString* _title;
	NSString* _descriptionText;
	NSDate* _startTime;
	NSDate* _endTime;

}

@property (nonatomic,copy) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * descriptionText;              //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,copy) NSDate * startTime;                      //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,copy) NSDate * endTime;                        //@synthesize endTime=_endTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSDate *)startTime;
-(void)setStartTime:(NSDate *)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(NSString *)title;
-(void)setEndTime:(NSDate *)arg1 ;
-(NSDate *)endTime;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
@end

