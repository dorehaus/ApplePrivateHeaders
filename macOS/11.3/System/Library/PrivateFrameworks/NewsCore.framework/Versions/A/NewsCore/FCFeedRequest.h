/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FCFeedRange, FCFeedItemFeature;

@interface FCFeedRequest : NSObject <NSCopying> {

	char _cachedOnly;
	NSString* _feedID;
	long long _feedBin;
	FCFeedRange* _feedRange;
	unsigned long long _maxCount;
	FCFeedItemFeature* _requiredFeature;

}

@property (nonatomic,copy) NSString * feedID;                                //@synthesize feedID=_feedID - In the implementation block
@property (assign,nonatomic) long long feedBin;                              //@synthesize feedBin=_feedBin - In the implementation block
@property (nonatomic,copy) FCFeedRange * feedRange;                          //@synthesize feedRange=_feedRange - In the implementation block
@property (assign,nonatomic) unsigned long long maxCount;                    //@synthesize maxCount=_maxCount - In the implementation block
@property (assign,nonatomic) char cachedOnly;                                //@synthesize cachedOnly=_cachedOnly - In the implementation block
@property (nonatomic,copy) FCFeedItemFeature * requiredFeature;              //@synthesize requiredFeature=_requiredFeature - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)maxCount;
-(void)setMaxCount:(unsigned long long)arg1 ;
-(char)cachedOnly;
-(void)setCachedOnly:(char)arg1 ;
-(void)setFeedID:(NSString *)arg1 ;
-(NSString *)feedID;
-(void)setRequiredFeature:(FCFeedItemFeature *)arg1 ;
-(void)setFeedBin:(long long)arg1 ;
-(void)setFeedRange:(FCFeedRange *)arg1 ;
-(FCFeedRange *)feedRange;
-(long long)feedBin;
-(FCFeedItemFeature *)requiredFeature;
@end
