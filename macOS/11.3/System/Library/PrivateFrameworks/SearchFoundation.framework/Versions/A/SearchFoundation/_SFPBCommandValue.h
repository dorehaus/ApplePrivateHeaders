/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/Versions/A/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBCommandValue.h>
@class _SFPBReferentialCommand, NSData;


@protocol _SFPBCommandValue <NSObject>
@property (nonatomic,retain) _SFPBReferentialCommand * referentialCommand; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithDictionary:(id)arg1;
-(id)initWithJSON:(id)arg1;
-(NSData *)jsonData;
-(_SFPBReferentialCommand *)referentialCommand;
-(void)setReferentialCommand:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _SFPBReferentialCommand, NSData, NSString;

@interface _SFPBCommandValue : PBCodable <_SFPBCommandValue, NSSecureCoding> {

	_SFPBReferentialCommand* _referentialCommand;

}

@property (nonatomic,retain) _SFPBReferentialCommand * referentialCommand;              //@synthesize referentialCommand=_referentialCommand - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithFacade:(id)arg1 ;
-(_SFPBReferentialCommand *)referentialCommand;
-(void)setReferentialCommand:(_SFPBReferentialCommand *)arg1 ;
@end

