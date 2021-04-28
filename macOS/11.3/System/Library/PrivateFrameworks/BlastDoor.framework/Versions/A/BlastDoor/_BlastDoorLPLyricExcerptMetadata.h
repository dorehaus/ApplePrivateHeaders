/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/Versions/A/BlastDoor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BlastDoor/BlastDoor-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface _BlastDoorLPLyricExcerptMetadata : NSObject <NSSecureCoding, NSCopying> {

	NSString* _lyrics;
	NSString* _language;
	NSNumber* _startTime;
	NSNumber* _endTime;

}

@property (nonatomic,copy) NSString * lyrics;                   //@synthesize lyrics=_lyrics - In the implementation block
@property (nonatomic,copy) NSString * language;                 //@synthesize language=_language - In the implementation block
@property (nonatomic,retain) NSNumber * startTime;              //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSNumber * endTime;                //@synthesize endTime=_endTime - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)startTime;
-(void)setStartTime:(NSNumber *)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setEndTime:(NSNumber *)arg1 ;
-(NSNumber *)endTime;
-(NSString *)lyrics;
-(void)setLyrics:(NSString *)arg1 ;
@end
