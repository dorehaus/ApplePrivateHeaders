/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/Versions/A/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBImageOption.h>
@class NSString, _SFPBStringDictionary, NSData;


@protocol _SFPBImageOption <NSObject>
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * defaultValue; 
@property (nonatomic,retain) _SFPBStringDictionary * options; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSString *)name;
-(id)initWithDictionary:(id)arg1;
-(void)setName:(id)arg1;
-(void)setOptions:(id)arg1;
-(_SFPBStringDictionary *)options;
-(NSString *)defaultValue;
-(void)setDefaultValue:(id)arg1;
-(id)initWithJSON:(id)arg1;
-(NSData *)jsonData;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, _SFPBStringDictionary, NSData;

@interface _SFPBImageOption : PBCodable <_SFPBImageOption, NSSecureCoding> {

	NSString* _name;
	NSString* _defaultValue;
	_SFPBStringDictionary* _options;

}

@property (nonatomic,copy) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * defaultValue;                        //@synthesize defaultValue=_defaultValue - In the implementation block
@property (nonatomic,retain) _SFPBStringDictionary * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(id)initWithDictionary:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setOptions:(_SFPBStringDictionary *)arg1 ;
-(_SFPBStringDictionary *)options;
-(id)dictionaryRepresentation;
-(NSString *)defaultValue;
-(void)setDefaultValue:(NSString *)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithFacade:(id)arg1 ;
@end

