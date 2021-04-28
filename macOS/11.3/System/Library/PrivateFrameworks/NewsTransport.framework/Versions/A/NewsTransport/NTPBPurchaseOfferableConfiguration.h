/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/Versions/A/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBPurchaseOfferableConfiguration : PBCodable <NSCopying> {

	NSString* _purchaseId;
	char _allowsPublisherPadApp;
	char _allowsPublisherPhoneApp;
	char _allowsPublisherWebSite;
	char _preferredOffer;
	SCD_Struct_NT2 _has;

}

@property (nonatomic,readonly) char hasPurchaseId; 
@property (nonatomic,retain) NSString * purchaseId;                        //@synthesize purchaseId=_purchaseId - In the implementation block
@property (assign,nonatomic) char hasAllowsPublisherPhoneApp; 
@property (assign,nonatomic) char allowsPublisherPhoneApp;                 //@synthesize allowsPublisherPhoneApp=_allowsPublisherPhoneApp - In the implementation block
@property (assign,nonatomic) char hasAllowsPublisherPadApp; 
@property (assign,nonatomic) char allowsPublisherPadApp;                   //@synthesize allowsPublisherPadApp=_allowsPublisherPadApp - In the implementation block
@property (assign,nonatomic) char hasAllowsPublisherWebSite; 
@property (assign,nonatomic) char allowsPublisherWebSite;                  //@synthesize allowsPublisherWebSite=_allowsPublisherWebSite - In the implementation block
@property (assign,nonatomic) char hasPreferredOffer; 
@property (assign,nonatomic) char preferredOffer;                          //@synthesize preferredOffer=_preferredOffer - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setPurchaseId:(NSString *)arg1 ;
-(char)hasPurchaseId;
-(NSString *)purchaseId;
-(void)setAllowsPublisherPhoneApp:(char)arg1 ;
-(void)setHasAllowsPublisherPhoneApp:(char)arg1 ;
-(char)hasAllowsPublisherPhoneApp;
-(void)setAllowsPublisherPadApp:(char)arg1 ;
-(void)setHasAllowsPublisherPadApp:(char)arg1 ;
-(char)hasAllowsPublisherPadApp;
-(void)setAllowsPublisherWebSite:(char)arg1 ;
-(void)setHasAllowsPublisherWebSite:(char)arg1 ;
-(char)hasAllowsPublisherWebSite;
-(void)setPreferredOffer:(char)arg1 ;
-(void)setHasPreferredOffer:(char)arg1 ;
-(char)hasPreferredOffer;
-(char)allowsPublisherPhoneApp;
-(char)allowsPublisherPadApp;
-(char)allowsPublisherWebSite;
-(char)preferredOffer;
@end

