/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/Versions/A/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBMessageAttachment.h>
@class _SFPBURL, NSData;


@protocol _SFPBMessageAttachment <NSObject>
@property (assign,nonatomic) int type; 
@property (nonatomic,retain) _SFPBURL * url; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setType:(int)arg1;
-(int)type;
-(id)initWithDictionary:(id)arg1;
-(_SFPBURL *)url;
-(void)setUrl:(id)arg1;
-(id)initWithJSON:(id)arg1;
-(NSData *)jsonData;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _SFPBURL, NSData, NSString;

@interface _SFPBMessageAttachment : PBCodable <_SFPBMessageAttachment, NSSecureCoding> {

	int _type;
	_SFPBURL* _url;

}

@property (assign,nonatomic) int type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) _SFPBURL * url;                        //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)initWithDictionary:(id)arg1 ;
-(_SFPBURL *)url;
-(void)setUrl:(_SFPBURL *)arg1 ;
-(id)dictionaryRepresentation;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithFacade:(id)arg1 ;
@end

