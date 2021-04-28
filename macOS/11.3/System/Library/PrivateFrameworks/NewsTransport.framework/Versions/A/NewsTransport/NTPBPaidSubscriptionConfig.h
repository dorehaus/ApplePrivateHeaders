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

@interface NTPBPaidSubscriptionConfig : PBCodable <NSCopying> {

	long long _maxGroupSizeIPad;
	long long _maxGroupSizeIPhone;
	long long _maxTimesHeadlineInGroup;
	SCD_Struct_NT5 _has;

}

@property (assign,nonatomic) char hasMaxGroupSizeIPad; 
@property (assign,nonatomic) long long maxGroupSizeIPad;                     //@synthesize maxGroupSizeIPad=_maxGroupSizeIPad - In the implementation block
@property (assign,nonatomic) char hasMaxGroupSizeIPhone; 
@property (assign,nonatomic) long long maxGroupSizeIPhone;                   //@synthesize maxGroupSizeIPhone=_maxGroupSizeIPhone - In the implementation block
@property (assign,nonatomic) char hasMaxTimesHeadlineInGroup; 
@property (assign,nonatomic) long long maxTimesHeadlineInGroup;              //@synthesize maxTimesHeadlineInGroup=_maxTimesHeadlineInGroup - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(long long)maxGroupSizeIPad;
-(void)setMaxGroupSizeIPad:(long long)arg1 ;
-(void)setHasMaxGroupSizeIPad:(char)arg1 ;
-(char)hasMaxGroupSizeIPad;
-(long long)maxGroupSizeIPhone;
-(void)setMaxGroupSizeIPhone:(long long)arg1 ;
-(void)setHasMaxGroupSizeIPhone:(char)arg1 ;
-(char)hasMaxGroupSizeIPhone;
-(long long)maxTimesHeadlineInGroup;
-(void)setMaxTimesHeadlineInGroup:(long long)arg1 ;
-(void)setHasMaxTimesHeadlineInGroup:(char)arg1 ;
-(char)hasMaxTimesHeadlineInGroup;
@end

