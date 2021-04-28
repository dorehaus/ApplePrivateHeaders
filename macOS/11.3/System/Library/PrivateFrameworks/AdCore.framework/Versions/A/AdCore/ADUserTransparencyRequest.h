/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/Versions/A/AdCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AdCore/AdCore-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface ADUserTransparencyRequest : PBRequest <NSCopying> {

	NSData* _contentiAdID;
	NSData* _dPID;
	NSData* _iAdID;
	NSString* _iTunesStore;
	NSString* _localeIdentifier;
	char _isSignedInToiTunes;
	char _limitAdTracking;
	SCD_Struct_AD11 _has;

}

@property (nonatomic,readonly) char hasDPID; 
@property (nonatomic,retain) NSData * dPID;                            //@synthesize dPID=_dPID - In the implementation block
@property (nonatomic,readonly) char hasLocaleIdentifier; 
@property (nonatomic,retain) NSString * localeIdentifier;              //@synthesize localeIdentifier=_localeIdentifier - In the implementation block
@property (nonatomic,readonly) char hasIAdID; 
@property (nonatomic,retain) NSData * iAdID;                           //@synthesize iAdID=_iAdID - In the implementation block
@property (nonatomic,readonly) char hasContentiAdID; 
@property (nonatomic,retain) NSData * contentiAdID;                    //@synthesize contentiAdID=_contentiAdID - In the implementation block
@property (nonatomic,readonly) char hasITunesStore; 
@property (nonatomic,retain) NSString * iTunesStore;                   //@synthesize iTunesStore=_iTunesStore - In the implementation block
@property (assign,nonatomic) char hasLimitAdTracking; 
@property (assign,nonatomic) char limitAdTracking;                     //@synthesize limitAdTracking=_limitAdTracking - In the implementation block
@property (assign,nonatomic) char hasIsSignedInToiTunes; 
@property (assign,nonatomic) char isSignedInToiTunes;                  //@synthesize isSignedInToiTunes=_isSignedInToiTunes - In the implementation block
+(id)options;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)localeIdentifier;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setLocaleIdentifier:(NSString *)arg1 ;
-(void)setDPID:(NSData *)arg1 ;
-(void)setIAdID:(NSData *)arg1 ;
-(char)hasIAdID;
-(char)hasDPID;
-(NSData *)iAdID;
-(NSData *)dPID;
-(void)setContentiAdID:(NSData *)arg1 ;
-(char)hasContentiAdID;
-(NSData *)contentiAdID;
-(char)hasLocaleIdentifier;
-(void)setITunesStore:(NSString *)arg1 ;
-(char)hasITunesStore;
-(void)setLimitAdTracking:(char)arg1 ;
-(void)setHasLimitAdTracking:(char)arg1 ;
-(char)hasLimitAdTracking;
-(NSString *)iTunesStore;
-(char)limitAdTracking;
-(void)setIsSignedInToiTunes:(char)arg1 ;
-(void)setHasIsSignedInToiTunes:(char)arg1 ;
-(char)hasIsSignedInToiTunes;
-(char)isSignedInToiTunes;
@end
