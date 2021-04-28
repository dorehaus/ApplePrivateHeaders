/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/Versions/A/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsToday/NewsToday-Structs.h>
#import <libobjc.A.dylib/NTTodayProtoitem.h>

@protocol FCHeadlineProviding;
@class NSString, SFSearchResult, NSURL;

@interface NTTodayHeadlineProtoitem : NSObject <NTTodayProtoitem> {

	NSString* _identifier;
	id<FCHeadlineProviding> _headline;
	SFSearchResult* _searchResult;
	NSURL* _actionURL;

}

@property (nonatomic,copy,readonly) id<FCHeadlineProviding> headline;              //@synthesize headline=_headline - In the implementation block
@property (nonatomic,copy,readonly) SFSearchResult * searchResult;                 //@synthesize searchResult=_searchResult - In the implementation block
@property (nonatomic,copy,readonly) NSURL * actionURL;                             //@synthesize actionURL=_actionURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(NSString *)identifier;
-(id<FCHeadlineProviding>)headline;
-(SFSearchResult *)searchResult;
-(NSURL *)actionURL;
-(id)assetHandlesWithOperationInfo:(id)arg1 ;
-(id)itemWithContentContext:(id)arg1 operationInfo:(id)arg2 sectionDescriptor:(id)arg3 todayData:(id)arg4 assetFileURLsByRemoteURL:(id)arg5 preferredDynamicSlotAllocation:(unsigned long long)arg6 ;
-(id)initWithIdentifier:(id)arg1 headline:(id)arg2 searchResult:(id)arg3 actionURL:(id)arg4 ;
@end

