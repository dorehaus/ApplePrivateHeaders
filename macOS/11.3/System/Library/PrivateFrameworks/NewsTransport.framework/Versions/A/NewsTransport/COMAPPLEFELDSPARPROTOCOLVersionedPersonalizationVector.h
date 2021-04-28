/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/Versions/A/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector : PBCodable <NSCopying> {

	NSData* _bundleSubscribedVector;
	NSString* _bundleSubscribedVectorVersion;
	NSData* _personalizationVector;
	NSString* _version;

}

@property (nonatomic,readonly) char hasPersonalizationVector; 
@property (nonatomic,retain) NSData * personalizationVector;                        //@synthesize personalizationVector=_personalizationVector - In the implementation block
@property (nonatomic,readonly) char hasVersion; 
@property (nonatomic,retain) NSString * version;                                    //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) char hasBundleSubscribedVector; 
@property (nonatomic,retain) NSData * bundleSubscribedVector;                       //@synthesize bundleSubscribedVector=_bundleSubscribedVector - In the implementation block
@property (nonatomic,readonly) char hasBundleSubscribedVectorVersion; 
@property (nonatomic,retain) NSString * bundleSubscribedVectorVersion;              //@synthesize bundleSubscribedVectorVersion=_bundleSubscribedVectorVersion - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)version;
-(id)dictionaryRepresentation;
-(void)setVersion:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)hasVersion;
-(void)setPersonalizationVector:(NSData *)arg1 ;
-(char)hasPersonalizationVector;
-(NSData *)personalizationVector;
-(void)setBundleSubscribedVector:(NSData *)arg1 ;
-(void)setBundleSubscribedVectorVersion:(NSString *)arg1 ;
-(char)hasBundleSubscribedVector;
-(char)hasBundleSubscribedVectorVersion;
-(NSData *)bundleSubscribedVector;
-(NSString *)bundleSubscribedVectorVersion;
@end

