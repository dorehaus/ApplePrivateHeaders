/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/Versions/A/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBCalendarImage.h>
@class _SFPBDate, NSData;


@protocol _SFPBCalendarImage <NSObject>
@property (nonatomic,retain) _SFPBDate * date; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(_SFPBDate *)date;
-(id)initWithDictionary:(id)arg1;
-(void)setDate:(id)arg1;
-(id)initWithJSON:(id)arg1;
-(NSData *)jsonData;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _SFPBDate, NSData, NSString;

@interface _SFPBCalendarImage : PBCodable <_SFPBCalendarImage, NSSecureCoding> {

	_SFPBDate* _date;

}

@property (nonatomic,retain) _SFPBDate * date;                      //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(_SFPBDate *)date;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setDate:(_SFPBDate *)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithFacade:(id)arg1 ;
@end

