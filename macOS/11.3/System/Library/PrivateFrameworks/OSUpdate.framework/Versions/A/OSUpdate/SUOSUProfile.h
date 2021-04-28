/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OSUpdate.framework/Versions/A/OSUpdate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SUOSUProfile : NSObject {

	char _enableOnProdFused;
	NSString* _name;
	NSString* _catalogURL;
	NSString* _audienceID;
	NSString* _profileLink;

}

@property (retain) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (retain) NSString * catalogURL;               //@synthesize catalogURL=_catalogURL - In the implementation block
@property (retain) NSString * audienceID;               //@synthesize audienceID=_audienceID - In the implementation block
@property (retain) NSString * profileLink;              //@synthesize profileLink=_profileLink - In the implementation block
@property (assign) char enableOnProdFused;              //@synthesize enableOnProdFused=_enableOnProdFused - In the implementation block
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setCatalogURL:(NSString *)arg1 ;
-(NSString *)catalogURL;
-(id)initWithInfoDictionary:(id)arg1 ;
-(char)enableOnProdFused;
-(void)setEnableOnProdFused:(char)arg1 ;
-(NSString *)audienceID;
-(void)setAudienceID:(NSString *)arg1 ;
-(NSString *)profileLink;
-(void)setProfileLink:(NSString *)arg1 ;
@end

