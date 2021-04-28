/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/Versions/A/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BRFieldCKInfo, NSData;

@interface BRCSideCarInfo : NSObject {

	BRFieldCKInfo* _ckInfo;
	long long _favoriteRank;
	long long _lastUsedTime;
	NSData* _finderTags;

}

@property (nonatomic,retain) BRFieldCKInfo * ckInfo;              //@synthesize ckInfo=_ckInfo - In the implementation block
@property (assign,nonatomic) long long lastUsedTime;              //@synthesize lastUsedTime=_lastUsedTime - In the implementation block
@property (assign,nonatomic) long long favoriteRank;              //@synthesize favoriteRank=_favoriteRank - In the implementation block
@property (nonatomic,retain) NSData * finderTags;                 //@synthesize finderTags=_finderTags - In the implementation block
-(id)description;
-(id)debugDescription;
-(long long)lastUsedTime;
-(long long)favoriteRank;
-(void)setFavoriteRank:(long long)arg1 ;
-(id)descriptionWithContext:(id)arg1 ;
-(char)hasfieldsToSync;
-(BRFieldCKInfo *)ckInfo;
-(void)setCkInfo:(BRFieldCKInfo *)arg1 ;
-(void)setLastUsedTime:(long long)arg1 ;
-(NSData *)finderTags;
-(void)setFinderTags:(NSData *)arg1 ;
@end

