/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/Versions/A/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSDictionary;

@interface WBSSearchSuggestionsFetcherResponse : NSObject <NSSecureCoding> {

	NSArray* _suggestions;
	long long _sizeInBytes;
	long long _statusCode;
	NSDictionary* _timingData;

}

@property (nonatomic,copy,readonly) NSArray * suggestions;                  //@synthesize suggestions=_suggestions - In the implementation block
@property (nonatomic,readonly) long long sizeInBytes;                       //@synthesize sizeInBytes=_sizeInBytes - In the implementation block
@property (nonatomic,readonly) long long statusCode;                        //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * timingData;              //@synthesize timingData=_timingData - In the implementation block
+(char)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)statusCode;
-(NSArray *)suggestions;
-(long long)sizeInBytes;
-(NSDictionary *)timingData;
-(id)initWithSuggestions:(id)arg1 sizeInBytes:(long long)arg2 statusCode:(long long)arg3 timingData:(id)arg4 ;
@end

